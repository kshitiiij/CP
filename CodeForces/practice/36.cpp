//Mul by 2 Div by 6
#include<bits/stdc++.h>
#include<limits>
using namespace std;
typedef long long int ll;
ll t,n,m,i;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		ll two =0, three =0;
		m = n;
		while(n%2==0) {
			n /=2;
			two++;
		}
		while(n%3==0) {
			n /=3;
			three++;
		}
		// n = m;
		if(m==1)
			cout<<0<<endl;
		else if(n != 1)
			cout<<-1<<endl;
		else if(two>three)
			cout<<-1<<endl;
		else if(two==three)
			cout<<two<<endl;
		else if(two<three)
			cout<<(three+three-two)<<endl;
	}

	return 0;

}