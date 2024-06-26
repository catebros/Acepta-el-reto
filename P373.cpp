#include <iostream>
using namespace std;

int main() {
    int long long cube, n;
    cin >> n;
 

    for (long long int i = 0; i < n; i++) {
        cin >> cube;
        cout << cube*cube*cube-(cube-2)*(cube-2)*(cube-2) << "\n";
    }
}