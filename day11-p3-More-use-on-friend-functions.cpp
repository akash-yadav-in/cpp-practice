#include <iostream>
using namespace std;

// HERE WE HAVE TO DECLARE THAT COMPLERE THST Y IS PRESENT 
// FOR IT TO RUN THE FREIND EARLIER DECLARED IN CLASS X
class y;


class x
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(x , y);
};
class y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }

    friend void add(x , y);
};

// we defined a the finction here

void add(x o1, y o2)
{
    cout << "Summing of Data of X and Y object gives me " << (o1.data + o2.num) << endl;
}

class c2;

class c1{
    int val;

    friend void exchange(c1 & ,  c2&);
    public:
    void intdata(int a){
        val = a;
    }
    void display(void){

        cout<<val<<endl;
    }
   

    

};

class c2{
    int val1;

   friend void exchange(c1 & ,  c2&);

    public:
    void intdata(int a){
        val1 = a;
    }
    void display(void){

        cout<<val1<<endl;
    }
    

};

/*
TRICK USED TO SWAP ANY TWO NUMBERs (a , b) IS :
WE USED THIS LOGIC 
AND THAT IS 

temp = a;
a = b;
b = temp;

*/

void exchange(c1 &x,  c2 &y){
    int temp = x.val;
    x.val = y.val1;
    y.val1 = temp;


}


int main()
{
    x r;
    r.setValue(2);

    y b;
    b.setValue(3);
    add(r ,b);

    c1 j;
    c2 k;
    j.intdata(34);
    k.intdata(55);
    exchange(j , k);
    cout<<"The Value after exchanging becomes: ";
    j.display();
     cout<<"The Value after exchanging becomes: ";
    k.display();


   

    return 0;
}
