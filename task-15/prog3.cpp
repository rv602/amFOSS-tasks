#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    long a, ans;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
        ans = 0;
        cin >> a;
        
        if(a==0)
        {
            cout << 0 << endl;
            continue;
        }
        else 
        {
            for(int j=2; j<=sqrt(a)+1; j++)
            {
            while(a%j==0 && a!=j)
            {
                a = a/j;
            }
            ans = a;
            }
        cout << ans << endl;
        }
    }
}
