// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void SieveOfEratosthenes(ll n)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for (ll p=2; p*p<=n; p++)
	{
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples of p
			for (ll i=p*2; i<=n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (ll p=2; p<=n; p++)
	if (prime[p])
		cout << p << " ";// C:\Users\Admin\Desktop\apna college\sieveoferatosthenes.cpp
}

// Driver Program to test above function
int main()
{
	int n = 30;
	cout << "These are the prime numbers smaller "
		<< " than or equal to " << n << endl;
	SieveOfEratosthenes(n);
	return 0;
}
