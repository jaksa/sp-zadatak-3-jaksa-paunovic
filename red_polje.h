#include <iostream>
using namespace std;
struct klijent{
       unsigned short ai,bi,ci,di;
       char ime [20],prezime[20];
       unsigned short dan,mjesec,godina;
       float tekuci,devizni;
       };

struct banka{
       klijent el[10000];
       int front,rear;
       };

banka red,red_c,red_e;

int AddOne(int n) {
return((n+1)%10000);
}

klijent FrontQ (banka red) {
      return red.el[red.front];      
}

void EnQueueQ (klijent x, banka &red) {
     red.rear=AddOne(red.rear);
     red.el[red.rear]=x;
}

void DeQueueQ (banka &red) {
     red.front=AddOne(red.front);   
}

bool IsEmptyQ (banka red) {
     if (AddOne(red.rear)==red.front) return true;
     return false;
}

void InitQ (banka &red) {
     red.front=0;
     red.rear=9999;
}
