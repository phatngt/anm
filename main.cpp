#include "rsa.h"
#include "utils.h"

using namespace std;


int main()
{

    createKeys("privatekey.txt","publickey.txt", 500);
    cryptRSA("plaintext.txt","publickey.txt","encryptFile.txt");
    decryptRSA("encryptFile.txt","privatekey.txt","decryptFile.txt");
    // cout<<powerBigNumber(2034,1234);
    return 0;
}
