#include <iostream>
using namespace std;
/*ters diagonali 1 diðer elemanlarý 0 olan matris kodu.*/
int main(){
	int i,j,n;
	
	cout<<"n degerini giriniz:"<<endl;
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(j=0;j<n;j++){
			if(i+j==n){
				cout<<"1 ";
			}
			else{
				cout<<"0 ";
			}
					
		}
		cout<<endl;
	}
	return 0;
}
