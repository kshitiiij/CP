#include<iostream>
#include<cmath>

using namespace std;
// int sod(int n)
// {
// 	int sum=0;

// 	return sum;
// }

int main()
{
	int i;
	cin>>i;
	int num = i,sum=0;
	while(num>0)
	{
		sum += num%10;
		num=num/10;
	}
	num = sum;
	sum =0;
	while(num>0)
	{
		sum += num%10;
		num=num/10;
	}
	num = sum;
	sum=0;
	while(num>0)
	{
		sum += num%10;
		num=num/10;
	}
	cout<<sum<<endl;
}