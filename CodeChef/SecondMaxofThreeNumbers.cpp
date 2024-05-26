#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        //con b
        if(a>b && b>c || c>b && b>a){
            cout << b << endl;
        }
        // con a
        if(b>a && a>c || c>a && a>b){
            cout << a << endl; 
        }
        //con c
        if(a>c && c>b || b>c && c > a){
            cout << c << endl;  
        }

	}
	return 0;
}
