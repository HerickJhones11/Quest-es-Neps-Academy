using namespace std;
#include <iostream>
#include <cmath>>

int main() {
	int n;
	cin >> n;
	int q[n], c[n];
	for(int i = 0; i < n; i++){
		cin >> q[i];
		c[i] = -2;
	}

	for(int i = 0; i < n; i++){
		if(q[i] == 0){
			c[i] = 0;
			for(int j = i - 1; j >= 0; j--){
				if(c[j] != -2){
					c[j] = min(c[j], c[j + 1] + 1);
				}else{
					c[j] = c[j + 1] + 1;
				}
				if(c[j] > 9)
					c[j] = 9;
			}
			for(int j = i + 1; j < n; j++){
				if(c[j] != -2){
					c[j] = min(c[j], c[j - 1] + 1);
				}else{
					c[j] = c[j - 1] + 1;
				}
				if(c[j] > 9)
					c[j] = 9;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << c[i] << " ";
	}
}