#include <iostream>
using namespace std;
/*kullanýcýdan sayý kadar satýr sütuna sahip dik üçgen.*/
int main(){
	int i,j,n;
	
	cout<<"satir-sutun degerini giriniz:";
	cin>>n;
	
	for(i=n;i>0;i--){
		for(j=i;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
