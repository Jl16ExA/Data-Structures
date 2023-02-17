// CPP program to show the implementation of List
#include <iostream>
#include <iterator>
#include <list>
using namespace std;
  
// function for printing the elements in a list
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

  
// Driver Code
int main()
{
  
    list<int> gqlist1, gqlist2;
    
    //Fill list 1, numebers 0 to 9
    //Fill list 2, even numbers.

    for (int i = 0; i < 10; ++i) {
        gqlist1.push_back(i);
        if(i%2 == 0){
gqlist2.push_back(i);
        }
    }

    cout << "List 1: " << endl;
    showlist(gqlist1);
    cout << "List 2: " << endl;
    //Show list 2
    showlist(gqlist2);

    //Delete Elements
    
    //Iterate over list 2 

        list<int>::iterator j;
        for(j =  gqlist2.begin(); j != gqlist2.end(); ++j){
             //The remove method already removes value and has no problem if it does not exist already.
            gqlist1.remove(*j);
           
        }

     cout << "Valores duplicados eliminados" << endl;

     cout << "List 1: " << endl;
    showlist(gqlist1);
    cout << "List 2: " << endl;
    //Mostrar lista 2
    showlist(gqlist2);


  
    return 0;
}