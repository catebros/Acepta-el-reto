#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int d;
        cin >> d;
        if(d % 2 == 1 ){
            cout << d - 1 << "\n";
        }else{
            cout << d + 1 << "\n";
        }
    }
    return 0;
}