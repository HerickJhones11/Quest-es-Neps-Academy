#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

struct piloto {
    int id, posicao, pontuacao;
};
int chegada(piloto a, piloto b){
    return a.posicao < b.posicao;
}
int identificador(piloto a, piloto b){
    return a.id < b.id;
}
int solucao(int a, int b){
    return a < b;
}
int main(){
    int g, p, s, k, ki, posicao;
    cin >> g;
    cin >> p;
    for(int t = 1; t <= 100 and g != 0 and p != 0; t++){
        piloto vp[g][p];
        for(int i = 0; i < g; i++){
            for(int j = 0; j < p; j++){
                cin >> posicao;
                vp[i][j].id = j + 1;
                vp[i][j].pontuacao = -1;
                vp[i][j].posicao = posicao;
            }
        }
        cin >> s;
        for(int i = 0; i < s; i++){
            cin >> k;
            int vk[k], vv[p];
            for(int j = 0; j < k; j++){
                cin >> ki;
                vk[j] = ki;
            }
            for(int j = 0; j < g; j++){
                sort(vp[j] , vp[j]+p, chegada);
            }

        
            map<int, int> m;
            auto itr = m.begin();
            for(int j = 0; j < g; j++){
                for(int z = 0; z < k; z++){
                    itr = m.find(vp[j][z].id);
                    if(itr != m.end()){
                        itr->second = itr->second + vk[z]; 
                    }
                    m.insert(pair<int, int>(vp[j][z].id, vk[z]));
                }
            }
            int pont = m[0];
            for(itr = m.begin(); itr != m.end(); itr++){
                pont = max(itr->second, pont);
            }
            for(itr = m.begin(); itr != m.end(); itr++){
                if(itr->second == pont){
                    cout << itr->first << " ";
                }
                
            }
            cout << endl;
        }
        cin >> g;
        cin >> p;
    }
}
