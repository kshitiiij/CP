#include<iostream>
using namespace std;

int sum(int arr[],int len)
{
	int sum=0;
	for(int i=0;i<len;i++)
		sum+=arr[i];
	return sum;
}

int minimum(int arr[],int len)
{
	int min=arr[0],loc=0;
	for(int i=1;i<len;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			loc=i;
		}
	}
	return loc;
}

int maximum(int arr[],int len)
{
	int max=arr[0],loc=0;
	for(int i=1;i<len;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			loc=i;
		}
	}
	return loc;
}

int main()
{

int i,t;
cin>>t;
for(i=0;i<t;i++)
{
	int n,m,swap=0;
	cin>>n>>m;
	int john[n],jack[m],j;
	for(j=0;j<n;j++)
		cin>>john[j];
	for(j=0;j<m;j++)
		cin>>jack[j];
	int temp;

	for(j=0;j<min(n,m);j++)
	{
	
		if(sum(john,n)>sum(jack,m))
			break;
		int x=maximum(jack,m),y=minimum(john,n);
		temp=jack[x];
		jack[x]=john[y];
		john[y]=temp;
		swap++;
	}

if(sum(john,n)>sum(jack,m))
	cout<<swap<<endl;
else
	cout<<"-1"<<endl;

}

return 0;
}