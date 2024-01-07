#include <iostream>
using namespace std;
/*Hazir string fonksiyonlari*/

int main() {
	string str="betul dagli";
	cout<<str<<endl;
	
	cout<<str.empty()<<endl;// string boþ mu
	
	cout<<str.at(2)<<endl;//indisteki harf
	
	cout<<str.length()<<endl;//uzunluk
	
	//str.clear();//içini temizleme
	//cout<<str<<endl;
	
	cout<<str.find("l",5)<<endl;//stringin içinde arama verilen sayý hangi indisten sonra arayacagi
	
	cout<<str.find_last_of("e")<<endl;//sondan arama
	
    str.insert(5,"sss",3);//dizinin içine ekleme
	cout<<str<<endl;
	
	str.erase(5,3);//dizinin içinden silme
	cout<<str<<endl;
	
	string str1="merhaba";
	string str2;
	
	str2=str1.substr(3,4);//bir stringi diðerine aktarma
	cout<<str2<<endl;
	return 0;
}
