#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>> result;
    int n = nums.size();

    // Sort the vector in ascending order
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        // Skip duplicates for the first element
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates for the second and third elements
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;

                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;

    }
};


signed main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;cin>>n;

  int arr[n];

  for (int i = 0; i <n; i++)
  {
    /* code */
    cin>>arr[i];
  }
  
    

      
  
  return 0;
}



/*


class Solution {
public:
//3sum using MAP and 2sum concept
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<vector<int>, int> ans;
        vector<vector<int>> out;
        sort(nums.begin(), nums.end());
        int n=nums.size();`
        for(int i=0; i<n; i++)
        {
            int a=nums[i];
            int s=i+1, e=n-1, j=0;
            while(s<e)
            {
                if(nums[s]+nums[e]==-a)
                {
                    ans[{nums[i], nums[s], nums[e]}]++;
                    s++;
                    e--;
                    j++;
                }
                else if(nums[s]+nums[e]>-a)
                {
                    e--
                }
                else 
                {
                    s++;
                }
            }
        }
        for(auto & it: ans)
        {
            out.push_back(it.first);
        }

        return out;
    }
};








*/


/*

vector<vector<int>> result;
    int n = nums.size();

    // Sort the vector in ascending order
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        // Skip duplicates for the first element
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates for the second and third elements
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;

                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;


*/
