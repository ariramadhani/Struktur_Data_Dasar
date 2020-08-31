#include <stdio.h>
#include <conio.h>
main()
{
int i=1,n,nilai,total=0;
float rata;
 printf("\tAri Ramadhani");
 printf("\n\t2016230037\n\n");
printf("masukan data\t= ");
scanf("%d",&n);
while(i<=n)
{
printf("masukan nilai\t= ");
scanf("\n%d",&nilai);
i=i+1;
total=total+nilai;
}
printf("\n%d adalah nilai totalnya",total);
rata=total/n;
printf("\n rata rata\t= %f",rata=float(total/n));

getch();
return 0;
}