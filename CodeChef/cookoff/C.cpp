#include <iostream>
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


int main() 
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a,b,c,flag=0;
        for(int j=1;j<=n;j++)
        {
            if(isPrime(j))
            {
                a=j;
                for(int k=j+1;k<=n;k++)
                {
                    if(isPrime(k))
                    {
                        b=k;
                        if(!(a+b>n) && isPrime(a+b))
                        {
                            flag++;
                            
                        }    
                    }
                }
            }
        }
        cout<<flag<<endl;
    }
	return 0;
}
