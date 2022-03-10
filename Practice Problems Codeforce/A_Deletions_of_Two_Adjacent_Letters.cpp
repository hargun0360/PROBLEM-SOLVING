#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char c;
        cin >> c;
        bool flag = 0;
        ll l = s.length();
        for (auto it = 0; it < l; it++)
        {
            if (s[it] == c)
            {
                if (it % 2 == 0)
                {
                    cout << "YES" << endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}