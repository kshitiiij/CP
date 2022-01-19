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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		int one,two,o=0,t=0,oi,ti;
		one = a[0];
		oi=0;
		o++;
		for(int i=1;i<n;i++)
		{
			if(a[i]==one)
			{
				o++;
				oi= i;
				continue;
			}
			else
			{
				two =a[i];
				t++;
				ti = i;
			}
		}

		if(o<t)
		{
			cout<<oi+1<<endl;
		}
		else
		{
			cout<<ti+1<<endl;
		}



	}
	return 0;
}