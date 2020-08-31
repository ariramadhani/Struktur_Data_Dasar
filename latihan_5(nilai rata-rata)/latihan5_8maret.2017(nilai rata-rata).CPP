#include <stdio.h>
#include <conio.h>
main (){
	int khd, tgs, uts, uas, rata;
	printf("\tKETERANGAN NILAI \n");
	printf("Nilai kehadiran = ");
	scanf("%d", &khd);
	printf("Nilia tugas \t= ");
	scanf ("%d", &tgs);
	printf ("Nilia uts \t= ");
	scanf ("%d", &uts);
	printf ("Nilia uas \t= ");
	scanf ("%d", &uas);
	printf ("Rata-rata\t= %d\n",rata=(khd+tgs+uts+uas)/4,rata);
if(rata>=79&&rata<=101)
		printf("Nilai\t\t= A");
else if(rata>=67&&rata<=80)
		printf("Nilai\t\t= B");
else if(rata>=59&&rata<=68)
		printf("Nilai\t\t= C");
else if(rata>44&&rata<=60)
		printf("Nilai\t\t= D");
else
	printf("Nilai\t\t= E");


		getch();
}                                                                                                         	