#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n == 2 || n == 3){
        return true;
    }
    if( n == 1 || n%2== 0 || n%3 == 0){
        return false;
    }
    for ( int i = 5; i*i <= n ; i+=6 )
    {
        if( n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}
int main(){
    short t; cin >> t;
    int a,b;
    while( t--){
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (isPrime(i)) cout << i << '\n';
        }
    }
    return 0;
}