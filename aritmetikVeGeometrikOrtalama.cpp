#include <iostream>
#include <math.h>
using namespace std;
/* dizideki elemanlarýn aritmetik ve geometrik  ortalamasýný bulan kod */

int main(){
	int n,dizi[10],i;
	 cout<<"kac sayi gireceginizi girin:";
	 cin>>n;
	 float top=0,carp=1,arit,geo;
	for(i=0;i<n;i++){
		cout<<"sayi giriniz:";
		cin>>dizi[i];
		top+=dizi[i];
		carp*=dizi[i];
	}
	geo=sqrt(carp);
	arit=top/n;
	
	cout<<"aritmetik ortalama"<<(float)arit<<endl;
	cout<<"geometrik ortalama"<<(float)geo<<endl;
	
	
	return 0;
}
