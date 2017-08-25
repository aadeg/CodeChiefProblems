#include <iostream>

using namespace std;

const long long mod = 1e9 + 7;

int main(){
  int t, a, b, n;
  long long x1, x2, x;
  
  cin >> t;
  for (int i = 0; i < t; i++){
    
    cin >> a >> b >> n;
    if (n > 2){
      x1 = b % mod;
      x2 = a % mod;
      for (int i = 3; i <= n; i++){
	x = x1 - x2;
	if (x > mod) x -= mod;
	else if (x < mod) x += mod;
	x2 = x1;
	x1 = x;
      }

      cout << x % mod;
    } else if (n == 1) cout << a;
    else if (n == 2) cout << b;
    cout << endl;
  }
}
