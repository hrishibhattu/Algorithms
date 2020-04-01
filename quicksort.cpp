#include<iostream>
#include<bits/stdc++.h>
#include<bitset>
#include<string>
#include<list>
using namespace std;
#define ull unsigned long long
#define ll long long

void swap(int * a,int * b)
{
	int t=*a;
	*a=*b;
	*b=t;
}



int partition(int a[],int low,int high)
{
	int pivot=a[high];
	int i =( low-1 );

	for(int j=low;j<=high-1;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		
		}
	}
	swap(&a[i+1],&a[high]);
	return (i+1);
	
}

void quicksort(int a[],int s,int e)
{
	if(s<e)
	{
		int p;
		p=partition(a,s,e);
		quicksort(a,s,p-1);
		quicksort(a,p+1,e);

	}
}

void printArr(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main(int argc,char* argv[])
{


	int n;
	cin>>n;
	int *a= new int[n];
	for(int i=0;i<n;i++)
		a[i]=n-i;
	printArr(a,n);
	quicksort(a,0,n-1);
	printArr(a,n);
	return 0;


	
}


