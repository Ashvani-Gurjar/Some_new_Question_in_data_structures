#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2, MOD = 1e9+7;
int dp[N];

// int lis(vector<int>&a,int n){
    
//      if(dp[n]!=-1){
//           return dp[n];
//      }
//      dp[n]=1; // single element is also an lis

//      for(int i=0;i<n;i++){
//           if(a[n]>a[i]){
//                dp[n]=max(dp[n],1+lis(a,i));
//           }
//      }
//      return dp[n];

// }
int main(){
     // for(int i=0;i<N;i++){
     //      dp[i]=-1;
     // }
     // int n;
     // cin>>n;

     // vector<int> a(n);
     // for(int i=0;i<n;i++){
     //      cin>>a[i];
     // }

     // cout<<lis(a,n-1)<<endl;




     // Method --2;


      int n;
      cin>>n;

      vector<int>a(n);
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      vector<int>dp(n,1);

      int ans =0;
      for(int i=1;i<n;i++){
          for(int j=0;j<n;j++){
               if(a[i]>a[j])
               dp[i]=max(dp[i],1+dp[j]);
          }
          ans =max(ans,dp[i]);
      }
      cout<<ans<<endl;

return 0;
}