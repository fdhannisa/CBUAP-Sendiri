//P2
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
	string pilihan, input, deposit, signin, pass, daftar;
	string Login = "Mawar";
	string signup = "Sign Up"
	string tidak = "no";
	string iya = "yes";
	bool yn;
	int y, bet, money;

				 
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
	cout<< "   	    Log In\n	    Sign Up\n";
	cin.ignore(1,'\n');
	getline(cin, pilihan);

	if (pilihan == Login){
	cout<< "Check my deposit money";
	cin>> deposit;
		if(deposit == tidak){
		cout<< "How much money would you like to bet? $";
		cin>> bet;
		cout<< "Remining deposit: $"<< 1000 - bet<< endl;
		}else {
		cout<< "Your remaining deposit money is $1000\n";
		cout<< "How much money would you like to bet? $";
		cin>> bet;
		kosong();
		cout<< "Play;
		getch();
		cout<< "| Player 1 :"<< Login;
		}
//P4		
	}else
	cout<< "Enter name :";
	cin.ignore(1,'\n');
	getline(cin, daftar);
	cout<< "Password :";
	cin>> pass; 
	cout<< "Deposit money :$";
	cin>> money;
	cout<< "How much money would you like to bet? $";
	cin>> bet;
	cout<< "Remining deposit: $"<< money - bet<< endl;
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
	//getch();
	cout<< "\n| Poin     :"<< g<< " "<< h<< " "<< i;
	cout<< "\t| Poin     :"<< a<< " "<< b<< " "<< c<< "\n";
	baris();		
	cout<< "\n| Total    :"<< g + h + i;
	cout<< "\t\t| Total    :"<< a + b + c<< "\n";
	baris();
	cout<< "\n";

	if(Player1> Player2){
	cout<< "winner!!";
	cout<< "You get $"<< bet*2;
	}
}

	
