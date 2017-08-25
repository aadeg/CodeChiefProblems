#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);

  int t, n, diff, minDiff;
  long s;
  vector<long> skills;

  cin >> t;
  for (int i = 0; i < t; ++i){
    skills.clear();
    minDiff = -1;

    cin >> n;
    skills.reserve(n);

    for (int j = 0; j < n; ++j){
      cin >> s;
      skills.push_back(s);
    }

    sort(skills.begin(), skills.end());

    for (int j = 1; j < n; ++j){
      diff = abs(skills[j - 1] - skills[j]);
      if (minDiff == -1)
        minDiff = diff;
      else
        minDiff = min(minDiff, diff);
    }

    cout << minDiff << endl;
  }
}
