#include <iostream>
#include <cmath>
using namespace std;
class dist{
    int a, b , c ,d;
    public:
    void setPoint1(int n1, int n2){
        a = n1;
        b = n2;
    }

    void setPoint2(int n3 , int n4){
        c = n3;
        d = n4;
    }

    void distanceCalculate(void){
        cout<<"The distance Between the two point is "<<sqrt(((c - a)*(c - a))+((d - b)*(d - b)))<<endl;
    }


};



int main()
{
    dist m;
    m.setPoint1(2 , 4);
    m.setPoint2(5 , 6);
    m.distanceCalculate();


    

    return 0;
}
