#include <iostream>
using namespace std;
/* kombinasyon n!/r!.(n-r)!*/

int kombinasyon(int n,int r){
	int i,j,k,fakn=1,fakr=1,fakk=1,sonuc;
	for(i=1;i<=n;i++){
		fakn*=i;
	}
	for(j=1;j<=r;j++){
		fakr*=j;
	}
	k=n-r;
	for(i=1;i<=k;i++){
		fakk*=i;
	}
	sonuc=fakn/(fakr*fakk);
	
	return sonuc;
}

int main() {
	int n,r;
	
	cout<<"n degerini giriniz:";
	cin>>n;
	
	cout<<"r degerini giriniz:";
	cin>>r;
	
	kombinasyon(n,r);
	
	cout<<n<<"'in "<<r<<"'li kombinasyonu:"<<kombinasyon(n,r)<<endl;
	return 0;
}
