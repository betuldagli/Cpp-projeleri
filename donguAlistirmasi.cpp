#include <iostream>
using namespace std;
/*1-100 arasi tek sayilar
 * 50-70 arasi cift sayilar
 * 100-70 arasi 7ye bolunebilen sayilar
 * 1-100 arasi 3 ve 7ye bolunebilen sayilar*/
int main() {
     //for dongusu
     cout<<"1-100 arasi tek sayilar"<< endl;
	for(int i=1;i<100;i++){
    	  if(i%2==1){
    		  cout<<i<<endl;
    	  }
      }
	cout<< endl;
		cout<<"50-70 arasi cift sayilar"<< endl;
      for(int j=50;j<70;j++){
    	  if(j%2==0){
    		  cout<<j<<endl;
    	  }
      }
      	cout<< endl;
      	 cout<<"100-70 arasi 7ye bolunebilen sayilar"<< endl;
       for(int k=100;k>70;k--){
    	   if(k%7==0){
    		   cout<<k<<endl;
    	   }
       }
       cout<< endl;
       	cout<<" 1-100 arasi 3 ve 7ye bolunebilen sayilar"<< endl;
       for(int l=1;l<100;l++){
    	   if(l%3==0 && l%7==0){
    		   cout<<l<<endl;
    	   }
       }

       //while dongusu

       int a=1;
       while(a<100){
    	   if(a%2==1){
    		   cout<<a<<endl;
    		   a++;
    	   }
       }
       cout<< endl;
       int b=50;
       while(a<70){
          	   if(a%2==0){
          		   cout<<b<<endl;
          		   b++;
          	   }
             }
       cout<< endl;
       int c=100;
       while(c>70){
          	   if(c%7==0){
          		   cout<<c<<endl;
          		   c--;
          	   }
             }
       cout<< endl;
       int d=1;
       while(d<100){
          	   if(d%3==0 && d%7==0){
          		   cout<<d<<endl;
          		   d++;
          	   }
             }
	return 0;
}
