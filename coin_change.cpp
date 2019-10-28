#include<bits/stdc++.h>
using namespace std;

int coin_c(vector<int>& coins,int amount,vector <int>& dp){
        if(amount<0) return -1;
        if(amount==0) return 0;
        if(dp[amount-1]!=0) return dp[amount-1];
        int min = INT_MAX;
        for(int coin:coins){
            int res = coin_c(coins,amount-coin,dp);
            if(res>=0 && res<min) min = 1 + res;
        }
        dp[amount-1] =  (min==INT_MAX)?-1:min;
        return dp[amount-1];
}
int coinChange(vector<int>& coins, int amount) {
        vector <int> dp(amount,0);
        if(amount<1) return 0;
        return coin_c(coins,amount,dp);
 }

    int main(){
        
        int amount,n;
        cout<<"PLease enter the number of coins available"<<endl;
        cin>>n;
        vector <int> coins(n,0);
        cout<<"Enter the coins available"<<endl;
        for(int i=0;i<n;i++) {cin>>coins[i];}
        cout<<"PLease enter the amount"<<endl;
        cin>>amount;
        cout<<endl;
        cout<<"The number of coins required is  "<<coinChange(coins,amount)<<endl; 
        return 0;
    }