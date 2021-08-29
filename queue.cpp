# include <iostream>
# include <queue>

using namespace std;

int main(){

    queue<string> q;

    // Adding three names one by one
    q.push("Avinab");
    q.push("Saha");
    q.push("Random");

    // Size of queue before pop
    cout << "Size before popping->" << q.size() << endl; 


    // Print the first element
    // Before popping
    cout << "First Element before popping->" << q.front() << endl;
    q.pop();
    // After popping
    cout << "First Element after popping->" << q.front() << endl;

    // Size of queue after pop
    cout << "Size after popping->" << q.size() << endl; 

    return 0;

}