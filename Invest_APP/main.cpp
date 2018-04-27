#include <iostream>
#include "parentList.h"

using namespace std;

int main()
{
    List_parent LP;
    list_relasi LR;


    createList(LP);
    createList(LR);


    infotype_relasi Y;
    infotypeParent X;
    infotype_child Z;
    address_parent P;
    address_relasi R;

    string cari;
    X.namaPohon = "Mangga";
    Y.total = 200000000;

    insertFirst(LP,P = alokasi(X));
    insertFirst(LR,R = alokasi(Y));
     cari = "iii";
    printInfo(LR);
    printInfo(LP);
    dealokasi(P);
}
