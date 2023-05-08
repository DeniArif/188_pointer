#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void ShowNim(); //deklarasi method
};

void mahasiswa::ShowNim(){//implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };		//object mhs
	mhs.ShowNim();			//Member Acces Operator

	mahasiswa& ref = mhs;	//Pointer Reference refMhs
	ref.nim = 2;			//Member Operator
	mhs.ShowNim();

	mahasiswa* pMhs = &mhs; //Pointer Deference Pmhs
}