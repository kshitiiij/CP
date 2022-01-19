#include<iostream>

using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m,x;
		cin>>n>>m>>x;
		
		long long row,col,num;

		row = x%n;
		if(row==0)
			row = n;
		if(x%n==0)
			col= x/n;
		else
			col = x/n +1;
		
		num = (row-1)*m + col;
		cout<<num<<endl;

	}

	return 0;
}