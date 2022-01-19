#include<iostream>
using namespace std;

int main()
{

int i,t;
cin>>t;
for(i=0;i<t;i++)
{
	int n,k,x,y,i,j,colli=0;
    cin>>n>>k>>x>>y;
    float curx,cury;
    if(x>y)
    {
        if(k%4==1)
        {
            curx=n;
            cury=(n+y-x);
        }
        else if(k%4==2)
        {
            curx=(n+y-x);
            cury=n;
        }
        else if(k%4==3)
        {
            curx=0;
            cury=(x-y);
        }
        else
        {
            curx=(x-y);
            cury=0;
        }
        
    }
    else if(y>x)
    {
        if(k%4==1)
        {
            curx=n=x-y;
            cury=n;
        }
        else if(k%4==2)
        {
            curx=n;
            cury=n+x-y;
        }
        else if(k%4==3)
        {
            curx=y-x;
            cury=0;
        }
        else
        {
            curx=0;
            cury=y-x;
        }
    }
    else
    {
        curx=n;
        cury=n;
    }
    
    cout<<curx<<" "<<cury<<endl;

}

return 0;
}