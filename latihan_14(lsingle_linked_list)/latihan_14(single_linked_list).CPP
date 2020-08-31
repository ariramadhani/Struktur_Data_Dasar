#include<stdio.h>
#include<stdlib.h>

void Tambahkan(int angka);
void tambah_data( int angka );
void tambah_data_setelah(int angka, int loc);
void sisip(int angka);
int hapus(int angka);
void  tampilkan(struct node *r);
int hitung();

struct node
{
    int data;
    struct node *next;
}*kepala;

void Tambahkan(int angka)
{
    struct node *sementara,*kanan;
    sementara= (struct node *)malloc(sizeof(struct node));
    sementara->data=angka;
    kanan=(struct node *)kepala;
    while(kanan->next != NULL)
    kanan=kanan->next;
    kanan->next =sementara;
    kanan=sementara;
    kanan->next=NULL;
}
void tambah_data( int angka )
{
    struct node *sementara;
    sementara=(struct node *)malloc(sizeof(struct node));
    sementara->data=angka;
    if (kepala== NULL)
    {
    kepala=sementara;
    kepala->next=NULL;
    }
    else
    {
    sementara->next=kepala;
    kepala=sementara;
    }
}
void tambah_data_setelah(int angka, int loc)
{
    int i;
    struct node *sementara,*kiri,*kanan;
    kanan=kepala;
    for(i=1;i<loc;i++)
    {
    kiri=kanan;
    kanan=kanan->next;
    }
    sementara=(struct node *)malloc(sizeof(struct node));
    sementara->data=angka;
    kiri->next=sementara;
    kiri=sementara;
    kiri->next=kanan;
    return;
}
void sisip(int angka)
{
    int c=0;
    struct node *sementara;
    sementara=kepala;
    if(sementara==NULL)
    {
    tambah_data(angka);
    }
    else
    {
    while(sementara!=NULL)
    {
        if(sementara->data<angka)
        c++;
        sementara=sementara->next;
    }
    if(c==0)
        tambah_data(angka);
    else if(c<hitung())
        tambah_data_setelah(angka,++c);
    else
        Tambahkan(angka);
    }
}
int hapus(int angka)
{
    struct node *sementara, *sebelumnya;
    sementara=kepala;
    while(sementara!=NULL)
    {
    if(sementara->data==angka)
    {
        if(sementara==kepala)
        {
        kepala=sementara->next;
        free(sementara);
        return 1;
        }
        else
        {
        sebelumnya->next=sementara->next;
        free(sementara);
        return 1;
        }
    }
    else
    {
        sebelumnya=sementara;
        sementara= sementara->next;
    }
    }
    return 0;
}
void  tampilkan(struct node *r)
{
    r=kepala;
    if(r==NULL)
    {
    return;
    }
    while(r!=NULL)
    {
    printf("%d ",r->data);
    r=r->next;
    }
    printf("\n");
}
int hitung()
{
    struct node *n;
    int c=0;
    n=kepala;
    while(n!=NULL)
    {
    n=n->next;
    c++;
    }
    return c;
}
int  main()
{
    int i,angka;
    struct node *n;
    kepala=NULL;
    while(1)
    {
    printf("\nOperasi Linked-List \n");
    printf("===============\n");
    printf("1.Sisip\n");
    printf("2.Tampilkan\n");
    printf("3.Ukuran\n");
    printf("4.Hapus\n");
    printf("5.Keluar\n");
    printf("Masukkan Pilihan anda : ");
    if(scanf("%d",&i)<=0){
        printf("Input hanya  Integer\n");
        exit(0);
    } else {
        switch(i)
        {
        case 1:      printf("Masukkan angka untuk disisipkan : ");
                 scanf("%d",&angka);
                 sisip(angka);
                 break;
        case 2:     if(kepala==NULL)
                {
                printf("List Kosong \n");
                }
                else
                {
                printf("Data dalam list adalah  : ");
                }
                tampilkan(n);
                break;
        case 3:     printf("Ukuran List adalah %d\n",hitung());
                break;
        case 4:     if(kepala==NULL)
                printf("List Kosong\n");
                else{
                printf("Masukkan angka yg hapus : ");
                scanf("%d",&angka);
                if(hapus(angka))
                    printf("%d berhasil dihapus  \n",angka);
                else
                    printf("%d tidak ada dalam list\n",angka);
                }
                break;
        case 5:     return 0;
        default:    printf("Pilihan anda salah\n");
        }
    }
    }
    return 0;
}


