#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    string s;
    vector<string> v;
    int l, mid;
    int i;
    int increment;
    bool swp;
    while(t--){
        cin >> s;
        l = s.length();
        i = l%2 == 0? 1:0;
        increment = i;
        mid = l/2 - i;
        swp = true;
        if (s[l-1] < s[0])
        {
            s[l-1] = s[0];
            v.push_back(s);
            continue;
        }
        
        s[l-1] = s[0];
        while ((mid + i) < l){
             
            if ( s[mid - i+increment] ==  s[mid + i]){
                if (s[mid+i] == '9' && swp)
                {
                    s[mid - i+increment] = '0';
                    s[mid + i] = '0';
                    ++i;
                    continue;
                }
                if (!swp){
                    ++i;
                    continue;
                }                
                s[mid - i+increment]++;
                s[mid + i] = s[mid -i + increment];
            }else{
                if (s[mid -i + increment] < s[mid + i])
                {
                    s[mid - i + increment]++;
                }
                s[mid + i] = s[mid -i + increment];
            }
            i++;
            swp = false;
        }
        if (swp)
        {
            if (s[0] == '0')
            {
                s[l-1] = '1';
                s = '1' + s;
            }
            else{
                ++s[0];
                s[l-1] = s[0];
            }
            
        }
        v.push_back(s);
    }
    cout <<"---------\n";
    for(auto& s: v){
        cout << s << '\n';
    }
    return 0;
}