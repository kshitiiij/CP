#include<bits/stdc++.h>
#include<cstring>
using namespace std;

typedef long long int ll;
ll t,n,i,j;

main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll arr[n][n];
		memset(arr,0,sizeof(arr));
		ll square = n*n;
		ll num = 1;

		if(n==1)
			cout<<1<<endl;
		else if(n==2)
			cout<<-1<<endl;
	else
	{	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(num>square)
					break;
				arr[i][j] = num;
				num += 2;
			}
		}
		num = 2;

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(num>square)
					break;
				if(arr[i][j]==0)
				{
					arr[i][j] = num;
					num +=2;
				}
			
			}
		}

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
	}	
	}
}