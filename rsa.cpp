#include "utils.h"
#include "primeGenerator.h"
#include "rsa.h"

void createKeys( long sizeNumber){

    PrimeGenerator primeGenerator;
    // ofstream privateFile(nameFilePrivateKey);
    // ofstream publicFile(nameFilePublicKey);

    ZZZ p = primeGenerator.generate_strong_prime(sizeNumber);
    ZZZ q = primeGenerator.generate_strong_prime(sizeNumber);

    ZZZ n = (p-1)*(q-1);

    ZZZ e, k;

    do{
        gmp_randclass e_random(gmp_randinit_default);
        e_random.seed(time(NULL));
        e = e_random.get_z_bits(sizeNumber);
        ZZZ e_even = e&1;
        if(e_even == 0) e = e|1;
        // k = gcdBigNumber()

    }while (k!=1);


}
