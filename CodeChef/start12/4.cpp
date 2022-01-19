#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,m,x,y,i;

void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;
  
    number = 0;
  
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
  
        // extract the next character from the buffer
        c = getchar();
    }
  
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
  
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	//cin>>t;
	fastscan(t);
	while(t--)
	{
		//cin>>n>>m>>x>>y;
		fastscan(n);
		fastscan(m);
		fastscan(x);
		fastscan(y);
		ll ans=0,op1=0,op2=0;
		op1 = ((min(n,m)-1)*y) + abs(m-n)*x;
		op2 = (m+n-2)*x;
		ans = min(op1,op2);
		cout<<ans<<endl;
		
	}
	return 0;
}