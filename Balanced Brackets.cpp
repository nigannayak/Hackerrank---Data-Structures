#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <list>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        list <char> l;
        string s;
        cin>>s;

        int len = s.size();
        for(int i = 0 ; i < len ; i++)
        {
            if(s[i] == '}' && l.back() == '{')
                l.pop_back();

            else if(s[i] == ']' && l.back() == '[')
                l.pop_back();

            else if(s[i] == ')' && l.back() == '(')
                l.pop_back();

            else
                l.push_back(s[i]);
        }

        if(l.empty())
            cout<<"YES\n";

        else
            cout<<"NO\n";
    }
    return 0;
}