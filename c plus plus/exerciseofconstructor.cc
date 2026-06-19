#include <iostream>
#include <string>
using namespace std;

class navana {
    string name;
    int num;
    string date;
    int eng_no;
    int regno;

public:
    navana() {}

    navana(string n, int nu, string d, int eng, int reg) {
        name = n;
        num = nu;
        date = d;
        eng_no = eng;
        regno = reg;
    }

    friend void show(navana obj[], int sold);
};

void show(navana obj[], int sold) {
    for (int i = 0; i < sold; i++) {
        cout << "name: " << obj[i].name << endl;
        cout << "num: " << obj[i].num << endl;
        cout << "date: " << obj[i].date << endl;
        cout << "eng_no: " << obj[i].eng_no << endl;
        cout << "regno: " << obj[i].regno << endl << endl;
    }
}

int main() {
    const int s = 10;
    navana ob[s];
    ob[0] = navana("taj", 9283, "26", 6722, 743764);
    ob[1] = navana("Customer2", 54321, "2023", 456, 76542);
    ob[2] = navana("Customer3", 2134, "14567", 890, 567);
    ob[3] = navana("Customer50", 1234, "345", 345, 456);
    ob[4] = navana("Customer54", 12334, "345", 365, 3496);
    int sold = 5;
    show(ob, sold);
    return 0;
}

