#include <iostream>
using namespace std;

// Can we Overlaoad a template function

template <class T1>

class boil
{
public:
    T1 data;
    boil(T1 x)
    {
        data = x;
    }
    void display();
};

// We can also define the function outside class like this
// and use the template
template <class T1>

void boil<T1>::display()
{
    cout << "The value of data is " << data;
    
    cout<<endl;
}


void func(int a){
    cout<<"I am Junky and my value is "<<a<<endl;
}


template<class T1>
void func(T1 a){
    cout<<"I am a templataised  Junky and my value is " <<a<<endl;
}

int main()
{
    boil<int> c(3);
    c.display();



    func(2);  // Exact math taked highest Priority i.e withou templatised one will run 
    return 0;
}
