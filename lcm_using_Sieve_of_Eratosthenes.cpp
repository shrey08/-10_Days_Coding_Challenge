#include <bits/stdc++.h> 
#define MAX 100000 
using namespace std; 

vector <int> primes; 

void sieve() 
{ 
	bool tf[MAX] = {false}; 
	for (int i=2; i*i<=MAX; i++) 
	{ 
		if (tf[i]==false) 
			for (int j=2; j*i<=MAX; j++) 
				tf[i*j] = true; 
	} 

	 
	for (int i=2; i<=MAX; i++) 
		if (tf[i]==false) 
			primes.push_back(i); 
} 

 
long long LCM(int n) 
{ 
	long long lcm = 1; 
	for (int i=0; i<primes.size() && primes[i]<=n; i++) 
	{ 
		int p= primes[i]; 
		while (p*primes[i] <= n) 
			p = p *primes[i]; 

		lcm *= p; 
		lcm %= 1000000007; 
	} 
	return lcm; 
} 

int main() 
{ 
	sieve(); 
	int N;
	cin>>N; 
	cout << LCM(N); 
	return 0; 
} 
