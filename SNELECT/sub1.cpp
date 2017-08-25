#include <iostream>

using namespace std;

int main(){
  
  int t;
  int s, m;
  char cur, last;
  bool eat;
	
  cin >> t;
  cin.get(cur);

  for (int i = 0; i < t; i++){
    s = m = 0;
    last = 0;
    eat = false;
    cin.get(cur);

    while (cur != '\n'){
      if (cur == 'm') m++;
      else s++;

      if (last != 0 && last != cur && !eat){
	s--;
	eat = true;
      } else {
	eat = false;
      }

      last = cur;
      cin.get(cur);
    }

    if (s > m)
      cout << "snakes";
    else if (m > s)
      cout << "mongooses";
    else
      cout << "tie";
    cout << endl;
  }
	 
	
}
