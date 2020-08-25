#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int i=0;
	int gir=0;
	cout<<"5 sayi giriniz"<<endl;
	
	int toplam=0;
for(; ; ){
	cin>>gir;
	if(gir==-1){
	break;
	}
	
	
	toplam+=gir;
	i++;
	
				}            
float j=float(toplam/i);
cout<<"sonuc"<<j<<endl;
cout<<"toplam:"<<toplam<<endl;
cout<<"sayac:"<<i<<endl;


   getch();
   return 0;
}
