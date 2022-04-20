#include <string>
#include <map>
#include <queue>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    fstream f;
    string line;
    f.open("Text.txt");
    getline(f, line);
    f.close();
    cout << line << endl;

    map<string, int> M;
    M["i"] = 2;
    M["apples"] = 3;
    M["then"] = 1;
    for (auto elem : M) {
        cout << elem.first << " : " << elem.second << endl;
    }

    map<string, int>::iterator it;
    for (it = M.begin(); it != M.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    it = M.find("apple");
    if (it == M.end()) {
        M["apple"] = 1;
    } else {
        M["apple"]++;
    }
    for (auto elem : M) {
        cout << elem.first << " : " << elem.second << endl;
    }

    priority_queue<pair<int, string>> q;        
    q.push(make_pair(1, "then"));
    q.push(make_pair(1, "apple"));
    q.push(make_pair(2, "i"));
    q.push(make_pair(3, "apples"));

    while (!q.empty()) {
        pair<int, string> p = q.top();
        cout << p.second << " : " << p.first << endl;
        q.pop();
    }

    return 0;
}