#include<bits/stdc++.h>
using namespace std;int w[100],t[100],dp[303];int main(){int n,i,j,sum=0;cin>>n;for(i=0;i<n;++i)cin>>t[i]>>w[i],sum+=t[i];for(i=0;i<n;++i)for(j=sum;j>=t[i]+w[i];--j)dp[j]=max(dp[j],dp[j-t[i]-w[i]]+t[i]);cout<<sum-dp[sum]<<endl;}