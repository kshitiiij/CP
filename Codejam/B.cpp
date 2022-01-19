#include<iostream>
using namespace std;

int main()
{
    int t,k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        int x,y;
        string s;
        cin>>x>>y>>s;
        
        int len = s.length();
        int start,end=0,flag1=0,flag2=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='?')
            {
                start = i;
                flag1 =1;
            }
            else if(s[i]!='?')
                break;
        }
        string s1,s2;
        if(flag1==1)
        {
            s1 = s.substr(start+1);
            len = s1.length();
        }
        else
        {
            s1 = s;
            len = s1.length();
        }

        for(int i=len-1;i>=0;i--)
        {
            if(s1[i]=='?')
            {
                end = i;
                flag2=1;
            }
            else if(s1[i]!='?')
                break;

        }
        if(flag2==1)
        {   
            s2 = s1.substr(0,end);
            len = s2.length();
        }
        else
        {
            s2 = s1;
            len = s2.length();
        }
    
        for(int i=0;i<len;i++)
        {
            if(s2[i]=='?' && s2[i-1]==s2[i+1])
                s2[i] = s2[i-1];
            if(s2[i]=='?' && s2[i-1]=='J' && s2[i+1]=='C')
            {
                s2[i]='J';
            }
            else if(s2[i]=='?' && s2[i-1]=='C' && s2[i+1]=='J')
            {
                s2[i]='C';
            }
            else if(s2[i]=='?' && s2[i-1]!='?' && s2[i+1]=='?')
            {
                s2[i]=s2[i-1];
            }

        }

        int cost=0;
        for(int i=0;i<len;i++)
        {
            if(s2[i]=='J')
            {
                if(s2[i+1]=='C')
                    cost+=y;
                else
                    continue;
            }
            else
            {
                if(s2[i+1]=='J')
                    cost+=x;
                else
                    continue;
            }
        }

        cout<<"Case #"<<k<<": "<<cost<<endl;
    }


    return 0;
}