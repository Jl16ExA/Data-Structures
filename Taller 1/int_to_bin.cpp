#include <iostream>
#include <cmath>

using namespace std;

int numb_inst = 0;

template <class T>
class Node {
public:
  Node (const T &value, Node<T> *next = 0) {
    value_ = value;
    next_ = next;
  
  }
  ~Node () {
  
    next_ = 0;
  }
  Node<T>* next () const { 
    return next_; 
  }
  void next (Node<T> *new_next) { 
    next_ = new_next; 
  };
  const T& value () const { 
    return value_; 
  }
  void value (const T &value) { 
    value_ = value; 
  }

private:
  Node ();
  T value_;
  Node<T> *next_;
};
  
template <class T>
class LinkedList {
public:
  LinkedList () : head_(0) {};
 
  // returns 0 on success, -1 on failure
  int insert (const T &new_item) {
    return ((head_ = new Node<T>(new_item, head_)) != 0) ? 0 : -1;
  }

  

  void print (void) {
    Node<T> *marker = head_;
    while (marker != 0) {
      cout << marker->value();
      marker = marker->next();
    }
  }
        
  Node<T> *head_;
};


LinkedList<int>* intToBin(int integer){
    //Create a new list
    LinkedList<int> *list = new LinkedList<int> ();
    int division = integer;
    while(division != 0){
         //Get the remainder and add it to the list
         int remainder = division % 2;
         division = round(division / 2);
         list->insert(remainder);
    }

    return list;
}


int main (int argc, char **argv) {

  cout << "Pasar de Integer a Binario" << endl;
  cout << "Ingresa el integer: ";
  int integer;
  cin >> integer;

  LinkedList<int> *list = intToBin(integer);
  
  cout << "Este es el binario: " << endl;
  list->print ();

  delete list;

  return 0;
}
