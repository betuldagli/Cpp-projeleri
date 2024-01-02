#include <iostream>
using namespace std;
/* iki diziyi karþýlaþtýrýp bir dizinin diðerini içerip içermediðini bulan kod */

int main() {
	int i,j,n,k,sayac=0,ek;
	
	cout<<"ilk dizinin eleman sayisini giriniz:";
	cin>>n;
	int dizi[n];
	cout<<"ikinci dizinin eleman sayisini giriniz:";
	cin>>k;
	int dizi1[k];
	
	if(n>k){
	 ek=k;
	}
	else{
		ek=n;
	}
	cout<<"\nilk dizinin elemanlarini giriniz:\n";
	for(i=0;i<n;i++){
		cout<<(i+1)<<". sayiyi giriniz:";
		cin>>dizi[i];
     }
   	cout<<"\nikinci dizinin elemanlarini giriniz:\n";
     for(i=0;i<k;i++){
		cout<<(i+1)<<". sayiyi giriniz:";
		cin>>dizi1[i];
     }
     
     for(i=0;i<n;i++){
     	for(j=0;j<k;j++){
     		if(dizi[i]==dizi1[j]){
     			sayac++;
			 }
		 }
	 }
	 if(sayac==ek){
	 	cout<<"bir dizi digerini icerir."<<endl;
	 }
	 else{
	 	cout<<"bir dizi digerini icermez."<<endl;
	 }
	return 0;
}
