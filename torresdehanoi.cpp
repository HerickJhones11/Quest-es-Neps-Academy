#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int i = 0, arrN[31], aux;
    cin >> n;
    while(n != 0){
        arrN[i] = n;
        i++;
        aux = i;
        cin >> n;
    }
    for(int i = 0; i < aux; i++){
        if(i != 0){
            cout << endl ;
        }
        int num = ((pow(2, arrN[i])) - 1);
        cout << "Teste "  << i + 1 << endl << num;
        if(i + 1 != aux){
            cout << endl ;
        }
    }
}
