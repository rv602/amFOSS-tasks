#include <cmath>
#include <iostream>
using namespace std;

int main() 
{
    int t,j;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        for(int i=n;;i++)
        {
            for(j=2;j<=n;j++)
            {
                if(i%j != 0)
                    break;
            }
            if(j == n+1)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
