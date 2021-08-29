# include <iostream>
# include <set>

using namespace std;

int main(){

    set<int> s;

    // Inseting elements in set s
    // Duplicate elements added doesnt change contents of set, only unique elements stored
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    
    // Elements are fetched in sorted order
    for (auto i : s){
        cout << i << endl;
    }

    // Print elements before erase
    cout << "Before Erasing " << endl;
    for (auto i : s){
        cout << i << endl;
    }
    s.erase(s.begin());
    // Print elements after erase
    cout << "After Erasing " << endl;
    for (auto i : s){
        cout << i << endl;
    }


    // add back 0 (deleted in last step)
    s.insert(0);

    // delete 1st index element
    // Print elements before erase
    cout << "Before Erasing " << endl;
    for (auto i : s){
        cout << i << endl;
    }
    set<int>::iterator it = s.begin();
    it ++;
    s.erase(it);
    // Print elements after erase
    cout << "After Erasing " << endl;
    for (auto i : s){
        cout << i << endl;
    }
    
    // Check if element is present in set
    cout << "5 is present or not -> " << s.count(5) << endl;
    cout << "-5 is present or not -> " << s.count(-5) << endl;


    // Get iterator for a particular element
    set <int> :: iterator itr = s.find(5);

    
    // and Print from that index to end
    for (auto it=itr;it!=s.end();it++){
        cout << *it << " ";
    }
    cout << endl;

    // Complexity
    // Insert, Find, Erase, Count -> O(log n)
    // Size, Empty, Begin, End -> O(1)

    return 0;

}