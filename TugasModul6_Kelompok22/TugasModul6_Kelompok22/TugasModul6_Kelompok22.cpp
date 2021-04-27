#include <iostream>
using namespace std;

class identitas {
private:
	string nama, nim, jurusan;
	float luas;
	

public:
	//setter
	//nama
	void setnama() {
		cout << "masukkan nama anda : ";
		cin >> nama;
	}
	//nim
	void setnim() {
		cout << "masukkan nim anda : ";
		cin >> nim;
	}
	//jurusan
	void setjur() {
		cout << "masukkan jurusan anda : ";
		cin >> jurusan;
	}
	//luas lingkaran
	void setluas(int r, float phi) {
		luas = r*r*phi;
		
	}

	//getter
	string getnama() {
		return nama;
	}
	string getnim() {
		return nim;
	}
	string getjur() {
		return jurusan;
	}
	float getluas() {
		cout << "luas lingkaran dengan jari jari 31 cm : "<<luas<<" cm";
		return luas ;
	}
	

};

int main() {
	identitas data;
	data.setnama();
	data.setnim();
	data.setjur();
	data.setluas(31, 3.14);
	data.getluas();
	
}
