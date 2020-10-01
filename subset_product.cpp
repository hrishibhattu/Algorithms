/*Given a number N, the task is to find the product of all the elements from all possible subsets of a set formed by first N natural numbers.*/


#include<iostream>
#include<string>
#include<bitset>
#include<list>
#include <bits/stdc++.h> 
#define ll long long
#define ld long double
#define ull unsigned long long
using namespace std;

ull subset_p(int n)
{
	ull p=pow(2,n-1);
	ull prod=1;
	for(int i=1;i<=n;i++)
		prod*=pow(i,p);
	return prod;
}



int main()
{
	int n;
	cin>>n;
	cout<<subset_p(n);
	return 0;
}

	



