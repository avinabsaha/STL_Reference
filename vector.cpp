#include <iostream>
#include <vector>

using namespace std;

/*
Vector is Dynamic array, when elements are added more than the previously allocated size, 
it doubles it size by creating a new array of double size and copying the old elements to the new array
and deleting the previously allocated memory
*/



void printArray (vector<int> w){
    for(int i:w){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v;

    // Capacity prints the number elements for which memory is allocated
    // Size prints the actual number of elements inserted in the array
    // Both capacity and size initialized to zero
    cout << "Capacity->" << v.capacity() << endl; 
    cout << "Size->" << v.size() << endl;

    // Memory allocation to 1 element size when 1 st element is added.
    v.push_back(1);
    cout << "Capacity->" << v.capacity() << endl; 
    cout << "Size->" << v.size() << endl;

    // Memory allocation doubles as second element is inserted
    v.push_back(2);
    cout << "Capacity->" << v.capacity() << endl; 
    cout << "Size->" << v.size() << endl;

    // See memory doubling from 2 to 4 and size going from 2 to 3
    v.push_back(3);
    cout << "Capacity->" << v.capacity() << endl; 
    cout << "Size->" << v.size() << endl;

    // Element at a particular index, say 2
    cout << "Element at 2nd index: " << v.at(2) << endl;

    // First and Last element
    cout << "First Element " << v.front() << endl;
    cout << "Last Element " << v.back() << endl;

    // Delete last element
    cout << "Before Pop " << endl;
    printArray(v);
    v.pop_back();
    cout << "After Pop " << endl;
    printArray(v);


    // Clear the vector
    // Check the size, capacity before and after clearing the array
    // Notice 
    cout << "Before Clearing" << endl;
    cout << "Capacity->" << v.capacity() << endl; 
    cout << "Size->" << v.size() << endl;
    v.clear();
    cout << "After Clearing" << endl;
    cout << "Capacity->" << v.capacity() << endl; 
    cout << "Size->" << v.size() << endl;


    // init a vector of size 5 and elements 1
    vector <int> a(5,1);
    printArray(a);

    // copy a vector to another
    vector <int> last(a);
    printArray(last);

    // for initializing a vector with another vector, memory allocation size at the beginning 
    // is equal to size of the vector from which data is copied.
    cout << "Capacity->" << last.capacity() << endl; 
    cout << "Size->" << last.size() << endl;

    return 0;

}


