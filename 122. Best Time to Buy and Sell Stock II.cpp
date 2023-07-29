#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int maxProfit(int prices[],int n) {
        int oldPrices = prices[0];
        int profit = 0;
        for(int i=1;i<n;i++){
            if(prices[i]<oldPrices){
                
                oldPrices = prices[i];
            }
            else{
                
                profit +=prices[i]-oldPrices;

                cout<<profit<<" ";
               
                oldPrices = prices[i];
            }
        }
        cout<<endl;
        return profit;
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
  
    cout<<maxProfit(arr,n)<<endl;

      
  
  return 0;
}


