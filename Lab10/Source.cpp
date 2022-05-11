#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class MyVector {
public:
    bool Add(int); // return true if the value was added. As a result, the size of the vector increases with one.
    bool Delete(int index); // returns true if the value from the index was removed. As a result, the size of the vector decreases with one.
    
    void Iterate(void (*func)(int& element));
    void Filter(bool (*func)(int element));
};

int main() {
    int c;
    cout << "c = "; cin >> c;
    auto f = [&](int a, int b) {
        return a + b + c;
    };
    cout << "c = "; cin >> c;
    cout << f(10, 20) << endl;

    auto f_sort = [](string a, string b) {
        if (a.length() == b.length()) {
            return (a > b);
        }
        return (a.length() > b.length());
    };

    vector<string> v = { "this", "is", "a", "test" };
    sort(v.begin(), v.end(), f_sort);

    for (vector<string>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}