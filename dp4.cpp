#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int solve(int a[],int n)
{
    int I=a[0],E=0;
    for(int i=1;i<n;i++)

    {
        int iN=a[i]+min(I,E);
        int eN=I;
        
        I=iN;
        E=eN;
    }
    return min(I,E);
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
	return 0;
}

