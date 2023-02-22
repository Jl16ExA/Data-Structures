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

// Create class line wich is a list of char
class line : public list<char>
{
public:
    // Constructor
    line(char index)
    {
        list<char>::iterator it;
        it = this->begin();
        this->insert(it, index);
        this->insert(it, 'a');
        this->insert(it, 'b');
        this->insert(it, 'c');
        this->insert(it, 'd');
        this->insert(it, 'e');
        this->insert(it, 'f');
        this->insert(it, 'g');
        this->insert(it, 'h');
        this->insert(it, 'i');
        this->insert(it, 'j');
    }

    // Edit characther in the last part
    void edit(char character)
    {
        this->push_back(character);
    }

    // Delete last character in the line
    void del_last()
    {
        this->pop_back();
    }
};

// Create TAD text wich is a list of lines
class text : public list<line>
{
public:
    // Constructor
    text()
    {
        line line1('1');
        line line2('2');
        line line3('3');
        this->push_back(line1);
        this->push_back(line2);
        this->push_back(line3);
    }

    // Add new line
    void add_line(line line1)
    {
        this->push_back(line1);
    }

    // Duplicate line
    void duplicate_line(int line1)
    {
        list<line>::iterator it;
        it = this->begin();
        advance(it, line1);
        this->push_back(*it);
    }

    // Delete line
    void delete_line(int line1)
    {
        list<line>::iterator it;
        it = this->begin();
        advance(it, line1);
        this->erase(it);
    }

    // Delte last line
    void delete_last_line()
    {
        this->pop_back();
    }

    // Show text
    void show()
    {
        list<line>::iterator it;
        for (it = this->begin(); it != this->end(); ++it)
        {
            showlist(*it);
        }
    }
};

// Main Code
int main()
{
    // Create text, do all the operations and show it
    text text1;
    cout << "Duplicate line 2" << endl;
    text1.duplicate_line(1);
    text1.show();
    // Delte line 1 of index 2
    cout << "Delete line 2" << endl;
    text1.delete_line(2);
    text1.show();
    cout << "Delete last line" << endl;
    text1.delete_last_line();
    text1.show();

    cout << "Modify line 1" << endl;
    // Modify line 1 or index 0
    list<line>::iterator it;
    it = text1.begin();
    advance(it, 0);
    it->edit('n');
    it->edit('u');
    it->edit('e');
    text1.show();
    cout << "Delete last character of line 1" << endl;
    it->del_last();
    text1.show();

    return 0;
}
