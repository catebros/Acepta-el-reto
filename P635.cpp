#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int casos;
    cin >> casos;

    for (int i = 0; i < casos; ++i) {
        int year;
        cin >> year;

        int siglo = ceil(year / 100.0);
        cout << siglo << endl;
    }

    return 0;
}