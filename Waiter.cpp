#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

#define boost ios_base::sync_with_stdio(false)

long get_next_prime(long curr_prime)
{
    long i = curr_prime+1;
    long ind = 0;
    while(true)
    {
        ind = 0;
        for(long j = 2 ; j < sqrt(i)+1 ; j++)
        {
            if(i%j == 0)
            {
                ind = 1;
                break;
            }
        }

        if(ind == 0)
            return i;

        i++;
    }
}

void printnext(vector <long> &A0, long &curr_prime)
{
    vector <long> A;
    vector <long> B;
    long len = A0.size();
    for(long i = len-1 ; i >= 0 ; i--)
    {
        if(A0[i] % curr_prime != 0)
            A.push_back(A0[i]);

        else
            B.push_back(A0[i]);
    }

    len = B.size();
    for(long i = len-1 ; i >= 0 ; i--)
        cout<<B[i]<<endl;

    A0 = A;
    curr_prime = get_next_prime(curr_prime);
}

int main() {

    long n,q,x;
    cin>>n>>q;
    vector <long> A0;
    for(long i = 0 ; i < n ; i++)
    {
        cin>>x;
        A0.push_back(x);
    }

    long curr_prime = 2;
    for(long i = 1 ; i < q+1 ; i++)
        printnext(A0,curr_prime);

    long len = A0.size();
    for(long i = len-1 ; i >= 0 ; i--)
        cout<<A0[i]<<endl;

    return 0;
}