#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    signed int n,m,d,n1,n2;
	    cin>>n;
	    cin>>m;
	    d = n / m;
    n1 = m * d;

    if((n * m) > 0)
        n2 = m * (d + 1); 
    else
        n2 = m * (d - 1);

    if(abs(n-n1) < abs(n-n2))
    {
        cout<<n1<<endl;
        continue;
    }
    cout<<n2<<endl;
	}
	return 0;
}