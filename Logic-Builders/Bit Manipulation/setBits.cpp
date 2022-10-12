/*
Every number is basically build from bits in the memory, find the setBits for a particular number.
*/
#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{  
  int count = 0;
  while(N > 0)
  {
    int lastBit = N&1;
    count += lastBit;
    N = N >> 1;
  }
  return count;
}

int main()
{
  int n;
  cin >> n;
  int ans = solve();
  cout << ans;
  return 0;
}
