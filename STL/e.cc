#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    unordered_map<string, int> database;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        if (database.find(name)==database.end()) {
           cout <<"OK"<<endl;
            database[name] = 1;
        } else {
            int count=database[name];
            string new_name=name+to_string(count);
            cout <<new_name<<endl;
            database[name]=count+1;
        }
    }
}

