#include "rsa.h"
#include "utils.h"

using namespace std;
#define _TIME int starts,finishs;
#define STARTS_TIME starts=clock();
#define FINISHS_TIME finishs=clock(); cout<<(double)(finishs-starts)/CLOCKS_PER_SEC<<endl;

int main()
{
    createKeys(500);
    int a = 10;
    a = a&1;
    cout<<a<<endl;
    return 0;
}
