#include <iostream>
using namespace std;
/*
In the current semester, you have taken XX RTP courses, YY Audit courses and ZZ Non-RTP courses.

The credit distribution for the courses are:

44 credits for clearing each RTP course.
22 credits for clearing each Audit course.
No credits for clearing a Non-RTP course.
Assuming that you cleared all your courses, report the number of credits you obtain this semester.

*/
int main() {
	int t;
    cin>>t;
    while(t--){
        int rtp,audit,nonrtp;
        cin>>rtp>>audit>>nonrtp;
        cout<<rtp*4+audit*2<<endl;
    }
	return 0;
}
