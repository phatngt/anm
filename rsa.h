#ifndef RSA_H
#define RSA_H

#include <iostream>
#include <NTL/ZZ.h>
#include <gmp.h>
#include <gmpxx.h>

void createKeys(char* nameFilePrivateKey, char* nameFilePublicKey,long sizeNumber);

#endif
