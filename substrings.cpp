#include <iostream>
using namespace std;
int main(){
    int i = 24;
    string s,t;
    while (i--)
    {
        cin >> s >> t;
        short r = 0;
        for (size_t i = 0; i <= s.length()-5; i++){
            if (s.substr(i, 5) == t){
                r = 1;
                break;
            }
        }
        cout << r << '\n';
    }
    
    return 0;
}