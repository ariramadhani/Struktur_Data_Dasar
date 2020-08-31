#include <stdio.h>
#include <iostream.h>
#include <conio.h>
typedef struct buku
{     char kd_buku[10];
      char nama_buku[21];
      char pengarang[20];
      int tahun_terbit,harga;
}buku;
main()
{buku saya[2];
int i,x;
printf("\tAri Ramadhani");
printf("\n\t2016230037\n\n");
for(i=0;i<=1;i++)
{printf("Kode Buku\tke-%d\t: ",i+1);
scanf("%s",& saya[i].kd_buku);
printf("Nama Buku\tke-%d\t: ",i+1);
cin.getline(saya[i].nama_buku,30);
printf("Tahun Terbit\tke-%d\t: ",i+1);
scanf("%d",& saya[i].tahun_terbit);
printf("Pengarang\tke-%d\t: ",i+1);
scanf("%s",& saya[i].pengarang);
printf("Harga\t\tke-%d\t: ",i+1);
scanf("%d",& saya[i].harga);
printf("kode Buku %s, Nama Buku %s, Tahun Terbit %d, Pengarang %s, Harga %d \n\n",
saya[i].kd_buku,saya[i].nama_buku,saya[i].tahun_terbit,saya[i].pengarang,saya[i].harga);}
//clrscr();
   printf("-------------------------------------------------------------------------------------------------\n");
   printf("|   Kode Buku   |       Nama Buku       |  Tahun Terbit |       Pengarang       |     Harga     |\n");
   printf("-------------------------------------------------------------------------------------------------\n");
for(x=0;x<=1;x++)
{  printf("|\t%s\t|\t%s\t|\t%d\t|\t%s\t|\t%d\t|\n",saya[x].
  kd_buku,saya[x].nama_buku,saya[x].tahun_terbit,saya[x].pengarang,saya[x].harga);
  printf("-------------------------------------------------------------------------------------------------\n");
}
getch();
}


