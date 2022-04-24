#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, k = 1, l, sum = 0, p = 0, q = 1000, flag = 0, j, flag1 = 0;
        cin >> n >> x;
        l = n * x;

        j = l;
        for (int i = 0; i < n; i++)
        {
            if (j <= 1000)
            {
                if (i == 0)
                    cout << l << " ";
                else
                {
                    if (n % 2 == 0 && i == 1)
                        cout << 0 << " ";
                    else
                    {
                        if (k == l)
                        {
                            k++;
                        }
                        cout << k << " " << (-1) * k << " ";
                        k++;
                        i++;
                    }
                }
            }
            else
            {
                if (l >= q)
                {
                    cout << q << " ";
                    q--;
                    l = l - q;
                }
                else
                {
                    if (flag1 == 0)
                    {
                        cout << l << " ";
                        flag1 = 1;
                    }
                    if ((n - i) % 2 == 0 && flag == 0)
                    {
                        cout << 0 << " ";
                        flag = 1;
                    }
                    else
                    {
                        cout << q << " " << (-1) * q << " ";
                        q--;
                        i++;
                    }
                }
            }
        }

        cout << endl;
    }
    return 0;
}