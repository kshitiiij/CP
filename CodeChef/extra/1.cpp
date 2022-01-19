#include<iostream>

using namespace std;

int main()
{

int t,i;
cin>>t;
for(i=0;i<t;i++)
	{
	int n,k,d,j,total=0,prob;
	cin>>n>>k>>d;
	for(j=0;j<n;j++)
		{
		cin>>prob;
		total+=prob;
		}	
	if(k>total)
		cout<<0;
	else
		{
		int pos=total/k;
		cout<<min(pos,d);
		}
	}
}