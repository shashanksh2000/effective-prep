/*
Provided 3 numbers be A, B and C, get minimum number that could satisfy: (A|X)&(B|X) = C
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c)
{
  int res = a&b, ans = 0, count = 0;
  while(res && c)
  {
    int temp = res&1;
    if(temp == c)
    {
      continue;
    }
    else if (temp == 0 && c == 1)
    {
      ans = (1 << count) | ans;
    }
    else
    {
      return -1;
    }
    
    count++;
    res = res >> 1;
    c = c >> 1;
  }
  
  if(res != 0)
  {
    return -1;
  }
  
  return ans;
}

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int ans = solve(a, b, c);
  cout << ans;
  return 0;
}
