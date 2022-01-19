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
		char z;
		int a[2][2];
		int x=0,y=0;
		int one_i,one_j,two_i,two_j;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>z;
				if(z=='*')
				{
					a[x][y++] = i;
					a[x][y] = j;
				}
				x=1;
				y=0;
			}
		}

		if(a[0][0]==a[0][1] )
		{
			if(a[0][0]!=0)
			{
				one_i = a[0][0]-1;
				one_j = a[0][1];
				two_i = a[1][0]-1;
				two_j = a[1][1];
			}
			else
			{
				one_i = a[0][0]+1;
				one_j = a[0][1];
				two_i = a[1][0]+1;
				two_j = a[1][1];
			}
		}
		else if(a[1][0]==a[1][1])
		{
			if(a[1][0]!=0)
			{
				one_i = a[0][0];
				one_j = a[0][1]-1;
				two_i = a[1][0];
				two_j = a[1][1]-1;
			}
			else
			{
				one_i = a[0][0];
				one_j = a[0][1]+1;
				two_i = a[1][0];
				two_j = a[1][1]+1;
			}
		}
		else
		{
			one_i = a[0][0];
			one_j = a[1][1];
			two_i = a[1][0];
			two_j = a[0][1];
		}

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==one_i && j ==one_j)
				{
					cout<<"*";
				}
				else if(i==two_i && j ==two_j)
				{
					cout<<"*";
				}
				else if(i==a[0][0] && j == a[0][1])
				{
					cout<<"*";
				}
				else if(i==a[1][0] && j == a[1][1])
				{
					cout<<"*";
				}
				else
					cout<<".";
			}
			cout<<endl;
		}

	}



	return 0;
}