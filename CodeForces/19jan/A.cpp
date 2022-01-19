#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;



int main()
{
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,j;
		string b;
		string a="",d="";
		cin>>n;
		cin>>b;
		for(j=0;j<n;j++)
		{
			if(b[j]=='0')
			{
				if(j==0)
					a+='1';
				if(j>0)
				{
				if(a[j-1] != b[j-1])
					a+='0';
				else
					a+='1';
				}
			}
			else if(b[j]=='1')
			{
				if(j==0)
					a+='1';
				if(j>0)
				{	
				if(a[j-1] == b[j-1])
					a+='0';
				else
					a+='1';
				}
			}
		}
		cout<<a<<endl;

	}
	return 0;
}