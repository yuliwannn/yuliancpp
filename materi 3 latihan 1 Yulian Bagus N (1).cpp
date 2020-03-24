#include <iostream>

using namespace std;
int main()
{
	int a;
	
	cout<<"masukan harga barang = ";
	cin>>a;
	
	if(a>0 , a<=500.000){
        if(a>=100.000){
        	
        	cout<<"============================"<<endl;
            cout<<"anda mendapatkan diskon 10%"<<endl;
        }
        else if(a<=80.000){
        	
			cout<<"============================"<<endl;
        	cout<<"anda mendapatkan diskon 5%"<<endl;
        }
        
}
else{
	cout<<"inputan anda salah";
	
	
}


system ("pause");
return 0;
    
        
}
