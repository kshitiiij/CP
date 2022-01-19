#include<iostream>


using namespace std;

bool isPrime(int n) 
{ 
     
    if (n <= 1) 
        return false; 
  
     
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int d,b;
		cin>>d;
		int a=1+d;	
		while(!isPrime(a))
			a++;
		b=a+d;
		while(!isPrime(b))
			b++;

		cout<<lcm(a,b)<<endl;
	}
	return 0;
}