struct klijent{
       unsigned short ai,bi,ci,di;
       char ime [20],prezime[20];
       unsigned short dan,mjesec,godina;
       float tekuci,devizni;
       };

struct banka_0{
       klijent el;
       banka_0 *next;
       };

struct banka{
       banka_0 *front,*rear;
       };

banka red,red_c,red_e;

klijent FrontQ (banka red) {
      return ((red.front)->next)->el;;
}
void EnQueueQ (klijent x, banka &red) {
     banka_0 *novi=new banka_0;
     novi->el=x;
     novi->next=NULL; 
     (red.rear)->next=novi;
     red.rear=novi;
}
void DeQueueQ (banka &red) {
     banka_0 *brisi=red.front;
     red.front=(red.front)->next;
     delete brisi;
}
bool IsEmptyQ (banka red) {
     if (red.rear==red.front) return true;
     return false;    
}
void InitQ (banka &red) {
     banka_0 *novi=new banka_0;
     novi->next=NULL;
     red.rear=novi;
     red.front=novi;     
}
