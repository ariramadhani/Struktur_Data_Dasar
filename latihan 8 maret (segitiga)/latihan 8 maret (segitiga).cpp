#include <stdio.h>
#include <conio.h>
main (){
	int A, B, C, D, E;
	printf("Luas dan Keliling Segitiga \n");
	printf("Tinggi:");
	scanf("%d", &A);
	printf("Alas:");
	scanf ("%d", &B);
	printf ("Sisi kiri:");
	scanf ("%d", &C);
	printf ("Sisi kanan:");
	scanf ("%d", &D);
	printf ("Luas: %d\n", (A * B) / 2);
	printf ("Keliling: %d\n", B + C + D);
	if (B==C && B==D)
		printf("Ini merupakan: Segitiga sama sisi");
	else if (B==C || B==D)  
		printf("Ini merupakan: Segitiga sama kaki");
	else 
	printf("Ini merupakan: Segitiga sembarang");	
	getch();
}