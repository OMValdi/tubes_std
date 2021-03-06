#ifndef CHILDLIST_H_INCLUDED
#define CHILDLIST_H_INCLUDED
#include <iostream>
using namespace std;

#define next(P) P ->next
#define prev(P) P ->prev
#define first(L) L.first
#define last(L) L.last
#define info(P) P ->info
#define parent(P) P ->parent


struct infotype_child{
    string nama_orang;
    int budget;
    int keuntungan;

};
typedef struct elmlist_child *address_child;
struct elmlist_child{
    infotype_child info;
    address_child next;
    address_child prev;


 };
struct List_child{
    address_child first;
    address_child last;
};

void createList(List_child &L);
void insertFirst(List_child &L, address_child P);
void insertLast(List_child &L, address_child P);
void insertAfter(address_child Prec, address_child P);
void deleteFirst(List_child &L, address_child &P);
void deleteLast(List_child &L, address_child &P);
void deleteAfter(List_child &L, address_child Prec, address_child &P);

address_child alokasi(infotype_child x);
void dealokasi(address_child &P);
address_child findElm(List_child L, infotype_child x);
void printInfo(List_child L);


#endif // CHILDLIST_H_INCLUDED
