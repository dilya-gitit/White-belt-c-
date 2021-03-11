#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
  int q;
  cin >> q;
  vector < char > queue;
  string cmd;
  int k = 0;
  while (q)
  {
    cin >> cmd;
    if (cmd == "WORRY_COUNT")
    {
      cout << count(begin(queue), end(queue), 'w') << endl;
    } else
    {
      cin >> k;
      if (cmd == "COME")
      {
        queue.resize(queue.size() + k, 'q');
      } else if (cmd == "WORRY") {
        queue[k] = 'w';
      } else if (cmd == "QUIET") {
        queue[k] = 'q';
      }
    }
    --q;
  }
  system("pause");
  return 0;

}
