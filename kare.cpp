#include <iostream>
using namespace std;
/*kullanicidan sayi kadar satir sutuna sahip dortgen.*/
int main(){
	int i,j,n;
	
	cout<<"sayi giriniz:";
	cin>>n;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
