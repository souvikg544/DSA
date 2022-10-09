// Program to find all the primes in a given range by sieve of Eratosthenes .

#include <iostream>
#include <math.h>

using namespace std ;
void primes(int n)
{
    int prime[100] = {0} ;

    for(int i = 2 ; i <= n ; i++)
    {
        if(!prime[i])
        {
            for(int j =pow(i,2) ; j <= n ; j += i)
            {
                prime[j] = 1 ;
            }
        }
    }

    for(int i = 2 ; i <= n ; i++)
    {
        if(!prime[i])
        {
            cout << i ;
        }

        cout << endl ;
    }
}

int main()
{
    int n ;
    cin >> n ;

    primes(n) ;

    return 0 ;
}