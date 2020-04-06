/*You are given a number N. 
You have to find the minimum number of operations required to reach N from 0. 
You have 2 operations available:

Double the number
Add one to the number
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int solve(int n)
{
    int dp[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        dp[i]=1+min(dp[i-1],dp[i/2]);
        else
        dp[i]=1+dp[i-1];
        
    }
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
	//code
	return 0;
}