#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	        cin>>ar[i];
	    int dif[n];
	    dif[0]=0;
	    for(int i=1;i<n;i++)
	        dif[i]=ar[i]-ar[i-1];
	    int mn=INT_MAX,mx=INT_MIN,c=1;
	    for(int i=1;i<n;i++)
	    {
	        if(dif[i]<=2)
	            c++;
	        else
	        {
	            mn=min(mn,c);
	            mx=max(mx,c);
	            c=1;
	        }
	    }
	    if(mn>c)
	        mn=c;
	    if(mx<c)
	        mx=c;
	    cout<<mn<<" "<<mx<<endl;
	}
	return 0;
}