#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kadaneSum(int a[],int n)
{
    int maxSum=a[0];
    int maxCurr=maxSum;
    for(int i=1;i<n;i++)
    {
        maxCurr=max(a[i],maxCurr+a[i]);
        if(maxCurr>maxSum)
            maxSum=maxCurr;

    }
    return maxSum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<kadaneSum(a,n)<<"\n";
    }
    return 0;
}
