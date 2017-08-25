#include <iostream>

using namespace std;

const int MAX_BUF = 510;
const char DOT = '.';
const char HEAD = 'H';
const char TAIL = 'T';

int main(){
  ios::sync_with_stdio(false);

  int t, n;
  char buf[MAX_BUF];
  char* prev, *cur;
  bool f_body, ok;

  cin >> t;
  for(int i = 0; i < t; ++i){
    cin >> n;
    cin.getline(buf, MAX_BUF); // Read \n
    cin.getline(buf, n + 1);
    f_body = buf[0] == HEAD;
    ok = buf[0] != TAIL;
    cur = &buf[1];
    
    for (int j = 1; j < n && ok; ++j, ++cur){
      #ifdef DEBUG
      cout << "j: " << j << " cur: " << *cur << " f_body1: " << f_body;
      #endif

      if (f_body && *cur == HEAD)
	ok = false;
      else if (!f_body && *cur == TAIL)
	ok = false;

      if (ok){
	if (*cur == HEAD) f_body = true;
	else if (*cur == TAIL) f_body = false;
      }

      #ifdef DEBUG
      cout << " f_body2: " << f_body << " ok: " << ok << endl;
      #endif
    }
    if (f_body)
      ok = false;

    if (ok) cout << "Valid" << endl;
    else cout << "Invalid" << endl;
  }
}
