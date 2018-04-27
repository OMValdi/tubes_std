#ifndef RELASILIST_H_INCLUDED
#define RELASILIST_H_INCLUDED

#include "relasiList.h"
#include "childList.h"
#include "parentList.h"
#include <iostream>
using namespace std;
#define next(P) P->next
#define info(P) P->info
#define first(L) L.first
#define child(P) P->child
#define parent(P) P->parent


struct infotype_relasi {
    string  tgl_join;
    string tgl_keluar;
    int keuntungan;
    int jumlah_pohon;
    int kerugian;
    int total;
};

typedef struct elmlist_relasi *address_relasi;
typedef struct elmlist_parent *address_parent;

struct elmlist_relasi{
    infotype_relasi info;
    address_relasi next;
    address_child child;
    address_parent parent;
};

struct list_relasi{
    address_relasi first;
};

void createList(list_relasi &L);
address_relasi alokasi(infotype_relasi x);
void insertFirst(list_relasi &L, address_relasi P);
void insertLast(list_relasi &L, address_relasi P);
void deleteFirst(list_relasi &L, address_relasi &P);
void deleteLast(list_relasi &L, address_relasi &P);
void deleteAfter(list_relasi &L, address_relasi Prec, address_relasi &P);

/**address_relasi alokasi( address_parent P, address_child C);**/
void dealokasi(address_relasi &P);
/**address_relasi findElm(list_relasi L, address_parent P, address_child C);**/
void tengah2(int width, char* s);
void printInfo(list_relasi L);

#endif // RELASILIST_H_INCLUDED
