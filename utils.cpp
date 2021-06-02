#include "utils.h"

ZZZ powerMoldulo(const ZZZ& p, ZZZ e, const ZZZ& m){
    /**
     * p^e mod m
    **/
    ZZZ res;

    if (e == 0){
        res = 1;
        return res;
    }
    if (e < 0 ){
        res = -1;
        return res;
    }

   string k = e.get_str(2);
   string s;
   res = 1;
   for (long i = 0; i < k.length(); i++) {

      res = (res*res) % m;
      s = k[i];
      if (s.compare("1") == 0){
          res = (res*p) % m;
      }
   }
   return res;
}

ZZZ euclideExtends(ZZZ m, ZZZ e){

    /**
     *  ax + by = m
     *
     **/
    ZZZ x = 0;
    ZZZ a = e;
    ZZZ y = 1;
    ZZZ b = m;
    if(a == 1) return y;
    if(a == 0) return -1;
    while (true)
    {
        ZZZ quotient = b / a;
        b = b - a*quotient;
        x = x + y*quotient;
        if (b == 1) return m - x;
        if ( b == 0) return -1;
        quotient = a /b;
        a = a - b*quotient;
        y = y +quotient*x;
    }

    return x;

}

ZZZ gcdBigNumber(ZZZ m, ZZZ n)
{
    /* GCD(0, b) == b; GCD(a, 0) == a,
       GCD(0, 0) == 0 */
    ZZ a = conv<ZZ>(m.get_str(10));
    ZZ b = conv<ZZ>(n.get_str(10));
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
