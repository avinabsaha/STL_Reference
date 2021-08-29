#include<iostream>
#include<map>

using namespace std;

int main(){

    // Key has to be unique, value doesnt need to be unique

    map<int, string> m;

    // Insetion into map
    m[1] = "Saha";
    m[13] = "Random";
    m[2] = "Avinab";
    m.insert({5,"Austin"});


    // Print data in the map
    for (auto i:m){
        cout  << i.first << " " << i.second << endl;
    }

    // Check for a key
    cout << "Finding 13->" << m.count(13) << endl;
    cout << "Finding -13->" << m.count(-13) << endl;


    // Erase 
    // Print Before Erase Map
    cout << "Before erase " << endl;
    for (auto i:m){
        cout  << i.first << " " << i.second << endl;
    }
    m.erase(13);
    cout << "After erase " << endl;
    for (auto i:m){
        cout  << i.first << " " << i.second << endl;
    }

    // Complexity
    // Insert, Erase, Find, Count -> O(log n)
    // Find should have been O(1) but this implementation is done using RBT or Balanced Tree
    // For Unordered Map -> using hashmaps -> complexity there is O(1)

    // Search for an element, get the iterator and print the data
    auto it = m.find(5);
    for (auto i=it;i!=m.end();i++){
        cout << (*i).first<<  " " << (*i).second << endl;
    }


    return 0;
}