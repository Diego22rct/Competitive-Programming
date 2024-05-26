#include <iostream>
#include <math.h>

using namespace std;



int main() {
	// Chef's dog binary hears frequencies starting from 6767 Hertz to 4500045000 Hertz (both inclusive).
	//If Chef's commands have a frequency of XX Hertz, find whether binary can hear them or not.
	
	int T;
	cin >> T;
	while (T--) {
    	int X;			
    	cin >> X;
    
    	if (X >= 67 && X <= 45000) {
    		cout << "YES" << endl;
    	}
    	else {
    		cout << "NO" << endl;
    	}
	}

	
	return 0;
}
