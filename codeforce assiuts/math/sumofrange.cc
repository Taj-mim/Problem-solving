#include <bits/stdc++.h>
using namespace std;

long long sum_of_n(long long n) {
    return n * (n + 1) / 2;
}

long long sum_of_even(long long n) {
    long long m = n / 2;
    return m * (m + 1);
}

long long sum_of_odd(long long n) {
    return sum_of_n(n) - sum_of_even(n);
}

int main() {
    long long a, b;
    cin >> a >> b;

    if (a > b) {
        swap(a, b);
    }

    long long total_sum = sum_of_n(b) - sum_of_n(a - 1);
    long long even_sum = sum_of_even(b) - sum_of_even(a - 1);
    long long odd_sum = sum_of_odd(b) - sum_of_odd(a - 1);

    cout << total_sum << endl;
    cout << even_sum << endl;
    cout << odd_sum << endl;

    return 0;
}
