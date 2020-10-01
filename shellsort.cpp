
#include<iostream>
#include<bits/stdc++.h>
#include<bitset>
#include<string>
#include<list>
using namespace std;
#define ull unsigned long long
#define ll long long

void shellsort(int a[],int n)
{
	for(int gap=n/2;gap>0;gap/=2)
	{
		for(int i=gap;i<n;i++)
		{
			int temp=a[i];

			int j;
			for(j=i;j>=gap && a[j-gap] > temp; j-=gap)
			{
				a[j]=a[j-gap];
			}
			a[j]=temp;
		}

	}
}


int main(int argc,char* argv[])
{

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		a[i]=n-i;
	shellsort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}


