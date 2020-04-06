#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool solve(int a[],int n)

{
   int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    if(sum%2!=0)
        return false;
    bool part[sum/2 + 1 ][n+1];//for each sum from 0 to sum / 2 check if a[i] exist in that set (n+1 because we also consider empty set) 
    
    for(int i=0;i<=n;i++)
    {
        part[0][i]=true;    //for sum 0 no number need to exist in set { set is empty ?(what of one of the numbers is 0)}
    }

    // part[0][0]=true; //sum of empty set id 0
    //we cannot include any number from array in the empty set  .so meake the laeft columns as false
    for(int i=1;i<=sum/2;i++)
    {
        part[i][0]=false;
    }
    for(int i=1;i<=sum/2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            //if jth element is greater than i(sum) dont include it
                    part[i][j]=part[i][j-1];
               if(i>=a[j-1])
                    part[i][j]=part[i-a[j-1]][j-1]|| part[i][j];
        }
    }   

    return part[sum/2][n];
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
        cout<<solve(a,n)<<"\n";
    }
    return 
}
