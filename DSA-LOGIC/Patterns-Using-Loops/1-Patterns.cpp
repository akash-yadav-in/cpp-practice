#include <iostream>
using namespace std;

int main()
{

   int n = 4; // This Thing decides how many vertical 1234 will be printed
   for (int i = 1; i <= n; i++)
   {
      for (int a = 1; a <= 4; a++)  // Here int a decides -> that 1234 will get print once when this loop runs
      {
         cout << a;
      }
      cout << endl;
   }

   return 0;
}
