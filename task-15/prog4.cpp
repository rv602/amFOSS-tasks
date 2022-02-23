#include <cmath>
#include <iostream>
using namespace std;

int isPal(long m)
{
    long rev = 0;
    long m1 = m;
    while(m1!=0)
    {
        int r = m1%10;
        rev = (rev*10)+r;
        m1 /= 10;
    }
    if(m==rev){return true;}
    else{return false;}
}

int main()
{
    int t,n,i,j,k;
    cin >> t;
    long a[t];
    
    for(i=0; i<t; i++)
    {
        cin >> n;
        int multiple = 0;
        int product = 0;
        for(j=100; j<999; j++)
        {
            for(k=101; k<=999; k++)
            {
                multiple = j*k;
                if(isPal(multiple))
                {
                    if(multiple>product && multiple<n)
                    {
                        product = multiple;
                    }
                }
            }
        }
        a[i] = product;
    }
    for(int i=0; i<t; i++)
    {
        cout << a[i] << endl;
    }
}
