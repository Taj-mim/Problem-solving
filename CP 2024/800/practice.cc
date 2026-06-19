#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;

        // Calculate the number of 2-burle coins (c2)
        long long c2 = n / 2;

        // Calculate the number of 1-burle coins (c1) while minimizing |c1 - c2|
        long long c1 = c2;
        if (n % 2 == 1) {
            c1++;
        }

        cout << c1 << " " << c2 << endl;
    }

    return 0;
}
