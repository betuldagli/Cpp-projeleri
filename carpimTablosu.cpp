#include <iostream>
using namespace std;
/*çarpým tablosu */

int main() {
	int i,j,n;
	
	cout<<"kaca kaclik carpim tablosu istediginizi giriniz:"<<endl;
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<i*j<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
