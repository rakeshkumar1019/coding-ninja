#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int coinChange(int* coins,int n,int amount){
    int dp[n+1][amount+1];
     memset(dp, 0, sizeof(dp));  
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(j<coins[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            if(j>=coins[i-1]){
                dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
            }
        }
    }
    return dp[n][amount];
}
int main(){
    int n;
    cin>>n;
    int *coins=new int[n+1];
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int amount;
    cin>>amount;
    cout<<coinChange(coins,n,amount);
    
}
