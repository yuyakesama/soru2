#include <iostream>

int main()
{
	int  gecici,sayac=0
;
	int sayilar[10] = { 13,214,56,627,123,10,190,20,32,14 };
	int bk[10];
	for (int i = 0;i < 10;i++) {
		gecici = sayilar[i];
		int j = i - 1;
		while (j > -1 && sayilar[j] > gecici) {
			sayilar[j + 1] = sayilar[j];
			j--;
			sayilar[j + 1] = gecici;
		}
	}
	for (int t = 9;t >= 0;t--) {
		bk[sayac] = sayilar[t];
		sayac++;
	}
	for (int i = 0;i < 5;i++) {
		printf("%d ", bk[i]);
		printf("%d ", sayilar[i]);
	}    
    return 0;

}