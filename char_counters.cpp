#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<char, int> BuildCharCounters(const string& m) {
map<char, int> counters;
for (const auto& chars : m) {
++counters[chars];
}
return counters;
}
void PrintMap(const map<string, int>& m) {
for (const auto& item : m) {
cout << item.first << ": " << item.second << endl;
}
}

int main() {
  int n;
  cin >> n; 
  for (int i = 0; i < n; i++) {
  string s, m;
  cin >> s >> m;
  if (BuildCharCounters(m) == BuildCharCounters(s)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  }
  return 0;
}
