#include<iostream>

using namespace std;

int main()
{
	int k,t;
	cin>>t;
	while(t--)
	{
		int i,n,x;
		cin>>n>>x;
		int movie[n][2];
		for(i=0;i<n;i++)
		{
			cin>>movie[i][0];
			cin>>movie[i][1];
		}

		int max = 0;
		for(i=0;i<n;i++)
		{
			if(movie[i][0]<=x && movie[i][1]>max)
			{
				max = movie[i][1];
			}
		}

		cout<<max<<endl;
	}


	return 0;

}