#include <iostream>
using namespace std;
/* dizideki elemanlardan toplamýnýn en büyük ve en küçük ihtimali bulan kod */

int main(){
		int n,dizi[10],i,eb,ek,max=0,min=0,top=0;
	 cout<<"kac sayi gireceginizi girin:";
	 cin>>n;
	cout<<"sayi giriniz:";
	cin>>dizi[0];
	eb=dizi[0];
	ek=dizi[0];
	top=dizi[0];
	for(i=1;i<n;i++){
		cout<<"sayi giriniz:";
		cin>>dizi[i];
		top+=dizi[i];
	    if(eb<dizi[i]){
	    	eb=dizi[i];	
	   	}
	   	if(ek>dizi[i]){
	   			ek=dizi[i];
		   }
	}
    max=top-ek;
    min=top-eb;
	
	cout<<"max: "<<max<<endl;
	cout<<"min: "<<min<<endl;
	return 0;
}
