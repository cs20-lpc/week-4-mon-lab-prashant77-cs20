#include <iostream>

#include "LinkedList.hpp"
using namespace std;

int main()
{
    LinkedList<int> ll;

    ll.append(1);
    ll.append(2);
    ll.append(3);

    cout << "Length of list : " << ll.getLength() << endl;
    
}