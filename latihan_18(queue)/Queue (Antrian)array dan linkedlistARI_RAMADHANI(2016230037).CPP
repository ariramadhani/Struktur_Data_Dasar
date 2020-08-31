#include<stdio.h>
#include<conio.h>
void main()
{
int cek=0, data[100], x, hapus;
float ramadhani, ari=0, puasa, saur;
char pil;
do {
clrscr();
printf("\tAri Ramadhani");
 printf("\n\t2016230037\n\n");

printf("1. Tambah Antrian (Enqueue)\n");
printf("2. Hapus Antrian (Dequeue)\n");
printf("3. Lihat Antrian\n");
printf("4. Banyak Data\n");
printf("5. Jumlah Data\n");
printf("6. Rerata\n");
printf("7. Keluar\n");
printf("Silahkan masukkan pilihan anda... ");
pil=getche();
if(pil!='1' &&pil !='2' &&pil !='3' &&pil !='4' &&pil !='5' &&pil !='6' &&pil!='7' )
printf("\n\nAnda salah mengetikkan inputan...\n");
else
{
if(pil=='1') //enqueu
{
if(cek==10)
printf("\nAntrian Penuh\n\n");
else
{

printf("\nMasukkan nilai--> ");
scanf("%d",&x);
data[cek]=x;
cek++;
ari=ari+x;
}
}
else
{
if(pil=='2') //dequeue
{
if(cek==0)
printf("\nAntrian kosong\n\n");
else
{
hapus=data[0];
for(int v=0;v<cek;v++)
data[v]=data[v+1];
data[cek-1]=NULL;
cek--;
printf("\nData dgn nilai=%i terhapus.",hapus);
puasa=puasa+hapus;
}
getch();
}
else
{
if(pil=='3') //CEK DATA
{
if(cek==0)
printf("\nAntrianKosong.\n\n");
else
{
printf("\n");
for(int z=0;z<cek;z++)
{
printf(" | ");
printf("%d",data[z]);
printf(" | ");
}
}
getch();
}

else
{
if(pil=='4') //Banayak data
{
    if(cek==0)
    printf("\nAntrianKosong..\n\n");
else
{
printf("\n\nBanyak data yang masuk :  %d",cek);
}
getch();
}

else
{
if(pil=='5') //Jumlah Data
{
    if(cek==0)
    printf("\nAntrianKosong.\n\n");
else
{
printf("\n\nJumlah Data :  %.0f",saur=ari-puasa);
}
getch();
}

else
{
if(pil=='6') //Rerata
{
    if(cek==0)
    printf("\nAntrianKosong.\n\n");
else
{
printf("\n\nRerata :  %.2f",ramadhani=float(saur/cek));
}
}
getch();
}
}


}
}
}
}
}while(pil!='7');//Keluar
}
