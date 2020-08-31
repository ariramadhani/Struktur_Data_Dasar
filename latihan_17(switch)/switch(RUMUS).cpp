#include<stdio.h>
#include<conio.h>
main() {
int l,p,lu,x;
float a,t,ls,jl;
char itg;
atas:
printf("\tARI RAMADHANI\n");
printf("\t2016230037\n");
printf("\t\n===MENU SWITCH===");
printf("\n1 PERSEGI PANJANG");
printf("\n2 SEGITIGA");
printf("\n3 LINGKARAN");
printf("\nPilih switch = ");
unsigned int bilangan;
scanf("%ud", &bilangan);
switch(bilangan) {
case 1: printf("\tSATU\n");
			printf("===Persegi panjang===\n");
 	printf(" panjang \t= ");scanf("%d", &p);
 	printf("\n lebar \t\t= ");scanf("%d", &l);
 	printf("\n luas \t\t= %d\n",p*l);
         printf(" \n\nIngin kemenu lagi? <Y/N> : ");
		scanf("%s",&itg);
		if(itg=='Y'||itg=='y')
		{
		clrscr();
		goto atas;
		}
		else{
      clrscr();
		printf("\n THANK YOU");
		}
break;
case 2:  printf("\tDUA\n");
			printf("=====Segitiga=====\n");
   printf(" alas \t\t= ");scanf("%f",&a);
 	printf("\n tinggi \t= ");scanf("%f",&t);
 	printf("\n luas \t\t= %.2f\n",(a*t)/2);
            printf(" \n\nIngin kemenu lagi? <Y/N> : ");
		scanf("%s",&itg);
		if(itg=='Y'||itg=='y')
		{
		clrscr();
		goto atas;
		}
		else{
      clrscr();
		printf("\n THANK YOU");
		}
break;
case 3: printf("\tTIGA\n");
   	printf("====Lingkaran====\n");
   printf(" jari-jari \t= ");scanf("%f",&jl);
 	printf("\n luas \t\t= %.2f\n",3.14*jl*jl);
         printf(" \n\nIngin kemenu lagi? <Y/N> : ");
		scanf("%s",&itg);
		if(itg=='Y'||itg=='y')
		{
		clrscr();
		goto atas;
		}
		else{
      clrscr();
		printf("\n THANK YOU");
		}
       break;
default: printf("lebih dari tiga\n");
}
getch ();
}
