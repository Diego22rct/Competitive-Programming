#include <iostream>
using namespace std;

int
main ()
{
  int T;
  cin >> T;


  while (T--)
    {
      int A, B;
      cin >> A >> B;

      //logic
      cout << endl;
      if (A < B)
	{
	  cout << "B" << endl;
	}
      if (A > B)
	{

	  cout << "A" << endl;
	}

    }
  return 0;
}
