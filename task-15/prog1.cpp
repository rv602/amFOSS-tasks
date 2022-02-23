#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t; 
    int a[t];
    long sum;
    
    for(int i=0; i<t; i++)
    {
        cin >> a[i];
    }
    
    for(int i=0; i<t; i++)
    {
        sum = 0;
        for(int j=0; j<a[i]; j++)
        {
            long m3 = (a[i]-1)/3;
            long m5 = (a[i]-1)/5;
            long m15 = (a[i]-1)/15;
            sum = (3*(m3*(m3+1))/2)+(5*(m5*(m5+1))/2)-(15*(m15*(m15+1))/2);
        }
        cout << sum << endl;
    }
    return 0;
}
