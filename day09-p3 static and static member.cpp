#include<iostream>
#include<string>
using namespace std;
// use of static variable 
// WHENEVER A STATIC VARIBLE IS MADE IT NEED TO BE INTIALIZE FROM 0
// BY DEFAULT IT IS INTIALISED FROM 0
// we use static funtion those who can access the static variables


class Employee{
    string name;
    int id;
    static int count; // for defining of count

    public:
    void Empname(void){
        cout<<"Write Your Name "<<endl;
        cin>>name;
        }
    void setdata(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count ++;
    }
    void getData(void){
        cout<<"The id of "<<name<<" is "<<id<<" and "<<(name)<<"'s "<<"Emplyoee number is "<<count<<endl;
        
    }

    // Here we made a static member function jo only static ko access
    static void getCount(void){
        // like in cout we only can access count and not like ids etc

        cout<<"The value of count is "<<count<<endl;
    }


};
// We Write the static variable outside the Class

int Employee :: count;

int main(){
   
    Employee x, y, z;
    x.Empname();
   // x.id = 1;    this is wrong as id and 
   // x.count = 3; count are private members we can do these things with public only
    x.setdata();
    x.getData();

    Employee::getCount();  // this is How do we use get count 

    y.Empname();
    y.setdata();
    y.getData();
    Employee::getCount();
    
    z.Empname();
    z.setdata();
    z.getData();
    Employee::getCount();

    
    
    
return 0;
}
