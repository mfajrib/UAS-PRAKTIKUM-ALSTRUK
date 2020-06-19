// PROGRAM MENGHITUNG VOLUME BANGUN RUANG BOLA //
// MUHAMMAD FAJRI BUDIANSYAH //
// 197006025 //
// Kelompok 5 //

#include <stdio.h>
main()
{
	float jari;
	float phi=3.14;
	float hasil;
	
	printf("Nama     : Muhammad Fajri Budiansyah \n");
	printf("NPM      : 197006025 \n");
	printf("Kelompok : 5 \n");
	printf("Program Menghitung Volume bangun ruang Bola \n \n");
	printf("Masukan Jari-Jari lingkaran (cm) : ");
	scanf("%f",&jari);
	hasil=(phi*jari*jari);
	printf("Jadi luas lingkaran tersebut adalah : %.2f",hasil);
	puts(" ");
	return 0;
}
