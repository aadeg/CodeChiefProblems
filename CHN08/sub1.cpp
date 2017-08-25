#include <iostream>

#define mod 1e9 + 7
#define _mod(x, m) ((x >= m)? x-mod : (x < 0) ? x+mod : x)

using namespace std;


int main(){
  int t, a, b, n;
  int x;

  cin >> t;
  for (int i = 0; i < t; i++){

    cin >> a >> b >> n;
    a = _mod(a, mod);
    b = _mod(b, mod);

    n = (n - 1) % 6;
    if (n == 0)
      x = a;
    else if (n == 1)
      x = b;
    else if (n == 2)
      x = b - a;
    else if (n == 3)
      x = -a;
    else if (n == 4)
      x = -b;
    else if (n == 5)
      x = a - b;

    x = _mod(x, mod);
    cout << x << endl;
  }
}
