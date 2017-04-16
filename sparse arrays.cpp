#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;


int main()
{
    int n,i,j,m,total;
    string s[10000],s1[10000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>s[i];
    cin>>m;
    for(i=0;i<m;i++)
        cin>>s1[i];

    for(i=0;i<m;i++)
    {
        total=0;
        for(j=0;j<n;j++)
        {
            if(s[j]==s1[i])
                total++;
        }
        cout<<total<<endl;
    }
    return 0;
}