#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        return 1;
    }
};

int main()
{
  vector<string> inputV;
  vector<string>::iterator iter;
  string inputS;
  while(cin >>inputS)
  {
      inputV.insert(inputV.end(),inputS);
  }
  for(iter=inputV.begin();iter<inputV.end();iter++)
    cout << *iter << " ";
  return 0;
}