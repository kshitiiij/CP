#include<iostream>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		//cout<<k<<endl;
		long long arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		for(int i=0;i<n-1;i++)
		{
			long long temp = max(arr[i]-k,(long long)0);
			arr[i+1] += arr[i] - temp;
			arr[i] = temp;
		}

		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
