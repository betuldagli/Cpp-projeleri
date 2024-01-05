#include <iostream>
#include <math.h>
using namespace std;
/* asal mersanne sayýlarýný veren kod*/

int mersanne(int n){
	int i,sonuc=1,dizi[50];
	
	for(i=1;i<=n;i++){
	sonuc*=2;	
	}
	return sonuc-1;
}

void asal(int n){
		int i,j,l,sayac=0;
		
	for(i=2;i<=n;i++){
		for(j=1;j<i;j++){
			if(i%j==0){
			sayac++;
			}	
		
		}if(sayac==1){
			cout<<i<<endl;
    } sayac=0;
	
}
}
int main() {
	int n,sayac=0;
	cout<<"kaca kadar olan ortaklari gormek istersiniz:";
	cin>>n;
	 
	 while((n+1)/2!=0) {
	 	n/=2;
	 	sayac++;
	 }
	 asal(mersanne(sayac));
	 


   return 0;
}
