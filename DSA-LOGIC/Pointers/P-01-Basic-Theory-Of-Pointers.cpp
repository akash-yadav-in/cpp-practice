#include<iostream>
using namespace std;
/*
---- POINTER ------
IMPORTANT things to note  
1-----> (&) (called as m percent)-----> gives the address of any int ,  char etc in the memory in hexadecimal number 
2-----> Pointer has special varibles that store the address of the other variables
3-----> example if we want to to create an int pointer 
        then we make it like this ---> int*ptr = &a where ptr is the pointer storing the value of int a variable


*/


int main(){
    // This is Basic Pointer Example
    int a = 10;
    int* ptr0 = &a;
    cout<<"1--> The value of the address of a is "<<"  "<<ptr0<<endl<<endl;


    // This is Pointer to Pointer (storing a pointer address in a new pointer)
    // New pointer should be the same type os old pointer type 
    int b = 12;
    int* ptr1 = &b;
    // Below ** reperesent that ptr2 is  storing the address of ptr1
    int** ptr2 = &ptr1; 
     cout<<"2--> The value of the address of b  "<<endl
     <<"     "<<"Where Pointer 1 address is "<<ptr1<<"  "<<endl
     <<"     "<<"And Pointer 2 address is "<<" "<<ptr2<<endl<<endl;


     // Derefrence operator (meaning addres pe jo value hai vo finding )
     // represntation = *(&a) ----> this will give the value store at the address of a
     cout<<"3----> the value at "<<ptr0<<" is "<<*(&a)<<endl;
     cout<<"4----> the value at "<<ptr1<<" is "<<*(&b)<<endl;
     cout<<"5----> the value at (pointer ----> pointer case ) "<<ptr2<<" is "<<*(ptr1)<<endl;



    
   
return 0;
}
