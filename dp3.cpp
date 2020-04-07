/*Consider a game where a player can score 3 or 5 or 10 points in a move. Given a total score n, find number of distinct combinations to reach the given score.

*/
#include<iostream>
#include<bits/stdc++.h>
#include<bitset>
#include<string>
#include<list>
using namespace std;
#define ull unsigned long long
#define ll long long


int solve(int n)
{

    int dp[n+1]={0};
    dp[0]=1;
    dp[1]=0;
    dp[2]=0;
    for(int i=3;i<=n;i++)
        dp[i]=dp[i]+dp[i-3];
    for(int i=5;i<=n;i++)
        dp[i]=dp[i]+dp[i-5];
    for(int i=10;i<=n;i++)
        dp[i]=dp[i]+dp[i-10];
    return dp[n];
}
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    cout<<solve(n)<<"\n";
    }
	return 0;
}
