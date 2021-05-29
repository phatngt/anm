// Binary GCD
#include <NTL/ZZ.h>
using namespace std;
using namespace NTL;

ZZ gcd(ZZ a, ZZ b)
{
    /* GCD(0, b) == b; GCD(a, 0) == a,
       GCD(0, 0) == 0 */
    if (IsZero(a))
        return b;
    if (IsZero(b))
        return a;

    /*Finding K, where K is the
      greatest power of 2
      that divides both a and b. */
    long k;
    for (k = 0; IsZero((a | b) & ZZ(1)); ++k)
    {
        a = a/2;
        b = b/2;
    }

    /* Dividing a by 2 until a becomes odd */
    while (IsZero((a & ZZ(1))))
        a = a/2;

        /* From here on, 'a' is always odd. */
    do
    {
        /* If b is even, remove all factor of 2 in b */
        while (IsZero((b & ZZ(1))))
            b = b/2;

        /* Now a and b are both odd.
           Swap if necessary so a <= b,
           then set b = b - a (which is even).*/
        if (a > b)
            // Swap a and b
        {
                ZZ temp = a;
                a = b;
                b = temp;
        }

        b = (b - a);

    }while (!IsZero(b));

    /* restore common factors of 2 */
    return a * power(ZZ(2), k);
}

int main()
{
    ZZ a, b;
    cout << "1st number: ";
    cin >> a;
    cout << "2nd number: ";
    cin >> b;
    cout << "gcd is: " << gcd(a, b) << endl;
    return 0;
}

