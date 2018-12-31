#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    string T;

    while (getline(cin, str, '.')) {
        T = T == "" ? str : T + " " + str;
    }

    cout << T << endl;

    return 0;
}

