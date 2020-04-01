#include<iostream>
#include<bits/stdc++.h>
#include<random>
#include<bitset>
#include<string>
#include<list>
using namespace std;
#define ull unsigned long long
#define ll long long

random_device rd;
mt19937 eng(rd());

void swap(int * a,int * b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int partition(int a[],int low,int high)
{
    uniform_int_distribution<> distr(low, high);
    int rind=distr(eng);
    swap(&a[rind],&a[high]);
	int pivot=a[high];
	int i=low;
	for(int j=low;j<=high-1;j++)
	{
		if(a[j]<=pivot)
		{
			swap(&a[i],&a[j]);
			i++;
		}
	}
	swap(&a[i],&a[high]);
	return i;
}

int quickselect(int a[],int s,int e,int k)
{
	if(k>0 && k<=e-s+1)
	{
		int p;
		p=partition(a,s,e);
		if((p-s)==(k-1))
			return a[p];
		else if((k-1)<(p-s))
			return quickselect(a,s,p-1,k);
		else
			return quickselect(a,p+1,e,k-p+s-1);

	}

}

int main(int argc,char* argv[])
{
    int t;
    cin>>t;
    
    while(t--)
    {
	int n,k;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	cout<<quickselect(a,0,n-1,k);
	cout<<"\n";
    }
	return 0;
}

