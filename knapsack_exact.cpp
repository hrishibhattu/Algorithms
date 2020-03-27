/* Given an array of integers ,find out if there is subset whose sum is exactly W*/


#include<iostream>
#include<string>
#include<bitset>
int main(int argc,char* argv[])
{
	std::bitset<10000000+1> can;
	int n,W;
	std::cout<<"Enter n: ";
	std::cin>>n;
	std::cout<<"Enter W: ";
	std::cin>>W;
	can[0]=true;
	for(int i=0;i<n;i++)
	{
		int x;
		std::cin>>x;
		can|=can<<x;
	}
	if(can[W])
		std::cout<<"YES";
	else
		std::cout<<"NO";
	return 0;
}

