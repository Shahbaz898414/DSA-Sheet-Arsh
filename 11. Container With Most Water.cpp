#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int maxArea(vector<int>& a) {
         int ans=0;

        int l=0,r=a.size()-1;

        while(l<=r){
          ans=max(ans,min(a[l],a[r])*(r-l));

          if(a[l]>=a[r]) r--;
          else l++;
        }

        return ans;
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

/*

 int maxArea(vector<int>& a) {
         int ans=0;

        int l=0,r=a.size()-1;

        while(l<=r){
          ans=max(ans,min(a[l],a[r])*(r-l));

          if(a[l]>=a[r]) r--;
          else l++;
        }

        return ans;
    }


*/


