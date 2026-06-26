#include<iostream>
using namespace std;

int sum(int a, int b){

    int c = (a+b);
    return c;    
}

// WAY TO SWAP VARIBLES  BUT THIS WILL NOT SWAP THE NUMBERS
//void swap(int a, int b){
//                     // temp  |  a  |   b
//    int temp = a;    //   4   |  4  |   5
//    a = b;           //   4   |  5  |   5
 //   b = temp;        //   4   |  5  |   4     
//}


// WE HAVE TO MAKE INT POINTER

//Call by reference USING POINTERS TYPE 1
void swapPointer(int*a, int*b){
                     // temp  |  a  |   b
    int temp = *a;    //   4   |  4  |   5
    *a = *b;           //   4   |  5  |   5
     *b = temp;        //   4   |  5  |   4     
}


// Call by reference using c++ Variables
void swapReferenceVar(int &c, int &d){
                     // temp  |  a  |   b
    int temp = c;    //   4   |  4  |   5
    c = d;           //   4   |  5  |   5
     d = temp;        //   4   |  5  |   4     
}

// IF i WANT TO RETURN UPDATED VALUE OF M

int & swapReferenceVari(int &m, int &n){
                    
    int temp = m;   
    m = n;          
     n = temp;            
    
     return m;


    }




int main(){
    int a =4, b =5, c=5, d=9 , m=56 ,n =79;

    cout<<"The sum of 4 and 5 is "<<sum(a,b)<<endl;
    cout<<"The Value of a is :"<<a<<endl<<"The Value of b is :"<<b<<endl;
    // swap(x ,y); this Will not swap any value
    
    swapPointer(&a ,&b); // Swap  BY REFERENCE USING POINTERS
    cout<<"The Value of a is :"<<a<<endl<<"The Value of b is :"<<b<<endl;
   
   
    swapReferenceVar(c , d); // this is swap by ReferenceVar
    cout<<"The Value of c is :"<<c<<endl<<"The Value of d is :"<<d<<endl;

    swapReferenceVari(m , n); // Here this will return the updated value of m
    cout<<"The Value of m is :"<<m<<endl<<"The Value of n is :"<<n<<endl;

    






return 0;
}
