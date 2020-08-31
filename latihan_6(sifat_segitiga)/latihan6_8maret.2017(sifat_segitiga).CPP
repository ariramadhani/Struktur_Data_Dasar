#include <stdio.h>
#include <conio.h>
#include <math.h>
main (){
   float a,t,s,smki;
   printf("\tAri Ramadhani");
	printf("\n\t2016230037\n\n");
	printf("Sifat Segitiga \n");
	printf("Alas\t\t  = ");
	scanf ("%f", &a);
	printf("Sisi Miring Kiri  = ");
  	scanf("%f", &smki);
	printf ("Sisi Miring Kanan = ");
	scanf ("%f", &s);
   printf("Tinggi\t\t  = %.2f",t=sqrt(s*s-a*a),&t);
	printf ("\nLuas   \t\t  = %.2f\n", (a * t) / 2);
	printf ("Keliling\t  = %.2f\n", a + s + smki);
	if (a==smki && smki==s)
		printf("Ini Merupakan \t  = Segitiga sama sisi");
	else if (smki==s)
		printf("Ini Merupakan \t  = Segitiga sama kaki");
	else
    	printf("Ini Merupakan \t  = Segitiga sembarang");
	getch();
}

