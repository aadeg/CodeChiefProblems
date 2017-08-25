#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);

  int t, n, m, tmp;
  vector<bool> jobs;
  string chief = "", cook = "";
  
  cin >> t;
  for (int i = 0; i < t; ++i){
    jobs.clear();
    chief.clear();
    cook.clear();
    
    cin >> n >> m;
    jobs.reserve(n);
    jobs.insert(jobs.begin(), n, true);

    for (int j = 0; j < m; ++j){
      cin >> tmp;
      jobs[tmp - 1] = false;
    }

    string* working = &chief;
    string* waiting = &cook;
    for (int j = 0; j < n; ++j){
      if (jobs[j]){
        working->append(to_string(j + 1) + ' ');

        string* tmp = working;
        working = waiting;
        waiting = tmp;
      }
    }

    cout << chief << endl;
    cout << cook << endl;
  }
}
