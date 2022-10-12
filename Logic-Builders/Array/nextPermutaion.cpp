/*
For a given permutation, program the next permutation and if there is no next then get the initial permutation.
*/

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
   	int n = nums.size(), k, l;
  	for (k = n - 2; k >= 0; k--) {
      if (nums[k] < nums[k + 1]) {
           break;
       }
    }
  	if (k < 0) {
  	    reverse(nums.begin(), nums.end());
 	} else {
 	    for (l = n - 1; l > k; l--) {
            if (nums[l] > nums[k]) {
                break;
           }
        } 
 	    swap(nums[k], nums[l]);
	    reverse(nums.begin() + k + 1, nums.end());
   }
}

int main()
{
  vector<int> vec = {1,2,3};
  nextPermutation(vec);
  
  for(auto e:vec)
  {
    cout << e << endl;
  }
  
  return 0;
}
