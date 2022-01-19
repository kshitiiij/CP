#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		int ser1=0,ser2=0;
		for(int i=0;i<n;i++)
			cin>>arr[i];

		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
				ser1++;
			else if(arr[i]==2)
				ser2++;
			else 
				ser1++;
		}
		cout<<ser1<<endl;
	}
	return 0;
}