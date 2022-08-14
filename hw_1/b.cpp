#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, *v;
    cin >> n;
    v = new int[n];
    for (int i = 0; i != n; ++i) cin >> v[i];
    sort(v, v + n);
    cout << v[(n - 1) / 2] << endl;
    return 0;
}
