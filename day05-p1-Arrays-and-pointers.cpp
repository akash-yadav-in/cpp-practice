#include<iostream>
using namespace std;

int main(){
    // ARRAYS
    int marks[4]={2,4,5,6};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // WE CAN CHANGE THE VALUE OF ARRAY
    marks[2] = 34;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // Printing Arrays using FOR LOOP

    for (int i = 0; i<=3; i++)
    {
      
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // PRINTING ARRAYS USING WHILE LOOP
     int a = 0;
     
    while(a<=3){

        cout<<"The value of Marks "<<a<< " is "<<marks[a]<<endl;
        a++;


    }

    // PRINTING ARRAYS USING DO WHILE LOOPS
int m = 0;
    do{
        cout<<"The Value of Marks "<<m<<" is "<<marks[m]<<endl;
        m++;
        
    }while(m<=3);


    // POINTERS AND ARRAYS

     int*z = marks;

     
     cout<<"The value of marks[0] is "<<*z<<endl;
     cout<<"The value of marks[1] is "<<*(z+1)<<endl;
     cout<<"The value of marks[2] is "<<*(z+2)<<endl;
     cout<<"The value of marks[3] is "<<*(z+3)<<endl;













    return 0;
}
 
   
    
    
   
