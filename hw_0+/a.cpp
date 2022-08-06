#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[]) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll max = a * c;
    ll aux = a * d;
    if (aux > max) max = aux;
    aux = b * c;
    if (aux > max) max = aux;
    aux = b * d;
    if (aux > max) max = aux;
    cout << max << endl;
    return 0;
}
