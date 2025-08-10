#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    long double ans = 0.0;
    vector<int> prefix(n + 1, 0);
    prefix[0] = (s[0] == 't');
    for (int i = 1; i < n; i++) {
        prefix[i] += prefix[i - 1] + (s[i] == 't');
    }
    for (int i = 0; i < n; ++i) {
        if (s[i] != 't')
            continue;
        for (int j = i + 2; j < n; ++j) {
            if (s[j] != 't')
                continue;

            long double len = (j - i + 1) - 2;
            long double tCount = prefix[j - 1] - prefix[i];
            ans = max(ans, tCount / len);
            // cout << i << " " << j << " " << len << " " << tCount << endl;
        }
    }

    cout << fixed << setprecision(9) << ans << endl;

}
