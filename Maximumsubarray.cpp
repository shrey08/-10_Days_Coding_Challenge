#include <bits/stdc++.h>
using namespace std;
typedef long int ll;
ll n,max_till_now,max_end_here,i,en,start,big;

void Kadanearr(ll a[],ll n)
{
    max_till_now=0;max_end_here=0;
    start=0;
    en=0;
    big=0;
    for(i=0;i<n;i++)
    {
        max_end_here=max_end_here+a[i];
        if(max_end_here<0)
        {
            max_end_here=0;
            big=i+1;
        }
        else if(max_till_now<max_end_here)
        {
            max_till_now=max_end_here;
            start=big;
            en=i;
        }
    }
    for(i=start;i<=en;i++)
    {
        cout<<a[i];
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    //ll n;
	    cin>>n;
	    ll a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    Kadanearr(a,n);
	}
	return 0;
}
