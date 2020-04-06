
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
    
    int denom[5]={1,5,10,20,100};
    int coins=5;
    //array storing minimim number of coins required for a sum i
    int mem[n+1]={0};
    mem[0]=0;
    for(int i=1;i<n+1;i++)
        mem[i]=INT_MAX; 

    // for(int k=0;k<n+1;k++)
    //     cout<<mem[k]<<" ";
    // cout<<"\n";
    //fill the array for all sum from 0 to required amount n  
    for(int i=1;i<n+1;i++)
    {
        //iteratr over all the coins 
        for(int j=0;j<coins;j++)
        {

            //if the current coin value is les than or equal to current sum
            if(denom[j]<=i)
            {

            //mininmum coins required for current sum will
            //equal to minimum of exiting number of coins required for 
            //sum i and number of coins reuired for current sum - current coin value
            // plus 1 (beacues now we have included the coin)   
            mem[i]=min(mem[i],1+mem[i-denom[j]]);
            // for(int k=0;k<n+1;k++)
            //     cout<<mem[k]<<" ";
            // cout<<"\n";
            }
        }
    }

    return (mem[n]>=n?-1:mem[n]);
}


int main()
{
    
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;    
}

