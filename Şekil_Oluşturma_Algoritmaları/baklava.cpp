#include <iostream>
using namespace std;
/*kullanıcıdan sayı kadar satır sütuna sahip baklava.*/
int main(){
	int i,j,n,k,y,b;
	
	cout<<"sayi giriniz:";
	cin>>n;

	
	for(i=0;i<n;i++){
		if(i<=n/2){
			y=i*2+1;
		}
		else{
			y=2*(n-i-1)+1;
		}
		b=(n-y)/2;
		for(j=0;j<b;j++){
			cout<<" ";
	    }
		for(k=0;k<y;k++){
			cout<<"*";
		}
	
		cout<<endl;
	}
	return 0;
	}
	
