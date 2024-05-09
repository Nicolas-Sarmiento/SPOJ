#include <iostream>
#include <stack>
#include <queue>
#include <map>
//Shuting yard Algorithm
using namespace std;
int main(){
    map<char, int> priority;
    priority.insert({'+',1});
    priority.insert({'-',1});
    priority.insert({'*',2});
    priority.insert({'/',2});
    priority.insert({'^',3});

    queue<char> q;
    stack<char> s;

    int t, prio = 0; cin >> t;
    string exp;
    char c = '\0';
    while (t--)
    {
        cin >> exp;
        for (size_t i = 0; i < exp.length(); i++)
        {
            c = exp[i];
            if (c >= 'a' && c <= 'z' )
            {
                q.push(c);
                continue;
            }
            if (c == '(')
            {
                s.push(c);
                continue;
            }
            if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
            {
                prio = priority[c];
                while (priority[s.top()] > prio)
                {
                    q.push(s.top());
                    s.pop();
                }
                s.push(c);
                continue;
            }
            if (c == ')')
            {
                while (s.top() != '(')
                {
                    q.push(s.top());
                    s.pop();
                }
                s.pop();
            }
        }
        while (!q.empty())
        {
            cout<< q.front();
            q.pop();
        }
        cout << '\n';
    }
    return 0;
}