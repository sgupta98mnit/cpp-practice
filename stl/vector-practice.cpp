#include<bits/stdc++.h>
#include "../myheader.h"
using namespace std;

int main() {
    vector<int> v;
    v.resize(10);

    bool not_good_empty_check = (v.size() == 0);
    bool good_empty_check = (!v.empty());

    for (int i = 0; i < v.size(); ++i) {
        v[i] = i + 1;
    }

    v.resize(11);
    v[10] = 11;

    int data[] = { 99, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };

    // cout << sizeof(data) / sizeof(data[0]) << endl;

    vector<int> v2(data, data + sizeof(data) / sizeof(data[0]));

    for (vector<int>::iterator it = v2.begin(); it != v2.end(); ++it) {
        (*it)++;
    }

    v.insert(v.begin() + 1, all(v2));
    tr(v, it) {
        cout << *it << endl;
    }
    // cout << "hi" << endl;
    return 0;
}