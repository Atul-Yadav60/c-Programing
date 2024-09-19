#include <bits/stdc++.h>
using namespace std;
int solve(int sum, vector<int> &Coins,unordered_map<int,int>&memo){
 if(sum==0){
    return 0;
 }
if (memo.find(sum) != memo.end()) {
            return memo[sum];
        }    
int total = INT_MAX;
for(int coin:Coins){
if(coin<=sum){
    int currentcall = 1 + solve(sum- coin,Coins,memo);
    total=min(currentcall,total);
}
}
memo[sum]=total;
return total;
}
int main(){
    int n{0};
    cin>>n;
    int sum{0};
    cin>>sum;
        unordered_map<int, int> memo;
    vector <int> Coins;
    for (int i{0};i<n;i++){
    int coin{0};
    cin>>coin;
    Coins.push_back(coin);
}

  int Answer =  solve(sum, Coins, memo);
  cout<<Answer;
}