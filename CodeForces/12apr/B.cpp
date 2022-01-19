#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long ar[10] = {0,1,11,101,1009,10001,100003,1000003,10000019,100000007};
		long long array[10] = {0,3,13,103,1013,99971,100019,1000033,10000169,100000049};
		long long a,b,c;
		cin>>a>>b>>c;
		long long x,y;
		long long factor;
		if(c==1)
		{
			x = ar[a];
			y = array[b];
			cout<<x<<" "<<y<<endl;
		}
		else 
		{
			factor = pow(10,c-1);
			x = ar[a-c+1];
			y = array[b-c+1];
			x*= factor;
			y*= factor;
			cout<<x<<" "<<y<<endl;
		}
		
	}
	return 0;
}