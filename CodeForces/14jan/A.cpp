#include<iostream>
using namespace std;

int cmp(const void *a,const void *b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int z,t;
	cin>>t;
	for(z=0;z<t;z++)
	{
		int n,d;
		cin>>n>>d;
		int arr[n],y;
		for(y=0;y<n;y++)
			cin>>arr[y];
		int i,j,k,flag=0;

		qsort(arr,n,sizeof(int),cmp);

		if(arr[n-1]<=d)
			cout<<"YES"<<endl;
		else if((arr[0]+arr[1])<=d)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	
	}
	return 0;
}