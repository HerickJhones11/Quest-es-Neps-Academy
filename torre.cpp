#include <iostream>
using namespace std;

int main(){
    int n;
	cin >> n;
	int **q;
	q = new int *[n];
	for(int i = 0; i < n; i++)
    	q[i] = new int[n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> q[i][j];
		}
	}
	int somaLinha = 0, somaColuna = 0, valoresLinha[n], valoresColuna[n];
	for(int i = 0; i < n; i++){
		somaLinha = 0;
		for(int j = 0; j < n; j++){
			somaLinha += q[i][j];
		}
		valoresLinha[i] = somaLinha;
	}
	
	for(int j = 0; j < n; j++){
		somaColuna = 0;
		for(int i = 0; i < n; i++){
			somaColuna += q[i][j];
		}
		valoresColuna[j] = somaColuna;
	}

	int peso = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int p =  valoresColuna[j] + valoresLinha[i] - (2*q[i][j]);
			peso = max(p, peso); 
		}
	}
	cout << peso;

	cin >> n;
}