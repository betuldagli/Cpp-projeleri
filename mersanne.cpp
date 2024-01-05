#include <iostream>
using namespace std;
/*girilen sayiya kadar olan mersanne sayılarını gösteren kod mersanne sayıları=(2^n)-1 */

int mersanne(int n){
	int i,sonuc=1;
	
	for(i=1;i<=n;i++){
	sonuc*=2;	
	}
	return sonuc-1;
}

int main(){
	int i,n;
	
	cout<<"n degeri giriniz:";
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<mersanne(i)<<endl;
	}
	return 0;
}
