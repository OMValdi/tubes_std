#ifndef PARENTLIST_H_INCLUDED
#define PARENTLIST_H_INCLUDED
#include "parentList.h"
#include "relasiList.h"
#include <iostream>
using namespace std;



#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define child(P) P->child

typedef struct infotypeParent;
typedef struct elmlist_parent *address_parent;
typedef struct elmlist_relasi *address_relasi;

struct infotypeParent {
    string namaPohon;
    int biayaPohon;
    int profitPohon;
    int lossPohon;
};

struct elmlist_parent {
    infotypeParent info;
    address_parent next;
    address_parent prev;
    address_relasi relasi;

};

struct List_parent {
    address_parent first;
    address_parent last;
};

void createList(List_parent &L);
void dealokasi(address_parent& P);
void tengah2(int width, char* s);
address_parent alokasi(infotypeParent x);
void insertFirst(List_parent &L, address_parent P);
void deleteParent(List_parent &L, address_parent Prec, string nama);
void printInfo(List_parent L);
address_parent searchParent(List_parent L,string data);



#endif // PARENTLIST_H_INCLUDED
