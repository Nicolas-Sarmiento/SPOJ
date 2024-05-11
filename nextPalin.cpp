#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    string s;
    long long mid, l, i, increment;
    bool swp;
    while(t--){
        cin >> s;
        mid = s.length()/2;
        swp = false;
        for (size_t i = 0; i <= s.length()/2; i++)
        {
            if (s[i] == s[s.length() - 1 - i]){
                continue;
            }

            if (s[i] > s[s.length() - 1 - i] && !swp)
            {
                swp = true; 
            }

            if (s[i] < s[s.length() - 1 - i])
            {
                swp = false;
            }
            
            
            s[s.length() - 1- i] = s[i];            
        }

        if (swp)
        {
            cout << s << '\n';
            continue;
        }

        l = s.length();
        i = l%2 == 0? 1:0;
        increment = i;
        mid = l/2 - i;
        swp = false;

        while (!swp && (mid + i) < l)
        {
            if ( s[mid - i+increment] == '9'){
                s[mid - i+increment] = '0';
                s[mid + i] = '0';
                ++i;
                continue;
            }

            s[mid - i+increment]++;
            s[mid + i] = s[mid -i + increment];
            swp = true;
        }

        if (!swp && s[0] == '0' ){
            
            s[l-1] = '1';
            s = '1' + s;
            
        }
        
        cout << s << '\n';
    }
    return 0;
}