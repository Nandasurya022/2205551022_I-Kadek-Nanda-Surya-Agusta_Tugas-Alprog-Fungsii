#include <stdio.h>
#include <stdlib.h>
#define PHI 3.14
//Fungsi Segitiga
float luas_segitiga(float alas, float tinggi){
	
	float luas;
	luas = alas * tinggi;
	return luas;
}
float keliling_segitiga(sisi1, sisi2, sisi3){
	
	float keliling;
	keliling = sisi1 + sisi2 + sisi3;
	return keliling;
}
//Fungsi Tabung
float luas_permukaan_tabung(float r, float t){
	
	float luas;
	luas = 2*PHI*r*(r+t);
	return luas;
}
float volume_tabung(float r, float t){
	
	float volume;
	volume = PHI*r*r*t;
	return volume;
}
//Fungsi Kerucut
float luas_permukaan_kerucut(float jari_jari, float tinggi, float selimut){
	
	float luas;
	luas = PHI*jari_jari*jari_jari+(PHI*jari_jari*selimut);
	return luas;
}
float volume_kerucut(float jari_jari, float tinggi){
	
	float volume;
	volume = 1*PHI*jari_jari*jari_jari*tinggi/3;
	return volume;
}
int main(){
	int pilihan;
	char menu;
	//Segitiga
	float alas_segitiga, tinggi_segitiga, sisi1, sisi2, sisi3, luas_Segitiga, keliling_Segitiga;
	//Tabung
	float jari_jari_tabung, tinggi_tabung, luas_Tabung, volume_Tabung;
	//Kerucut
	float jari_jari_kerucut, tinggi_kerucut, selimut_kerucut, luas_kerucut, volume_Kerucut;
	do{
		system("cls");
	printf("Program Menghitung Luas dan Keliling Bangun Datar dan Luas Permukaan dan Volume Bangun Ruang");
	printf("\n1. Segitiga\n2. Tabung\n3. Kerucut");
	printf("\nMasukan Pilihan Menu Anda:");
	scanf("%d", &pilihan);
	do{
	switch(pilihan){
		case 1:
			printf("\nPerhitungan Luas dan Keliling Segitiga");
			printf("\nMasukan alas_segitiga :", alas_segitiga);
			scanf("%f", &alas_segitiga);
			printf("\nMasukan tinggi_segitiga :", tinggi_segitiga);
			scanf("%f", &tinggi_segitiga);
			printf("Masukan sisi1 :", sisi1);
			scanf("%f", &sisi1);
		    printf("Masukan sisi2 :", sisi2);
			scanf("%f", &sisi2);
			printf("Masukan sisi3 :", sisi3);
			scanf("%f", &sisi3);
			luas_Segitiga=luas_segitiga(alas_segitiga, tinggi_segitiga);
			keliling_Segitiga=keliling_segitiga(sisi1, sisi2, sisi3);
			printf("luas segitiga adalah %.2f", luas_Segitiga);
			printf("\nkeliling segitiga adalah %.2f", keliling_Segitiga);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;
			
		case 2: 
			printf("\nPerhitungan Luas Permukaan dan Volume Tabung");
			printf("\nMasukan jari-jari tabung : ", jari_jari_tabung);
			scanf("%f", &jari_jari_tabung);
			printf("Masukan tinggi tabung : ", tinggi_tabung);
			scanf("%f", &tinggi_tabung);
			luas_Tabung=luas_permukaan_tabung(jari_jari_tabung, tinggi_tabung);
			volume_Tabung=volume_tabung(jari_jari_tabung, tinggi_tabung);
			printf("luas permukaan tabung adalah %.2f", luas_Tabung);
			printf("\nvolume tabung adalah %.2f", volume_Tabung);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;
	
		case 3: 
			printf("\nPerhitungan Luas Permukaan dan Volume Kerucut");
			printf("\nMasukan nilai jari-jari : ", jari_jari_kerucut);
			scanf("%f", &jari_jari_kerucut);
			printf("Masukan nilai tinggi kerucut : ", tinggi_kerucut);
			scanf("%f", &tinggi_kerucut);
			printf("Masukan nilai selimut kerucut : ", selimut_kerucut);
			scanf("%f", &selimut_kerucut);
			luas_kerucut = luas_permukaan_kerucut(jari_jari_kerucut, tinggi_kerucut, selimut_kerucut);
			volume_Kerucut = volume_kerucut(jari_jari_kerucut, tinggi_kerucut);
			printf("luas permukaan kerucut adalah %.2f", luas_kerucut, jari_jari_kerucut, tinggi_kerucut, selimut_kerucut);
			printf("\nvolume kerucut adalah %.2f", volume_kerucut, jari_jari_kerucut, tinggi_kerucut);
			printf("\nApakah anda ingin mengulang?(y/t)\n");
            printf("Pilihan saya : ");
            scanf(" %c", &menu);
			break;			
	}
	}while (menu == 't');
}while(menu == 'y');
return 0;
}
