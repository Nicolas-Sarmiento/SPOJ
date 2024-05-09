#include <iostream>
using namespace std;
int main(){
    short i;
    while (cin >> i )
    {
        if (i == 42){
            break;
        }
        cout << i << '\n';
    }
    return 0;
}