#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int v[5] = {4, 1, 2, 5, 3};
    int ordenado = 0;
    while(ordenado==0){
        ordenado = 1;
        for(int i = 0; i < 4; i++){
            if(v[i] > v[i + 1]){
                ordenado = 0;
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }
    }
    //algoritmo bubble sort só performa bem ate 10^4
    for(int i = 0; i < 5; i++){
        cout << v[i] << endl;
    }
    int v2[] = {4, 1, 2, 5, 3};
    sort(v2 , v2 + 5);
    for(int i = 0; i < 5; i++){
        cout << v2[i] << endl;
    }
}
