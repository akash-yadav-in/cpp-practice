#include <iostream>
using namespace std;

// Main Object is printing this form
// 1 2 3
// 4 5 6
// 7 8 9

int main()
{

   int n = 2;
   int num = 1;
   for (int i = 0; i <= n; i++)
   {
      for (int a = 0; a <= n; a++)
      {
         cout <<" "<< num;
         num++;
      }

      cout << endl;
   }

   return 0;
}
