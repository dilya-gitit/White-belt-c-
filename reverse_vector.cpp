#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Reverse(vector<int>& v) {
  int n = v.size();  
  for (int i = 0; i < n / 2; ++i) {
    int tmp = v[i];
    v[i] = v[n - 1 - i];
    v[n - 1 - i] = tmp;
  }
}
int main() {
vector<int> numbers = {1, 5, 3, 4, 2};
Reverse(numbers);
for (auto x : numbers) {
  cout << x << " ";
}
// numbers должен оказаться равен {2, 4, 3, 5, 1}
 
}
