#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int vd[n];
    int vo[n];
    int v[n];

    for(int i = 0; i < n; i++){
        cin >> vd[i];
        vo[i] = vd[i];
    }
    sort(vo, vo+n);
    int cont = 0, start = 0;
    for(int i = 0; i < n; i++){
        if(vd[i] != vo[i]){
            v[i] = vd[i];
            cont++;
        }else{
            v[i] = -1;
        }
    }
    sort(v, v+n);
    cout << cont;
    for(int i = 0; i < n; i++){
        if(v[i] != -1){
            if(start == 0)
                cout << endl;
            cout << v[i] << " ";
            start++;
        }
    }
    
}
