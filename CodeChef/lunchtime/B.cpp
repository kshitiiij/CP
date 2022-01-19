#include<iostream>
#include<cmath>
using namespace std;

int summ(int arr[],int n)
{
	int sum =0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
	return sum;
}


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,count = 0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];

		if(summ(arr,n)%2==0)
			count=0;
		else
		{
			int sum=0;
			for(int i=0;i<n;i++)
			{
				if((sum+arr[i])%2!=0)
				{
					int x;
					int p;
					int c;
					c= ceil(arr[i]/2);
					p = max(0 , c -1);
					x = pow(arr[i],p);
					cout<<x<<endl;
					if((sum+x)%2==0)
					{
						sum+=x;
						count++;
					}
					else
						continue;
				}
				else
				{
					sum+=arr[i];
				}

			}
		}

		if(summ(arr,n)%2!=0)
			count = -1;

		cout<<count<<endl;

	}




	return 0;
}