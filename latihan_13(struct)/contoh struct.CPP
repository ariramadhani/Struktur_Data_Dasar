#include <stdio.h>
#include <iostream.h>
#include <conio.h>
typedef struct orang
{
char nama[30];
short umur;
}orang;
main()
{
orang saya[5];
int i,x;
for(i=0;i<=4;i++)
{
printf("nama ke-%d : ",i+1);
cin.getline(saya[i].nama,30);
printf("umur ke-%d : ",i+1);
scanf("%d",& saya[i].umur);
printf("%s berumur %d \n\n",saya[i].nama,saya[i].umur);}
for(x=0;x<=4;x++)
{
printf("nama %s berumur %d",saya[x].nama,saya[x].umur);
}
getch();
}

