#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        int cubos, capacidad, diferencia, suma;

        cin >> cubos, capacidad, diferencia;

        for (int j = 0; j<cubos; j++){
            suma += capacidad;
            capacidad = capacidad - diferencia;
        }
        cout << capacidad << "\n";
    }
}