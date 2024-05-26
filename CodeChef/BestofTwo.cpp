#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    
	    if(a>= b){
	        cout << "YES" << endl;
	    }if(a<b){
	        cout << "NO" << endl;
	    }
	    
	}
	return 0;
}
