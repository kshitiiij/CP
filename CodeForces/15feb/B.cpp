#include<iostream>

using namespace std;

int main()
{
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		int x=n,y=1;
		int x_next,y_next;
		while(k>1)
		{
			// if(x==1)
			// 	x=n;
			// if(y==n)
			// 	y=1;
			if(x==1)
				x_next = n;
			else
				x_next = x-1;
			if(y==n)
				y_next = 1;
			else
				y_next = y+1;

			if(x_next == y_next)
			{
				if(x_next==1)
				{
					x=1;
					y=2;
				}
				else if(x_next==n)
				{
					x = n;
					y=1;
				}
				else
				{
					x = x-1;
					y = y+2;
				}
			}
			else
			{
				x--;
				y++;
			}
			k--;
		}
		cout<<y<<endl;


	}

return 0;
}