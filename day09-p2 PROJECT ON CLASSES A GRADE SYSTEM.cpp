#include <iostream>
#include <string>
using namespace std;

class student
{
   string name;
   float marks[5];
   int counter;

public:
   void counterfun(void) { counter = 1; }
   void studentDetail(void);
   void calculate(void);
};
void student ::studentDetail(void)
{

   cout << "Name of Student " << " is " << endl;
   cin >> name;
   cout << "Write Your Marks In Maths" << endl;
   cin >> marks[0];
   cout << "Write Your Marks In Hindi" << endl;
   cin >> marks[1];
   cout << "Write Your Marks In English" << endl;
   cin >> marks[2];
   cout << "Write Your Marks In Science" << endl;
   cin >> marks[3];
   cout << "Write Your Marks In SST" << endl;
   cin >> marks[4];
   
}

void student ::calculate(void)
{
   float a = (((marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) * 100) / 500);
   if ((marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) <= 500)
   {
      cout << "Report Card Of " << name << " is " << endl;
      cout << "The Total Marks Obtained By " << name << " is " << (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) <<endl;
      cout << "The Total Percentage of  " << name << " is " << (((marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) * 100) / 500) << endl;
      if (a >=90)
      {
         cout << "Grade A" << endl;
      }
      else if ((a >=70) && (a < 90))
      {
         cout << "Grade B" << endl;
      }
      else if ((a >=60) && (a <70))
      {
         cout << "Grade C" << endl;
      }
      else if (a <60)
      {
         cout << "Fail" << endl;
      }
   }

   else
   {

      cout << "The Obtained Marks " << name << " Cannot Exceed (500)" << endl;
      exit(0);
   }
}

int main()
{
   student x;
   x.counterfun();
   x.studentDetail();
   x.calculate();

   return 0;
}
