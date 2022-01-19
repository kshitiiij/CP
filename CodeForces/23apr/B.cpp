#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t,n,m,arr[101][101],i,j,mini;

main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				cin>>arr[i][j];
		}
		

		for(i=0;i<n;i++)
		{
			sort(arr[i],arr[i] + m);
		}

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				{
					ll temp = arr[i][0];
					arr[i][0] = arr[i][i];
					arr[i][i] = temp;
				}
		}

		// for(i=0;i<n;i++)
		// {
		// 	for(j=0;j<m;j++)
		// 		cout<<arr[i][j]<<" ";
		// 	cout<<endl;
		// }



	}
}