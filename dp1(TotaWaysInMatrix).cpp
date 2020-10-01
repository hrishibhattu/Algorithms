#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
int solve(int a,int b)
{
    int count[a][b]={0};
    count[0][0]=1;
    for(int i=0;i<b;i++)
        count[0][i]=1;
    for(int i=0;i<a;i++)
        count[i][0]=1;
    
    for(int i=1;i<a;i++)
    {
        for(int j=1;j<b;j++)
        {
           count[i][j]=count[i-1][j]+count[i][j-1];
        }
    }
    
    return count[a-1][b-1];
}
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<"\n";
    }
	//code
	return 0;
}