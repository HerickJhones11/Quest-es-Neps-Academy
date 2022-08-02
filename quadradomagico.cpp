#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int Q[n][n], somaLinha = 0,somaColuna = 0,somaDiagonal = 0, m = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> Q[i][j];
		}
	}
	for(int j = 0; j < n; j++){
		somaLinha += Q[0][j];
	}
	somaDiagonal += Q[0][0];
	for(int i = 1; i < n; i++){
		int aux = somaLinha;
		somaLinha = 0;
		for(int j = 0; j < n; j++){
			somaLinha += Q[i][j];
			if(i == j)
				somaDiagonal += Q[i][j];
		}
		if(somaLinha != aux)
			m = -1;
	}
	if(somaDiagonal != somaLinha)
		m = -1;
	
	int j = n - 1;
	somaDiagonal = 0;
	for(int i = 0; i < n; i++, j--){
		somaDiagonal += Q[i][j];
	}
	if(somaDiagonal != somaLinha)
		m = -1;
	for(int i = 0; i < n; i++){
		somaColuna += Q[i][0];
	}
	for(int j = 1; j < n; j++){
		int aux = somaColuna;
		somaColuna = 0;
		for(int i = 0; i < n; i++){
			somaColuna += Q[i][j];
		}
		if(somaColuna != aux)
			m = -1;
	}
	if(somaColuna != somaLinha){
		m = -1;
	}
	if(m != -1)
		m = somaColuna;
	
	cout << m;

}