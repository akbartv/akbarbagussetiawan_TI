#include <iostream>
using namespace std;
int main()
{
	int pilihan;
	char ulang;
	do
	{
		cout << endl;
		cout << "  nama bulan" << endl;
		cout << " ================" << endl;
		cout << " 1. Januari" << endl;
		cout << " 2. Februari" << endl;
		cout << " 3. Maret" << endl;
		cout << " 4. April" << endl;
		cout << " 5. Mei" << endl;
		cout << " 6. Juni" << endl;
		cout << " 7. Juli" << endl;
		cout << " 8. Agustus" << endl;
		cout << " 9. September" << endl;
		cout << " 10. Oktober" << endl;
		cout << " 11. November" << endl;
		cout << " 12. Desember" << endl;
		cout << endl;
		
		cout <<" pilihan anda = ";
		cin>>pilihan;
		
		switch(pilihan){
			case 1:
				cout << " januari" << endl;
				break;
			case 2:
				cout << " Februari" << endl;
				break;
			case 3:
				cout << " Maret" << endl;
				break;
			case 4:
				cout << " April" << endl;
				break;
			case 5:
				cout << " Mei" << endl;
				break;
			case 6:
				cout << " Juni" << endl;
				break;
			case 7:
				cout << " Juli" << endl;
				break;
			case 8:
				cout << " Agustus" << endl;
				break;
			case 9:
				cout << " September" << endl;
				break;
			case 10:
				cout << " Oktober" << endl;
				break;
			case 11:
				cout << " November" << endl;
				break;
			case 12:
				cout << " Desember" << endl;
				break;
			default:
				cout << "menu tidak tersedia" <<endl;
		}
		cout << endl;
		
		cout << " ingin memilih menu lain (y/t)?= ";
		cin >> ulang;
		cout << endl;
	}
	while (ulang!= 't');
	
	cout << endl;
	return 0;
}
