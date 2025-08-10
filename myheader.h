//
// Created by sgupt on 09-08-2025.
//

#ifndef MYHEADER_H
#define MYHEADER_H

// Fast I/O
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Debug Macros
#define trace1(x)                cerr << #x << ": " << x << "\n";
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << "\n";
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << "\n";
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << "\n";
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << "\n";
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << "\n";

// Common Typedefs

#define INF 1000000007LL  // 1e9+7 as long long

typedef std::vector < int > vi;
typedef std::vector < vi > vvi;
typedef std::pair < int, int > ii;

#define sz(a) int((a).size())
#define pb push_back

#define all(c) c.begin(), c.end()

#define tr(container, it)\
for (typeof (container.begin()) it = container.begin(); it != container.end(); it++)
#define present(container, element)(container.find(element) != container.end())
#define cpresent(container, element)(find(all(container), element) != container.end())

#endif

