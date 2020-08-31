#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct node{
        struct node *prev;
        int data;
        struct node *next;        
};

typedef struct node node;

node *pHead = NULL;

node *alokasiNodeBaru(){ 
  node *pNew = NULL; 
  pNew = (node *) malloc(sizeof(node)); 
  return(pNew); 
}


void tambahAwal(node *pNew){
     printf("masukkan bilangan: "); scanf("%d",&pNew->data);
     
     if(pHead == NULL){
              pNew->prev = pHead;
              pNew->next = pHead;
              pHead = pNew;
     }
     else{
              //cari node yang menunjuk ke pHead
              pNew->prev = pHead;
              pNew->next = pHead;
              pHead->prev= pNew;
              pHead = pNew;   
     }
}



void cetak(){
     node *pWalker = pHead; int i=1;
     while(pWalker!=NULL){
         printf("node ke-%d = %d\n",i,pWalker->data);
         i++;
         pWalker=pWalker->next;        
     }
     printf("NULL\n");
}


void tambahTengah(node *pNew){
     node *pWalker;
     pWalker=pHead;
     int nilai,sisip;
     printf("masukkan nilai yang ingin ditambahkan: "); scanf("%d",&pNew->data);
     cetak(); 
     printf("data disisipkan setelah nilai : "); scanf("%d",&sisip);
     while(pWalker!=NULL && pWalker->data!=sisip){
                         pWalker=pWalker->next; }
                       
     if(pWalker==NULL) {printf("\ndata tidak ditemukan"); getch();}
     else {
           pNew->next=pWalker->next;
           pWalker->next->prev=pNew;
           pWalker->next=pNew;
           pNew->prev=pWalker;
           }

}

void tambahAkhir(node *pNew){
     node *pEnd;
     pEnd=pHead;
     printf("masukkan nilai yang ingin ditambahkan: "); scanf("%d",&pNew->data);
     
     while(pEnd->next!=NULL){
                         pEnd=pEnd->next; }
     pEnd->next=pNew;
     pNew->prev=pEnd;
     pNew->next=NULL;        
}

void hapusAwal(){
     node *pHapus;
     pHapus=pHead;
     pHead=pHead->next;
     pHead->prev=NULL;
     free(pHapus);
} 

void hapusTengah(){
     node *pCari;int hapus;
     pCari=pHead;
     cetak();
     printf("masukkan bilangan yang ingin dihapus: "); scanf("%d",&hapus);
     while(pCari!=NULL && pCari->data!=hapus){
                               pCari=pCari->next;
                               }                      
    pCari->prev->next=pCari->next;
    pCari->next->prev=pCari->prev;
     free(pCari);
     
}

void hapusAkhir(){
     node *pEnd;
     pEnd=pHead;
     while(pEnd->next!=NULL){
                              pEnd=pEnd->next;
                              }
     pEnd->prev->next=NULL;
     free(pEnd);
}

     
     
int main(int argc, char *argv[])
{
  node *pNew; int pilih,bil;
  do{system("cls");
   printf("----------MENU-----------");
    printf("\n1.tambah awal");
    printf("\n2.tambah tengah");
    printf("\n3.tambah akhir");
    printf("\n4.hapus awal ");
    printf("\n5.hapus tengah");
    printf("\n6.hapus akhir");
    printf("\n7.cetak");
    printf("\n9.exit");
    printf("\npilihan : ");scanf("%d",&pilih);
    
    if(pilih==1){pNew=alokasiNodeBaru();
                 tambahAwal(pNew); 
                 }
    else if(pilih==2){pNew=alokasiNodeBaru();
                 tambahTengah(pNew);
                 }
    else if(pilih==3){pNew=alokasiNodeBaru();
                 tambahAkhir(pNew);
                 }
    else if(pilih==4){hapusAwal();}
    else if(pilih==5){hapusTengah();}
    else if(pilih==6){hapusAkhir();}
    else if(pilih==7){cetak();getch();}

               
                 
}while(pilih!=9);
  
  
  printf("\n");
  system("PAUSE");    
  return 0;
} 
