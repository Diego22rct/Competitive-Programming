#include <iostream>
using namespace std;
/*
This year XX students joined his class and each student will require one chair to sit on. Chef already has YY chairs in his class. Determine the minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on.
*/
int main() {
	int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>m){
            cout<<n-m<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        
    }

	return 0;
}
