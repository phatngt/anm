#include "utils.h"
#include "primeGenerator.h"
#include "rsa.h"

void createKeys(char* nameFilePrivateKey, char* nameFilePublicKey, long sizeNumber){

    PrimeGenerator primeGenerator;
    ofstream privateFile(nameFilePrivateKey);
    ofstream publicFile(nameFilePublicKey);

    ZZZ p = primeGenerator.generate_strong_prime(sizeNumber);
    ZZZ q = primeGenerator.generate_strong_prime(sizeNumber);

    ZZZ n = p*q;
    ZZZ phi = (p-1)*(q-1);

    ZZZ e;
    e = createEncryptKey(sizeNumber,phi);

    ZZZ d;
    do
    {
        d = euclideExtends(phi,e);
        e = createEncryptKey(sizeNumber,phi);
    } while (d == -1);

    /* private key */
    privateFile<<n.get_str()<<endl;
    privateFile<<d.get_str()<<endl;

    privateFile.clear();
    privateFile.close();

    /* public key */

    publicFile<<n.get_str()<<endl;
    publicFile<<e.get_str()<<endl;

    publicFile.clear();
    publicFile.close();

}
