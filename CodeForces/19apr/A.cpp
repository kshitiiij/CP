#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool perfect(long long num)
{
	long long sqt = sqrt(num);
	long long sq = sqt*sqt;
	if(num==sq)
		return true;
	else
		return false;
}

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long array[n];
		for(int i=0;i<n;i++)
			cin>>array[i];

		long long flag=0,prod=1;
		for(int i=0;i<n;i++)
		{	
			
			

			if(!perfect(array[i]))
			{
				cout<<"YES"<<endl;
				flag=1;
				break;
			}


		}
		if(flag==0)
			cout<<"NO"<<endl;
	}
	return 0;
}