#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void reverse(ll a[],ll l, ll h)
{
    while(l<h)
    {
        swap(a[l],a[h]);
        l++;
        h--;
    }
}
ll * leftRotate(ll a[],ll n,ll d)
{
    reverse(a,n-d,n-1);
    reverse(a,0,n-d-1);
    reverse(a,0,n-1);
    return a;
}

int main() {
	int t;
	ll i,n,d;
	while(t!=0)
	{
	    cin>>n;
	    cin>>d;
	    ll a[n];
	    for (i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	  ll *a1;
	  a1=leftRotate(a,n,d);
	  for (i=0;i<n;i++)
	  {
	      cout<<*(a1+i);
	  }
	}
}