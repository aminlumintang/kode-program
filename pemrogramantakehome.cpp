#include <iostream>
using namespace std;

class Amikom													//deklarasi class dengan nama amikom
{
	public:														//inisialisasi proses untuk perintah dibawahnya
		int fakultas;											
		public:
			void ilmukomputer()									//deklarasi method dengan nama ilmu komputer
			{
				cout<<"\n\tIlmu Komputer:";
				cout<<"\n\t1.Inforamtika";
				cout<<"\n\t2.Sistem informasi";
				cout<<"\n\t3.teknik komputer";
				cout<<"\n\t4.teknologi informasi";
				cout<<"\n\n";
			}
			void ekonomi()										//deklarasi method dengan nama ekonomi
			{
			cout<<"\n\tekonomi:";
			cout<<"\n\t1.Ilmu komunikasi";
			cout<<"\n\t2.perencanaan wilayah";
			cout<<"\n\t3.arsitek";
			cout<<"\n\t4.ekonomi";	
			}
			
			
};

int main(){
	Amikom amikom;												//inisisakisasi class Amikom sebagai amikom
	
	cout<<"\n\n";
	cout<<"\n\n\t Fakultas Universitas Amikom yogyakarta";
	cout<<"\n\t1. Ilmu komputer";
	cout<<"\n\t2. Ekonomi";
	cout<<"\n\tinputkan pilihan anda  : ";
	cin>>amikom.fakultas;
	
	if(amikom.fakultas==1)										//dalam pemanggilan objek suatu kelas
	amikom.ilmukomputer();										//harus diawali oleh inisial kelas pemiliknya
	if(amikom.fakultas==2)										//agar jelas kita akan memanggil ojek
	amikom.ekonomi();											
}
