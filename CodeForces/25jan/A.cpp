#include<iostream>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		long long n;
		int flag;
		cin>>n;
		if(n%2==1)
			cout<<"YES"<<endl;
		else
		{
			long long num=n;
			while(1)
			{
				if(num==1)
				{
					flag=0;
					break;
				}
				if(num%2==1)
				{
					flag=1;
					break;
				}
				num=num/2;
			}
			if(flag==0)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
	}
	return 0;
}