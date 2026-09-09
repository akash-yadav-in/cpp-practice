#include <iostream>
using namespace std;
class Solution
{
public:
  void printNumbers(int n)
  {

    if (n > 0)
    {
      cout << n << endl;
      return printNumbers(n - 1);
    }
  }
};

int main()
{
  Solution c;
  c.printNumbers(5);

  return 0;
}
