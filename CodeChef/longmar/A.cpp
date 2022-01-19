#include<iostream>

using namespace std;

int main()
{
	int n,h,x,flag=0;
	cin>>n>>h>>x;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]+x>=h)
			flag=1;
	}

	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}