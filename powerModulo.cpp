#include "powerModulo.h"

ZZZ power_moldulo(const ZZZ& p, ZZZ e, const ZZZ& m){

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

// int main(int argc, char const *argv[])
// {
//     ZZZ a,b,m;
//     cin>>a;
//     cin>>b;
//     cin>>m;
//     cout<<power_moldulo(a,b,m);
//     return 0;
// }


