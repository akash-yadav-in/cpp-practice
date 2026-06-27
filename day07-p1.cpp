#include<iostream>
using namespace std;

// Factorial Funtion
// how it works say if you put a = 3
// factorial[3] = 3*factorial[2]
//factorial[3] = 3*2*factorial[1]
// now since if condition is met if n<=1 case return 1 the final is = 3*2*1 = 6 

int factorial(int n){      
    if(n<=1){
        return 1 ;
    }

     return n*factorial(n-1);
    
}

// NOW writing Fibonachi series as Using recursion
int fibonachi(int n){            //Its working fibonachi(4)
    if (n==1){                   //├── fibonachi(2) → 1
         return 0;               //└── fibonachi(3)
                                 //├── fibonachi(1) → 0
    }                            //└── fibonachi(2) → 1
    if (n==2){                   //= 0+1 = 1
        return 1;                //= 1+1 = 2
    }                        
         
    if (n>2){
    return fibonachi(n-2) +  fibonachi(n-1);
    }                          
                                  
       
       
}


int main(){
    int a , b = 0;
    cout<<"Enter the number You Want to Calculate the Factorial"<<endl;
    cin>>a;
    cout<<"The factoral of " <<a<< " is "<<factorial(a)<<endl;
    cout<<"Which term of Fibonachi series you want to find "<<endl;
    cin>>b;
    cout<<"The " <<b<< " term is "<<fibonachi(b)<<endl;


   
return 0;
}
