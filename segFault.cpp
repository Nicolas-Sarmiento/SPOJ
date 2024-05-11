#include <iostream>
#include <map>
#include <queue>
using namespace std;
int main() {
    map<char, int> table = {{'c', 86}, {'a', 70}};
    queue<pair<char, int*>> cola;
    cola.push(pair<char, int*>('a', &table['a']));
    ++table['a'];
    cout << *cola.front().second << '\n';
    return 0;
}
