
#include<iostream>
#include<bits/stdc++.h>
#include<bitset>
#include<string>
#include<list>
using namespace std;
#define ull unsigned long long
#define ll long long


int main(int argc,char* argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int res=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			res^=x;
		}
		cout<<res<<"\n";
	}
	return 0;
}


