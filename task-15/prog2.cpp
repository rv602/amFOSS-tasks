#include <iostream>
using namespace std;

int main()
{
    long t,n, nt, t1=0, t2=1;
    cin >> t;
    // long arr[t];
    long sum;
    
    for(int i=0; i<t; i++)
    {
        cin >> n;
        t1 = 0, t2 = 1;
        sum = 0;
        nt = t1 + t2;
        while(nt<=n)
        {
            t1 = t2;
            t2 = nt;
            nt = t1 + t2;
            if(nt%2==0 && nt<=n)
            {
                sum += nt;
            }
        }
        cout << sum << endl;
    }
}
