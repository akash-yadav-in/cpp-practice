#include<iostream>
using namespace std;


// By these 2 sum function of 2 and 3 var we can see how c++ automatically uses the prototype as per given integers
int sum(int a , int b){ // Using 2 Arguments

    return a + b;
}


int sum(int a , int b, int c){ //Using 3 Arguments

    return a + b + c;
}

// Finding The volume of cylinder
float volume(float r, float h){

    return (3.14*r*r*h);
}

int main(){
    
    float a, b;

    cout<<"The sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"The sum of 3 and 4 and 23 is "<<sum(3,4,23)<<endl;

    cout<<" Tell me radius in meter "<<endl;
    cin>>a;
    cout<<"Tell me height oof cyliner in meter "<<endl;
    cin>>b;
    cout<<" The Volume of cylinder is "<<volume(a,b)<<endl;
   
return 0;
}
