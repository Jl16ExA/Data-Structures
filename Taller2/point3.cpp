// CPP program to show the implementation of List
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

// function for printing the elements in a list
void showlist(list<char> g)
{
    list<char>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

// Driver Code
int main()
{

    // Add line
    list<char> line;
    list<char>::iterator it;
    it = line.begin();
    line.insert(it, 'a');
    line.insert(it, 'b');
    line.insert(it, 'c');
    line.insert(it, 'd');
    line.insert(it, 'e');
    line.insert(it, 'f');
    line.insert(it, 'g');
    line.insert(it, 'h');
    line.insert(it, 'i');
    line.insert(it, 'j');

    // Add line to list
    list<list<char>> text;
    text.push_back(line);

    // Add another line
    list<char> line2;
    list<char>::iterator it2;
    it2 = line2.begin();
    line2.insert(it2, 'k');
    line2.insert(it2, 'l');
    line2.insert(it2, 'm');
    line2.insert(it2, 'n');
    line2.insert(it2, 'o');
    line2.insert(it2, 'p');
    line2.insert(it2, 'q');
    line2.insert(it2, 'r');
    line2.insert(it2, 's');
    line2.insert(it2, 't');

    // Add line to list
    text.push_back(line2);

    // Add another line
    list<char> line3;
    list<char>::iterator it3;
    it3 = line3.begin();
    line3.insert(it3, 'u');
    line3.insert(it3, 'v');
    line3.insert(it3, 'w');
    line3.insert(it3, 'x');
    line3.insert(it3, 'y');
    line3.insert(it3, 'z');

    // Add line to list
    text.push_back(line3);

    // Print list
    cout << "List 1: " << endl;
    showlist(line);
    cout << "List 2: " << endl;
    showlist(line2);
    cout << "List 3: " << endl;
    showlist(line3);

    // Copy line
    list<list<char>>::iterator k;
    for (k = text.begin(); k != text.end(); ++k)
    {
        if (*k == line3)
        {
            text.push_back(*k);
        }
    }

    return 0;
}