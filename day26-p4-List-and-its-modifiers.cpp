#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{

    list<int> list1; // This make list of 0 length

    list1.push_back(23); // here we have pushed this numbers
    list1.push_back(7);
    list1.push_back(12);
    list1.push_back(145);

    // list<int> :: iterator iter; // Here we have made an iterator
    // iter = list1.begin(); // This iterator will point to 1st element
    // cout<<*iter<<" ";   This also can be donw using for loop
    // iter++;
    // cout<<*iter<<" ";
cout<<"==============================================="<<endl; 

    cout << "Displaying total element in list 1" << endl;
    display(list1);

    cout<<"Displaying total element in list 1 after SORTING"<<endl;
    list1.sort();
    display(list1);


    

    cout << "Displaying total element in list 1 after pop_back" << endl;
    list1.pop_back(); // Remove an elemnt from back
    display(list1);

    cout << "Displaying total element in list 1 after pop_front" << endl;
    list1.pop_front(); // Remove and element from front
    display(list1);

    cout << "Displaying total element in list 1 after removing 7" << endl;
    list1.remove(7); // This will remove and  element selected like here we have seleceted 7
    display(list1);

    // ONE THING TO NOTICE IS THAT WHEN WE ARE USING MODIFIERS IN LIST 1 ABOVE THEN IN THE NEXT OPEREATION WITH NEXT MODIFIRES IS HAPPENING ON THE REMAINING ELEMENTS AND NOT ON THE ORGINAL ELEMENTS GIVEN IN LIST 1

    // Below is LIST 2

    list<int> list2(3); // Emplty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 56;
    iter++;
    cout << "----------------------------------------------" << endl;
    cout << "Displaying total element in list 2 " << endl;
    display(list2);



    // IS THERE A WAY TO MERGE LIST 1 AND LIST 2 ELEMENTS THEN HERE IS BELOW
   cout<<"==============================================="<<endl; 
    cout<<"List 1 after merging with list 2"<<endl;
    list1.merge(list2);
    display(list1);


    // Reversing the merged list 
cout<<"Reversing the List " <<endl;
    list1.reverse();
    display(list1);
    return 0;
}
