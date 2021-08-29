#include<iostream>
#include<list>

using namespace std;


void printList (list<int> w){
    for(int i:w){
        cout << i << " ";
    }
    cout << endl;
}
int main(){

    list<int> l;

    // insert element at back and front
    l.push_back(1);
    l.push_front(2);

    // Similarly pop_back and pop_front functions exits

    // Erase from beginning
    cout << "List before erasing" << endl;
    printList(l);
    // Element being pointed to is deleted
    l.erase(l.begin());
    cout << "List after erasing" << endl;
    printList(l);
    
    // Check size of list
    cout << "Size of list->" << l.size() << endl;

    // init a lsit of 5 elements with value 50
    list <int> n (5,50);
    printList(n);


    return 0;
}