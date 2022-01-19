#include<iostream>
using namespace std;

int main()
{	
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int a,b,k;
		cin>>a>>b>>k;
		int arr[2][k];
		int count=0;
		
		for(int p=0;p<2;p++)
		{
			for(int q=0;q<k;q++)
			{
				cin>>arr[p][q];
			}
		}

		for(int p=0;p<k;p++)
		{
			for(int q=p;q<k;q++)
			{
				if(arr[0][p]!=arr[0][q] && arr[1][p]!=arr[1][q])
					count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}