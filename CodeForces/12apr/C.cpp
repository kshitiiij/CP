#include<iostream>
using namespace std;

void swapp(int *arr,int index)
{
	int i,temp;
	int store = arr[index-1];
	for(int i=index-1;i>0;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0]=store;
}

int main()
{
	int n,q;
	cin>>n>>q;
	int col[n];
	for(int i=0;i<n;i++)
		cin>>col[i];
	int quer;
	for(int i=0;i<q;i++)
	{
		cin>>quer;
		int index;
		for(int j=0;j<n;j++)
		{
			if(col[j]==quer)
			{
				index = j+1;
				break;
			}
		}
		cout<<index<<" ";
		swapp(col,index);

	}

	return 0;
}