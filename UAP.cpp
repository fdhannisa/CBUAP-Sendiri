#include <iostream>
using namespace std;

void garis(){for (int i = 0; i <= 30; i++){
				 cout<< "=";}}
				 
void kosong(){for (int i = 0; i <= 5; i++){
				 cout<<endl;}}
				 				 
int main(){
	string pilihan, input, deposit;
	string Login = "nama";
	string tidak = "no";
	string iya = "yes";
	char nama,wallet,nomor,bet;
	bool yn;
	int a = 20;
	int b = 1000;
	int y;

				 
	garis();
	cout<< endl;
	cout<< "           BLACK JACK";
	cout<< endl;
	garis();
	system("pause");
	system("cls");

	cout<< endl;
	cout<< "      welcome to the game";
	kosong();
	cout<< "   	    Log In\n	    Sign In\n";
	cin>> pilihan;

	if (pilihan == Login){
	cout<< "check my deposit money";
	cin>> deposit;
		if(deposit == tidak){
		cout<< "How much money would you like to bet? $";
		cin>> bet;
		}else {
		cout<< "Your remaining deposit money is $1000";
		}
	}
}

	