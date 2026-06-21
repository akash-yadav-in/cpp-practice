#include<iostream>
using namespace std;
int main(){
 // Table of n using for loop
 int a,p;

 cout<<"Write the Number for which you want the table"<<endl;
 cin>>p;
 for(a=1; a<=10; a++){

    cout<<a*p<<endl;

 }

 //Table of n using while loop

 int m =1;

 while(m<=10){

    cout<<m*p<<endl;
    m++;
 }

 // Write table of n using do while loop
int o =1;

 do{
    cout<<o*p<<endl;
    o++;
 }while(o<=10);

 return 1;



}
