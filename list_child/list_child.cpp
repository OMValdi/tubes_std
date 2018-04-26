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
        last(L) = P;
        next(P) = P;
        prev(P) = P;


    } else{
        next(last(L)) = P;
        prev(P) = last(L);
        next(P) = first(L);
        prev(first(L)) = P;
        last(L) = P;

    }
}

void insertLast(List_child &L, address_child P){
    if (first(L) == NULL){
        insertFirst(L,P);
    } else{
        next(last(L))= P;
        prev(P) = last(L);
        next(P) = first(L);
        prev(first(L)) = P;
        last(L) = P;
    }


}
void deleteFirst(List_child &L, address_child &P){
        if(first(L) !=  NULL){
         P =first(L);
         if(P != last(L)){
            next(P) = NULL;
            prev(P) = NULL;
            first(L) = NULL;
            last(L) = NULL;
            }else{
            first(L) = prev(P);
            next(last(L)) = first(L);
            prev(first(L)) = last(L);
            next(P) = NULL;
            prev(P) = NULL;

           }
     }
}
void deleteLast(List_child &L, address_child &P){
        if (first(L) != NULL){
            P = last(L);
            if(P == last(L)){
                next(P) = NULL;
                prev(P) = NULL;
                first(L) = NULL;
                last(L) = NULL;
            }else{
                last(L) = prev(P);
                next(last(L)) = first(L);
                prev(first(L)) = last(L);
                next(P)= NULL;
                prev(P) = NULL;

            }
        }
}
void deleteAfter(List_child &L,address_child Prec, address_child &P){
    if((first(L) != NULL) && (Prec != NULL)){
       if(Prec != last(L)){
            if(next(Prec)== last(L)){
                deleteLast(L, P);
            }else{
                P = next(Prec);
                next(Prec) = next(P);
                prev(next(P))=  Prec;
                next(P) = NULL;
                prev(P) = NULL;
       }
       }else{
        deleteFirst(L,P);
       }

       }

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
