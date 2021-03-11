#include <iostream>
#include <vector>
using namespace std;
bool IsPalindrom(string a) {
  return equal(a.begin(), a.begin() + a.size()/2, a.rbegin());
}
/* bool IsPalindrom(string s) {
    // Замечание: более правильным было бы использовать здесь тип size_t вместо int
    // О причинах Вы узнаете на Жёлтом поясе
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
} */
vector <string> PalindromFilter(vector<string> words, int minLength ) {
vector <string> ans;
for (int i = 0; i < words.size(); i++){
  if ((IsPalindrom(words[i]) == 1) && (words[i].size() >= minLength)) {
    ans.push_back(words[i]);
  }
}
return ans;
}
int main() {
vector <string> f = {"weew", "code", "bitch"};  
vector <string> r =  PalindromFilter(f, 4);
for (int i = 0; i < r.size(); i++) {
cout << r[i] << " ";
}
}
