#include "list_relasi.h"

void createList(list_relasi &L){
    first(L) = NULL;
}
void insertFirst(list_relasi &L, address_relasi P){
    if (first(L) == NULL){
        first(L) = P;
        }else{
            next(P) = first(L);
            first(L) = P;

        }
}
void insertLast(list_relasi &L, address_relasi P){
    if(first(L) ==  NULL){
        insertFirst(L,P);
    }else{
        P = first(L);
        while(next(next(P)) != NULL){
            P = next(P);
        }
        next(P)= P;
    }

}

void deleteFirst(list_relasi &L, address_relasi &P){
    if (first(L) != NULL){
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}
void deleteLast(list_relasi &L, address_relasi &P){
    address_relasi Q;
    if( first(L) != NULL){
        Q = first(L);
        if(next(Q) == NULL){
            deleteFirst(L,P);
        }else{
            P = first(L);
        while(next(next(P)) != NULL){
            P = next(P);
        }
        next(P) = NULL;
        }
    }

}
void deleteAfter(list_relasi &L, address_relasi Prec, address_relasi &P){
    if ((first(L) != NULL) && (Prec != NULL)){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}
}


