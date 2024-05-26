#include <iosream>

using namespace std;


/*
 En Chefland, un impuesto de rupias 1010 se deduce si el ingreso total es estrictamente superior a las rupias 100.
*/

void main(){
	
	int t;
	cin >> t;
	//The first line of input will contain a single integer TT, denoting the number of test cases.
	while(t--){
		int n;
		cin >> n;
		//The first and only line of each test case contains a single integer X— your total income.
		if(n > 100){
			cout << n - 10 << endl;
		}
		else{
			cout << n << endl;
		}
	}
}	
