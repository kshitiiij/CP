#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n,i,j;

int main()
{
	ll row,col,num;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>num;
			if(num != 0 )
			{
				row = i;
				col = j;
			}
		}

	}

	cout<<(abs(row-2)+abs(col-2))<<endl;
	return 0;
}