#include "relasiList.h"

void createList(list_relasi &L){
    first(L) = NULL;
}

address_relasi alokasi(infotype_relasi x)
{
    if (x.tgl_join!=""){
        address_relasi P;
        P = new elmlist_relasi;
        info(P).tgl_join = x.tgl_join;
        info(P).tgl_keluar = x.tgl_keluar;
        info(P).keuntungan = x.keuntungan;
        info(P).jumlah_pohon = x.jumlah_pohon;
        info(P).kerugian = x.kerugian;
        info(P).total = x.total;
        next(P) = NULL;
        return P;
    }
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
/**void tengah2(int width, char* s) {
 int l = strlen(s);
 int pos = (int)((width - l) / 2);
 for (int i = 0; i < pos; i++) { cout << " "; }
 cout << s;
}**/

void printInfo(list_relasi L) {
    address_relasi P;
    /**tengah2(24,"No. ");
    tengah2(20,"Tanggal Join");
    tengah2(25,"Tanggal Keluar");
    tengah2(20,"Keuntungan");
    tengah2(20,"Jumlah Pohon");
    tengah2(20,"Kerugian");
    tengah2(20,"Total");
    cout<<endl<<endl;**/
    if(first(L)!=NULL) {
        P = first(L);
            int i = 1;
        do{
        cout<<" ";
        cout<<" "<<i++;
        cout<<" "<<info(P).tgl_join;
        cout<<" "<<info(P).tgl_keluar;
        cout<<" "<<info(P).keuntungan;
        cout<<" "<<info(P).jumlah_pohon;
        cout<<" "<<info(P).kerugian;
        cout<<" "<<info(P).total<<endl;
        P = next(P);
    }while(P != NULL);
    } else {
        cout<<" ";
        cout<<" "<<"Kosong";
    }
}

void dealokasi(address_relasi &P){
    next(P) = NULL;
}
