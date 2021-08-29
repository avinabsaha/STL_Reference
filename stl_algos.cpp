#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);


    // Search for an element in vector using binary search
    cout << "Finding 5 " << binary_search(v.begin(),v.end(),5) << endl;
    cout << "Finding 6 " << binary_search(v.begin(),v.end(),6) << endl;

    // Get lower bound of value 6
    // The lower_bound() method in C++ is used to return an iterator pointing 
    // to the first element in the range [first, last) which has a value not less than val. 
    // This means that the function returns the index of the next smallest number just greater 
    // than or equal to that number
    // upper_bound() is a standard library function in C++ defined in the header . 
    // It returns an iterator pointing to the first element in the range [first, last) that is
    //  greater than value, or last if no such element is found. 
    cout << "Lower Bound->" << lower_bound(v.begin(),v.end(),6)-v.begin() << endl;
    cout << "Upper  Bound->" << upper_bound(v.begin(),v.end(),4)-v.begin() << endl;

    // Rotation of vectors
    cout << "Before rotation " << endl;
    for (int i:v){
        cout << i << " ";
    }
    cout << endl;
    // rotate arguments : 1. the beginning of the original range, 
    //                    2. the element that should appear at the beginning of the rotated range
    //                    3. last the end of the original range
    rotate(v.begin(),v.begin()+1,v.end());
    cout << "After rotation " << endl;
    for (int i:v){
        cout << i << " ";
    }
    cout << endl;


    // Sort the vector -> quick + heap + insertion - intro sort
    cout << "Before Sorting " << endl;
    for (int i:v){
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(),v.end());
    cout << "After Sorting " << endl;
    for (int i:v){
        cout << i << " ";
    }
    cout << endl;

    // Get max/ min
    int a = 5, b =3 ;
    cout  << "max->" << max(a,b) << endl;
    cout  << "min->" << min(a,b) << endl; 

    // swap values
    swap (a,b);
    cout << "a= " << a << " b= " << b << endl;


    // reverse string
    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout << "string->" << abcd << endl;


    return 0;
}