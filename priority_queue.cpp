# include <iostream>
# include <queue>

using namespace std;

int main(){

    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>, greater <int> > mini;

    // insert in max heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int s = maxi.size();

    for (int i=0;i<s;i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // insert in min
    mini.push(5);
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    s = mini.size();

    for (int i=0;i<s;i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    // Check if empty
    cout << "Empty or not->" << mini.empty()<< endl;


    return 0;

}