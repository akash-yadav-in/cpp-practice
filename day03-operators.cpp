#include<iostream>

using namespace std;
int main (){

    cout<<"Hello, Admin"<<endl;
    
    int a , b;
    cout<<"The Salary Earned From Buisness is : "<<endl;
    cin>>a;
    cout<<"Salary Earned From University is : "<<endl;
    cin>>b;
    

    cout<<"The Total Monthly Earned Salary is : "<<(a + b)<<endl;
    cout<<"The Average Salary earned is : "<<(a + b)/2<<endl;
    
    cout<<"lets play a Game, Shall we ?."<<endl;
    
    float c,d;
    cout<<"Write Number 1  you wish : "<<endl;
    cin>>c;
    cout<<"Write Number 2 you wish : "<<endl;
    cin>>d;
    cout<<"The sum of The number is :"<<(c + d)<<endl;
    cout<<"The difference of The number is :"<<(c - d)<<endl;
    cout<<"The Product of The number is :"<<(c * d)<<endl;
    cout<<"The division of The number is :"<<(c / d)<<endl;



    int a = 8, b = 5 , c = 6;
    cout<< "If a == b = "<<( a==b)<<endl;
    cout<< "If a != b = "<<( a!=b)<<endl;
    cout<< "If a >= b = "<<( a>=b)<<endl;
    cout<< "If a <= b = "<<( a<=b)<<endl;
    cout<< "If a > b = "<<( a>b)<<endl;
    cout<< "If a < b = "<<( a<b)<<endl;
    cout<< "If a == (b/c) = "<<( a == (b/c))<<endl;
    cout<< "If a >= (b+c) = "<<( a >= (b*c))<<endl;
    cout<< "If a <= (b*c) = "<<( a <= (b*c))<<endl;
    cout<< "If a > (b-c) = "<<( a > (b-c))<<endl;


    cout<< "If (a == b/c) and (a==b) = "<<(( a == (b/c)) && (a==b))<<endl;
    cout<< "If (a <= b/c) and (a>=b) = "<<(( a <= (b/c)) && (a>=b))<<endl;


    





    return 0;
}
