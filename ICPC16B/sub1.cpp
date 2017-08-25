#include <iostream>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int t, n, a;
  bool f_one;
  int neg_one, diff;
  bool beau;
	
  cin >> t;
  for (int i = 0; i < t; ++i){
    cin >> n;
    f_one = false;
    neg_one = diff = 0;
    beau = true;

    int j = 0;
    for (; j < n; ++j){
      cin >> a;
      if (a == 1)
	f_one = true;
      else if (a == -1)
	++neg_one;
      else if (a != 0)
	++diff;

      if (diff > 1){
	beau = false;
	break;
      }

    }
    for (++j; j < n; j++)
      cin >> a;

    if (neg_one && diff){
      beau = false;
    } else if (neg_one > 1 && !f_one){
      beau = false;
    }


    if (beau)
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
}
