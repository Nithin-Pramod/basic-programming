#include <bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 100

int lookup[MAX];

/* Function to initialize NIL
values in lookup table */
void _initialize()
{
	int i;
	for (i = 0; i < MAX; i++)
		lookup[i] = NIL;
}

/* function for nth Fibonacci number */
int fib(int n)
{
	if (lookup[n] == NIL)
	{
		if (n <= 1)
			lookup[n] = n;
		else
			lookup[n] = fib(n - 1) + fib(n - 2);
    }

return lookup[n];
}

// Driver code
int main ()
{
	int x=0,n;
	_initialize();
	cin>>n;
	while(x<=n)
	{
	    cout << fib(x)<<" ";
	    x++;
	    }
	
	return 0;
}
