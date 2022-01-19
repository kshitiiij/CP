#include<iostream>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long height[n];
		for(int i=0;i<n;i++)
			cin>>height[i];
		long long odd=0,even=0;
		long long o[n],e[n];
		for(int i=0;i<n;i++){
			if(height[i]%2!=0) {
				o[odd++] = height[i];
			}
			else
			{
				e[even++] = height[i];
			}
		}

		for(int i=0;i<odd;i++)
			cout<<o[i]<<" ";
		for(int i=0;i<even;i++)
			cout<<e[i]<<" ";
		cout<<endl;
	}
	return 0;
}