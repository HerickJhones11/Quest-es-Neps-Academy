#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


struct pessoa {
    int id, valor;
};

int valor(pessoa a, pessoa b){
    return a.valor < b.valor;
}
int identificador(pessoa a, pessoa b){
    return a.id < b.id;
}
int main(){
    int n, ni, m, mi;
    vector<pessoa> v;
    vector<int> s;
    vector<pessoa> r;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ni;
        pessoa p;
        p.valor = ni;
        p.id = i + 1;
        v.push_back(p);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> mi;
        s.push_back(mi);
    }
    sort(s.begin(), s.end(), greater<int>());
    sort(v.begin(), v.end(), valor);
    

    for(int i = 0; i < (int) v.size(); i++){
        int insert = 1;
        if(s.size() != 0){
            if(s.back() == v[i].valor){
                insert = 0;
                s.pop_back();
            }
        }
        if(insert)
            r.push_back(v[i]);
    }
    sort(r.begin(), r.end(), identificador);
    
    for(int i = 0; i < (int) r.size(); i++){
        cout << r[i].valor << " ";
    }
   

    
}
