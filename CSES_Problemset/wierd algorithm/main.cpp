#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    while(n>=1)
    {
        cout << n << " ";
        if (n==1)
            return 0;
        if ( !(n%2) )
            n /= 2;
        else
            n = (n*3) + 1;
    }
    return 0;
}
