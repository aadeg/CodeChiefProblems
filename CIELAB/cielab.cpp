#include <iostream>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);

  int a, b, sol;

  cin >> a >> b;
  sol = a - b;

  if (sol % 10 == 0 || sol == 1)
    ++sol;
  else
    --sol;

  cout << sol;
}
