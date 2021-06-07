#ifndef RSA_H
#define RSA_H

#include <iostream>
#include <NTL/ZZ.h>
#include <gmp.h>
#include <gmpxx.h>

void createKeys(char* nameFilePrivateKey, char* nameFilePublicKey,long sizeNumber);
void cryptRSA (char* fileMText,char* fileKey,char *fileCrypt);
void decryptRSA (char* fileEncrypt,char* fileKey,char *fileDecrypt);
#endif
