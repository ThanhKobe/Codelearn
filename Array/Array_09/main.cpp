#include <iostream>

using namespace std;

int a[100001], b[100001], c[100001];

int main (){
	int n, m;
	// nhap mang a
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];	
	}
	// nhap mang b
	cin >> m;
	for (int i = 0 ; i < m; i++){
		cin >> b[i];	
	}
	
	int size = 0; // luu so luong phan tu cua day C
	int  i = 0 , j = 0;
	
	while (i < n && j < m){
		if (a[i] < b[j]){
			c[size] = a[i];
			size = size + 1;
			i = i + 1;		
		}	
		else {
			c[size] = b[j];
			size = size + 1;
			j = j + 1;
				
		}
	}

	while ( i < n ){
		c[size] = a[i];
		size = size + 1;
		i = i+1;

	}

	while (j < m){
		c[size] = b[j];
		size = size + 1;
		j = j + 1;
			
	}
	
	for (int i = 0; i < size ; i++){
		cout << c[i] << " ";
	}
	return 0;
}	
