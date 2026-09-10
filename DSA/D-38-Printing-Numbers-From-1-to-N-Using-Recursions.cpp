#include <iostream>
using namespace std;
/*
-------------- What to achive with this code -----------
      we have not to use any loops
      and we have to print numbers from 1 to n using recursions only

*/

class Solution
{
public:
  void printNumbers(int i, int n)
  {

    if (i <= n)
    {
      cout << i << endl;
      return printNumbers(i + 1, n);
    }
  }
};
int main()
{
  Solution c;
  c.printNumbers(1, 5);

  return 0;
}
