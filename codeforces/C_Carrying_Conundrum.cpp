#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a = 0, b = 0;
        ll pw = 1;
        while (n)
        {
            a += pw * (n % 10);
            n /= 10;
            b += pw * (n % 10);
            n /= 10;
            pw *= 10;
        }
        cout << (a + 1) * (b + 1) - 2 << "\n";
        //adding 1 to every ordered pair because for a number n. there exits n+1 ordered pairs
    }
}