#include <iostream>

const int MAX_BUF = 51;
const char UP = 'U';
const char DOWN = 'D';

int main(){
  std::ios::sync_with_stdio(false);
  int t, ups, downs;
  bool prev_up;
  char buf[MAX_BUF];
  char* cur;
  
  std::cin >> t;
  std::cin.getline(buf, MAX_BUF); // Read \n
  for (int i = 0; i < t; ++i){
    std::cin.getline(buf, MAX_BUF);
    prev_up = (buf[0] == UP);
    cur = &buf[0];
    if (*cur == UP){
      ups = 1; downs = 0;
    } else {
      ups = 0; downs = 1;
    }

    for (; *cur; ++cur){
      #ifdef DEBUG
      std::cout << "- " << *cur << " pu1: " << prev_up;
      #endif 
      if (prev_up && *cur == DOWN){
	++downs;
	prev_up = false;
      } else if (!prev_up && *cur == UP){
	++ups;
	prev_up = true;
      }

      #ifdef DEBUG
      std::cout << " pu2: " << prev_up << " ups: " << ups << " downs: " << downs << std::endl;
      #endif
    }

    if (ups <= downs)
      std::cout << ups << std::endl;
    else
      std::cout << downs << std::endl;

  }
}
