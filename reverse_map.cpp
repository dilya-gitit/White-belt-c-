#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<string, int> reverseMap(map<int, string> m) {//reverse map
  map<string, int> result;
  for (auto item : m) {
     result[item.second] = item.first;
   }
   return result;
}
void Printrevmap(const map<string, int>& m) {
  cout << m.size() << endl;
for (auto item : m) {
  cout << item.first << " " << item.second << endl;
}
}
void Printmap(const map<int, string>& m) {
  cout << m.size() << endl;
for (auto item : m) {
  cout << item.first << " " << item.second << endl;
}
}

int main() {
vector<string> bi= {"Dilya", "Nurtau", "Assel", "Assel", "Nurtau", "Nurtau"};
map<string, int> count;
for (const string& item : bi) {
  Printrevmap(count);
  ++count[item];  
}
Printrevmap(count);
}
