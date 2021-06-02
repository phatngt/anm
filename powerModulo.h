#ifndef POWERMODULO_H
#define POWERMODULO_H

#include <NTL/ZZ.h>
#include <iostream>
#include <gmpxx.h>
using namespace std;
using namespace NTL;

typedef mpz_class ZZZ;

ZZZ power_moldulo(const ZZZ& p, ZZZ e, const ZZZ& m);
#endif
