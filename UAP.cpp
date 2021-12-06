//P2
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void garis(){for (int i = 0; i <= 50; i++){
				 cout<< "=";}}

void baris(){for (int i = 0; i <= 40; i++){
				 cout<< "-";}}
				 
void kosong(){for (int i = 0; i <= 5; i++){
				 cout<<endl;}}

voit t(){ cout<< "\t\t\t\t\t";}
				 				 
int main(){
	string pilihan, input, deposit, signin, pass, daftar, Player_1, Player_2;
	string Login = "Mawar";
	string signup = "Sign Up"
	string tidak = "no";
	string iya = "yes";
	bool yn;
	int y, bet, money;

				 
	t();garis();
	cout<< endl;
	t(); cout<< "           BLACK JACK";
	cout<< endl;
	t(); garis();
	system("pause");
	system("cls");

	cout<< endl;
	t(); cout<< "      WELCOME TO THE GAME";
	kosong();
	t(); cout<< "\tLog In\n"
	t(); cout<< "\tSign Up\n";
	kosong();
	system("pause");
	system("cls");
	t(); cin>> pilihan;

	if (pilihan == Login){
	t(): cout<< "Check my deposit money";
	cin>> deposit;
		if(deposit == tidak){
		t(): cout<< "How much money would you like to bet? $";
		     cin>> bet;
		t(): cout<< "Remining deposit: $"<< 1000 - bet<< endl;
		}else {
		t(): cout<< "Your remaining deposit money is $1000\n";
		getch();
		t(): cout<< "How much money would you like to bet? $";
		cin>> bet;
		}
		system("pause");
		system("cls");
		kosong();
		t(); cout<< "PLAY";
		getch();
		system("cls");
		cout<< "Player 1 :"<< Login;
//P4		
	}else
	t(): cout<< "Enter name :";
	cin.ignore(1,'\n');
	getline(cin, daftar);
	t(): cout<< "Password :";
	cin>> pass; 
	t(): cout<< "Deposit money :$";
	cin>> money;
	t(): cout<< "How much money would you like to bet? $";
	cin>> bet;
	t(): cout<< "Remining deposit: $"<< money - bet<< endl;
	cout<< "| Player 1 :"<< daftar<< "\t";
	}
		
//P3
	cout<< "\t| Player 2 :Host\n";
	baris();
	cout<< "\n| Bet      :$"<< bet<< "\t";
	cout<< "\t| Bet      :$500\n";
	baris();

	//Player1
	srand(time(NULL));
	int g = rand () % 22;
	int h = rand () % 22;
	int i = rand () % 22;
	//Player2
//P4	int a = rand () % 22;
	int b = rand () % 22;
	int c = rand () % 22;

	getch();
	t(): cout<< "\n| Poin     :"<< g<< " "<< h<< " "<< i;
	cout<< "\t| Poin     :"<< a<< " "<< b<< " "<< c<< "\n";
	baris();		
	t(): cout<< "\n| Total    :"<< g + h + i;
	cout<< "\t\t| Total    :"<< a + b + c<< "\n";
	baris();
	cout<< "\n";
	system("cls:);

	Player_1 = g + h + i;
	Player_2 = a + b + c;

	if(Player_1> Player_2){
	t(): cout<< "winner!!";
	t(): cout<< "You get $"<< bet*2;
	}else{
	 system("cls");
	 t(): cout<< "YOU LOSE!!";
}

	
