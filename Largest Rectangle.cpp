#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    long n,x;
    cin>>n;
    vector <long> vec;
    for(long i = 0 ; i < n ; i++)
    {
        cin>>x;
        vec.push_back(x);
    }

    long ans(0);
    for(long i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            long j = i;
            long total(0);
            while(j < n && vec[j] >= vec[0])
            {
                total++;
                j++;
            }

            ans = max(ans,(total*vec[0]));
        }

        else
        {
            long j = i;
            long total(0);
            while(j >= 0 && vec[j] >= vec[i])
            {
                total++;
                j--;
            }

            j = i+1;
            while(j < n && vec[j] >= vec[i])
            {
                total++;
                j++;
            }

            ans = max(ans,(total*vec[i]));
        }
    }

    cout<<ans;
    return 0;
}