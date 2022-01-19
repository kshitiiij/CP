#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,flag=0;
		cin>>n>>k;
		int a[n];
		if(2*k>=n)
		{
			cout<<"-1";
			flag=1;
		}
		else
		{	
			int j=1,l=0;
			for(int i=0;i<n;i++)
			{
				if(k>0)
				{
						if(i%2==0)
						{
							a[i] = j++;
						}
						else
						{
							a[i] = n-(l++);
							k--;
						}
				}
				else
				{
					a[i] = j++;
				}
				
			}
		}
		if(flag==0)
		{
				for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;

}