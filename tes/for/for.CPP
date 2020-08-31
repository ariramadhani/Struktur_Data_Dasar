#include <stdio.h>
#include <conio.h>
void main(){
int a,r;
printf("Ari Ramadhani (FOR)");
printf("\nMasukan angka: ");
scanf("%d",&a);
{
for(r=0;r<=a;r++)
printf("\n%d + %d = %d",r,a--,r+a);
}
getch();
}
