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
  
    list<int> gqlist1, gqlist2, gqlist3;

    list<list<int>> multiList;
    
    //Fill list 1, numebers 0 to 9.

    for (int i = 0; i < 10; ++i) {
        //All numbers
        gqlist1.push_back(i);
        if(i%2 == 0){
            //Only even numbers
gqlist2.push_back(i);
        }
        else if(i%2 == 1) {
            //Only odd numbers
    gqlist3.push_back(i);
        }
    }

    //Add list to multilist

    multiList.push_back(gqlist1);
    multiList.push_back(gqlist2);
    multiList.push_back(gqlist3);

    //Create list to search

    list<int> listToSearch;
   for (int i = 0; i < 10; ++i) {
       
        if(i%2 == 0){
            //Only even numbers
listToSearch.push_back(i);
        }    
    }


       cout << "List 1: " << endl;
    showlist(gqlist1);
    cout << "List 2: " << endl;
    //Show list 2
    showlist(gqlist2);
    cout << "List 3: " << endl;
showlist(gqlist3);


cout << "List to Compare: " << endl;
showlist(listToSearch);

    //Compares multilist
    int counter = 0;
      list<list<int>>::iterator j;
        for(j =  multiList.begin(); j != multiList.end(); ++j){
             if(*j == listToSearch){
                cout << "La lista esta en la posicion " << counter;
             }
             counter++;
             //Checks if is the end
             if(j == multiList.end()){
                cout << "Lista no encontrada" << endl;
             }
        }
  
    return 0;
}