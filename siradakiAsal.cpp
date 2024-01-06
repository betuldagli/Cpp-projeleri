#include <iostream>
using namespace std;
/*verilen sıradaki asalı veren kod*/
int sayac=0;	
 
  int asal(int n){
	int i,z=0,dizi[50];
	for(i=2;i<100;i++){
		for(int j=1;j<i;j++){
			if(i%j==0){
			sayac++;
	    }
	} if(sayac==1){
	    	dizi[z]=i;
	    	z++;
		}
		sayac=0;
}
	
	return dizi[n-1];
}

int main(){
	int n;
	
	cout<<"kacinci asal gormek istediginizi girin:";
	cin>>n;
	
	cout<<n<<". asal sayi: "<<asal(n)<<endl;
	
	return 0;
}

