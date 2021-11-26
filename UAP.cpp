//progres2
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void garis(){for (int i = 0; i <= 30; i++){
				 cout<< "=";}}

void baris(){for (int i = 0; i <= 20; i++){
				 cout<< "-";}}
				 
void kosong(){for (int i = 0; i <= 5; i++){
				 cout<<endl;}}
				 				 
int main(){
	string pilihan, input, deposit;
	string Login = "Mawar";
	string tidak = "no";
	string iya = "yes";
	char nama,wallet,nomor;
	bool yn;
	int y, bet;

				 
	garis();
	cout<< endl;
	cout<< "           BLACK JACK";
	cout<< endl;
	garis();
	system("pause");
	system("cls");

	cout<< endl;
	cout<< "      WELCOME TO THE GAME";
	kosong();
	cout<< "   	    Log In\n	    Sign In\n";
	cin>> pilihan;

	if (pilihan == Login){
	cout<< "Check my deposit money";
	cin>> deposit;
		if(deposit == tidak){
		cout<< "How much money would you like to bet? $";
		cin>> bet;
		cout<< "Remining deposit: $"<< 1000 - bet<< endl;
		}else {
		cout<< "Your remaining deposit money is $1000\n";
		cout<< "How much money would you like to bet? $";}
		kosong();}
	cout>> "Play\n";
	getch();
//progres3
	cout<< "| Player 1 :"<< Login<< "\n";
	baris();
	cout<< "\n| Bet     :$"<< bet<< "\n";
	baris();
	srand(time(NULL));
	int g = rand () % 21;
	int h = rand () % 21;
	int i = rand () % 21;
	getch();
	cout<< "\n| Poin    :"<< g<< " "<< h<< " "<< i<< " "<< "\n";
	baris();		
	cout<< "\n| Total : "<< g + h + i<< "\n";
	baris();
}

	
