#include "rsa.h"
using namespace std;


int main(int argc, char ** argv)
{
    cout<<argc<<endl;
    if(argc != 2){
        cout<< "Please enter file name ... ";
        return 0;
    }
    char * filename = argv[1];
    cout<<filename<<endl;
    createKeys("privatekey.txt","publickey.txt", 500);
    cryptRSA(filename,"publickey.txt","encryptFile.txt");
    decryptRSA("encryptFile.txt","privatekey.txt","decryptFile.txt");
    return 0;
}
