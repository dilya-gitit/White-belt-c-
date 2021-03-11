#include <iostream>
#include <vector>
using namespace std;
void MoveStrings(vector<string>& source , vector<string>& destination) {
  destination.push_back(" ");
for (auto i: source) {
  destination.push_back(i + " ");
}
source.clear();
}
int main() {
vector<string> source = { "a ", "b ", "c "};
vector<string> destination = {"1", "z"};
MoveStrings(source, destination);
for (int i = 0; i < destination.size(); i++) {
  cout << destination[i];
 
}

// source должен оказаться пустым
// destination должен содержать строки "z", "a", "b", "c" именно в таком порядке
}
