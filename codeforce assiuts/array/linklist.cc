#include <iostream>
#include <vector>
using namespace std;

bool sequentialSearchVector(const vector<int>& vec, int key) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == key) {
            return true;
        }
    }
    return false;
}

int main()
{
    cout<<"Name: Mahbuba Akter Sharna "<<endl;
    cout<<"ID: 23103148"<<endl;
   vector<int> vec = {3, 5, 7, 9, 11, 13};
    int key = 7;

    if (sequentialSearchVector(vec, key)) {
        cout << "Element found in vector." << endl;
    } else {
        cout << "Element not found in vector." <<endl;
    }

    return 0;
}
