#include<iostream>
using namespace std;
int main()
{
    int pil,jum;
    
    cout<<"DAFTAR MOTOR HONDA"<<endl;
    cout<<"1. VARIO"<<endl;
    cout<<"2. BEAT"<<endl;
    cout<<"3. SUPRA"<<endl;
    cout<<"4. CBR"<<endl;
    
    
    cout<<"Masukkan Pilihan = ";
    cin>>pil;
    
    switch(pil) {
    	
    	case 1 :
    		cout<<"Harga motor 18.000.000/Motor"<<endl;
    		cout<<"masukkan jumlah pemesanan : ";
    		cin>>jum;
    		cout<<endl;
    		cout<<"Total bayar"<<jum*18000000<<endl;
    	break;
    	case 2 :
    		cout<<"Harga motor 16.000.000/Motor"<<endl;
    		cout<<"masukkan jumlah pemesanan : ";
    		cin>>jum;
    		cout<<endl;
    		cout<<"Total bayar"<<jum*16000000<<endl;
    	break;
		case 3 :
		    cout<<"Harga motor 18.000.000/Motor"<<endl;
    		cout<<"masukkan jumlah pemesanan : ";
    		cin>>jum;
    		cout<<endl;
    		cout<<"Total bayar"<<jum*18000000<<endl;
    	break;
    	case 4 :
    		cout<<"Harga motor 22.000.000/Motor"<<endl;
    		cout<<"masukkan jumlah pemesanan : ";
    		cin>>jum;
    		cout<<endl;
    		cout<<"Total bayar"<<jum*22000000<<endl;
    	break;
    	default : 
		cout<<"Pilihan anda salah";
    		
	}
	 system("pause");
   return 0;
}
