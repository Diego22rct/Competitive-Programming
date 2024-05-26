#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
	
	while(T--){
	   int x, z;
	   cin >> x;
	   z = x-30;
	   
	   if(z>=0){
	       cout << "YES"<< endl;
	   }else{
	       cout << "NO" << endl;
	   }
	   
	}
	return 0;
}
