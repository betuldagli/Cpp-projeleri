#include <iostream>
using namespace std;
/*kullan�c�dan al�nan harf kadar sat�r s�tuna sahip harf piramidi*/
int main(){
	int i,j;
	char n;
	cout<<"harfi giriniz(Buyuk harf):";
	cin>>n;
	
	for(i=n-65;i<=26;i++){
		for(j=n-65;j<i;j++){
			cout<<(char)(j+65);
		}
		for(j=i-2;j>=n-65;j--){
			cout<<(char)(j+65);
		}
		cout<<endl;
	}
	return 0;
}
