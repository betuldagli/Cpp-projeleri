#include <iostream>
using namespace std;
/*kullan�c�dan say� alarak ters ��gen olu�turunuz.*/
int main(){
	int i,j,n,k;
	
	cout<<"n degerini giriniz:"<<endl;
	cin>>n;
	
	
	for(i=1;i<=n;i++){
		for(j=i;j>0;j--){
			cout<<" ";
		
		}
		for(k=0;k<=n-i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
