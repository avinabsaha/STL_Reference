#include <iostream>
#include <deque>

using namespace std;

void printDeque (deque<int> w){
    for(int i:w){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    deque<int> d;

    // Push Element at end of deque
    d.push_back(1);
    // Push Element at the front of deque
    d.push_front(2);

    // Print the deque
    printDeque(d);

    // Delete element at end
    cout << "Deque before popping" << endl;
    printDeque(d);
    d.pop_back();
    cout << "Deque after popping" << endl;
    printDeque(d);

    // Inset back popped element
    d.push_back(1);

    // Pop at the beginning
    cout << "Deque before popping" << endl;
    printDeque(d);
    d.pop_front();
    cout << "Deque after popping" << endl;
    printDeque(d);

    // Inset back popped element
    d.push_front(2);

    // Get element at a particular position say at 1st index, 0(1) complexity
    cout << "Print First Index Element-> " << d.at(1) << endl;

    cout << "1st Element in Deque " << d.front() << endl;
    cout << "Last Element in Deque " << d.back() << endl;
    

    // Check if Deque is empty
    cout << "Empty or Not " << d.empty() << endl;

    // Deleting elements
    cout << "Before erase " << d.size() << endl;
    d.erase(d.begin(),d.begin()+1);
    cout << "After erase " << d.size() << endl;
    printDeque(d);

    return 0;
}