#include "utils.hpp"
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    cout << "Hello World!" << endl;

    vector<pair<int, char>> a{{1, 'a'}, {2, 'b'}, {3, 'c'}};
    unordered_map<int, vector<int>> b{{1, {1, 2}}, {2, {3, 4, 5}}};
    vector<string> c{"bau", "miao"};
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}