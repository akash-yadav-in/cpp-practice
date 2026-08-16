#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int a;
   cout << "Enter The Number You Wnt To Check is Prime or Not: " << endl;
   cin >> a;

   bool isPrime = true;
   for (int i = 2; i < sqrt(a); i++)
   {
      if ((a % i) == 0)
      {

         isPrime = false;

         break;
      }
   }
   if (isPrime == true)
   {
      cout << "Prime" << endl;
   }
   else
   {
      cout << "Non-Prime" << endl;
   }

   return 0;
}
