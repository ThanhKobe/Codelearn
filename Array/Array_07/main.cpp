#include <iostream>

using namespace std; 
int main()
{//////khai bao mang du lieu
    int n;
    int a[100001], b[100001];
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
//dem so lan xuat hien so lin nhat
    int max = a[0];
    for(int i = 0; i< n; i++){
        if (a[i]>max){
            max = a[i];
        }
    }
// gan gia tri max vao mang b

    for(int i=0; i<=max ; i++){
        b[i]=0;
    }

    for(int i=0; i<n; i++){
        b[a[i]] +=1;

    }
//xuat gia tri
    for (int i =0; i<=max; i++){
        if (b[i]>0){
            cout << i << "-" << b[i] << "; ";
        }
    }
    return 0;
} 

