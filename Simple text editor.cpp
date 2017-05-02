#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

    long q,x;
    string str;
    cin>>q;

    vector <long> type;
    vector <string> str_val;
    string curr_str;

    while(q--)
    {
        cin>>x;
        if(x == 1)
        {
            cin>>str;
            str_val.push_back(str);
            type.push_back(1);
            curr_str.append(str);
        }

        else if(x == 2)
        {
            long k;
            cin>>k;
            long len = curr_str.size();
            string push_str;
            push_str.assign(curr_str,len-k,len);
            curr_str.assign(curr_str,0,len-k);
            type.push_back(2);
            str_val.push_back(push_str);
        }

        else if(x == 3)
        {
            long k;
            cin>>k;
            char x = curr_str.at(k-1);
            cout<<x<<endl;
        }

        else
        {
            if(type.back() == 2)
            {
                curr_str.append(str_val.back());
                type.pop_back();
                str_val.pop_back();
            }

            else
            {
                long len = curr_str.size();
                string pop = str_val.back();
                long rem = pop.size();
                curr_str.assign(curr_str,0,len-rem);
                type.pop_back();
                str_val.pop_back();
            }
        }
    }

    return 0;
}