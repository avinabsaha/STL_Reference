# include <iostream>
# include <stack>

using namespace std;

int main(){

    stack<string> s;

    // Adding three names one by one
    s.push("Avinab");
    s.push("Saha");
    s.push("Random");

    // Print the top element
    cout << "Top Element before popping->" << s.top() << endl;
    s.pop();

    // Print the top element
    cout << "Top Element after popping->" << s.top() << endl;


    // Check size of stack
    cout << "Size of stack" << s.size() << endl;

    // Check if stack is empty or not
    cout << "Empty or not " << s.empty() << endl;






    return 0;

}