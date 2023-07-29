#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> fourSum(vector<int>& nums, int target) {
         if(nums.size()<4)
            return {};
        set<vector<int>> ans;
        long long int x,sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=i+1;j<nums.size()-2;j++)
            {
                x=nums[i]+nums[j];
                int p=j+1,q=nums.size()-1;
                while(p<q)
                {
                    sum=nums[p]+nums[q];
                    if(sum+x==target)
                    {
                        ans.insert({nums[i],nums[j],nums[p],nums[q]});
                      p++;
                    }
                    else if(sum+x<target)
                        p++;
                    else if(sum+x>target)
                        q--;
                }
            }
        }
        vector<vector<int>> vc(ans.begin(), ans.end());
        return vc;
    }


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



