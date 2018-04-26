#ifndef LIST_RELASI_H_INCLUDED
#define LIST_RELASI_H_INCLUDED

#include "list_relasi.h"
#include <iostream>
using namespace std;
#define next(P) P->next
#define first(L) L.first
#define child(P) P->child
#define parent(P) P->parent


struct infotype_relasi {
    int  tgl_join;
    int durasi;
    int tgl_keluar;
    string status;

};

typedef struct elmlist_relasi *address_relasi;
struct elmlist_relasi{
    infotype_relasi info;
    address_relasi next;
    /**address_child child;
    adress_parent parent;**/

};

struct list_relasi{
    address_relasi first;
};

void createList(list_relasi &L);
void insertFirst(list_relasi &L, address_relasi P);
void insertLast(list_relasi &L, address_relasi P);
void deleteFirst(list_relasi &L, address_relasi &P);
void deleteLast(list_relasi &L, address_relasi &P);
void deleteAfter(list_relasi &L, address_relasi Prec, address_relasi &P);

/**address_relasi alokasi( address_parent P, address_child C);**/
void dealokasi(address_relasi &P);
/**address_relasi findElm(list_relasi L, address_parent P, address_child C);**/
void printInfo(list_relasi L);

#endif // LIST_RELASI_H_INCLUDED
