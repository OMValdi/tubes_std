#include "list_child.h"

void createList(List_child &L){
    first(L) = NULL;
    last(L) = NULL;

}

address_child alokasi(infotype_child x){
    address_child P = new elmlist_child;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    /**parent(P) = NULL;**/
    return P;

}

void insertFirst(List_child &L, address_child P){
    if (first(L) == NULL){
        first(L) = P;
        prev(P) = first(L);


    } else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;

    }
}

void insertLast(List_child &L, address_child P){
    if (first(L) == NULL){
        insertFirst(L,P);
    } else{
        next(last(L))= P;
        prev(P) = last(L);
        last(L) = P;
    }


}
void deleteFirst(List_child &L, address_child &P){
        if(first(L) ==  NULL){
         insertFirst(L,P);
     } else{
        P = first(L);
        first(L)= next(P);
        next(P)  = NULL;
        prev(first(L)) = NULL;
     }
}
void deleteLast(List_child &L, address_child &P){
    if(first(L) == last(L)){
        deleteFirst(L,P);
    }else{
        P = last(L);
        next(prev(P)) = NULL;
        prev(P) = NULL;
    }
}
void deleteAfter(address_child Prec, address_child &P){

}

void dealokasi(address_child &P){

}
address_child findElm(List_child L, infotype_child x){
    address_child P = first(L);
    while (P != NULL){
        if(info(P)== x){
            return P;
        }
        P = next(P);
    }
    return NULL;
}
void printInfo(List_child L){
    address_child P = first(L);
    while (P != NULL){
        cout<<info(P)<<endl;
        P = next(P);
    }
}
