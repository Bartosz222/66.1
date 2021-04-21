#include <iostream>
#include <fstream>
#include<string>
#include<vector>
using namespace std;
public class Trojki {
public:
	ifstream wejscie;
	const int SIZE = 1000;
	
	string wynik;
	vector <string> liczby;
	Trojki(string path) {
		wejscie.open(path);
	}
	~Trojki() {
		wejscie.close();
	}
	void wczytaj() {
		int a, b, c;
		for (int i = 0; i < SIZE; i++) {
			wejscie>> a >> b >> c;
			if (suma(a) + suma(b) == c) this->sumowanie(a,b,c);
		}
	}
	int suma(int n) {
		int sum = 0;
		while(n > 0) {
			sum += n % 10;
			n /= 10;
		}
		return sum;
	}
	void sumowanie(int a,int b,int c) {
		string x,y,z;
		x = to_string(a);
		y = to_string(b);
		z = to_string(c);
		wynik =x + ", " + y+ ", " + z;
		liczby.push_back(wynik);
	}
	string wypisz() {
		string zapis;
		int max = liczby.size();
		for (int i = 0; i < max; i++) {
			zapis += liczby[i] + "/n";
		}
		return zapis;
	}
};