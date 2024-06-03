/****************************************************************
                  -----BASIC INTRO-----
                    
This is the game named League of Trashes.
At the beggining of the program,you have to give your personal data
such as name, password,etc,etc.
After that,you dive into main menu of the game.
You can start playing,or go to the shop and buy important items,or see the credits,or how to play.
You start with 100 gold and you can chose between 5 items witch they have unique interference with the player.
At the start of the game,you have to chose between 2 fighters,
Carlos or Tommy to face up the enemy monster Filippos.
You have 4 basic stats witch are Health,Ammo,Damage and Armor.
The main goal of the game is to Damage all the Health of the Monster and level up.
You need at least 1 ammo so you can attack,so you must reload if you have 0 Ammo.
You start at level 1 and after you win the fight,at the next level,yours and the monsters stats are reseting with upgrades.
There are infitive levels,till you give up or lose the game.
                       
			      ----- CREATOR-----

GKORO DIMITRIOS
dgkoro@iekakmi.edu.gr
This game was made with Dev-C++ 5.11 Version.
****************************************************************/



#include <iostream>//main c++ library
#include <stdlib.h>//system("cls");
#include <string>//for string usage
#include <iomanip>//mathematic library
#include <stdlib.h>//for randomization
#include <time.h>//time for randomization
#define N 1
using namespace std;
void keno();
// player's class
class Player{
	//private players data
	private:
		
		string name;
		string pass;
		string email;
		double phonenum;
		int age;
		int games;
		int wins;
		int lose;
		int coins;
		int hp_posi;
		int revive_posi;
		int dmg_posi;
		int armor_posi;
		int health_posi;
		//public player's data
	public:
		
		Player();
		
		void Data();
	
		void Name();
		
		void Coin();
		
		void CoinUp(int a);
		//functions for Hp potion
		void Hp_posi();
		
		int Hp_pos();
		
		void Hp_posiUp(int a);
		
		void Hp_posiDown(int a);
		//fuctions for Revive potions
		void Revive_posi();
		
		int Revive_pos();
		
		void Revive_posiUp(int a);
		
		void Revive_posiDown(int a);
		//fuctions for Dmg item
		void Dmg_posi();
		
		void Dmg_posiUp();
		
		int Dmg_pos();
		
		void Dmg_posiUp(int a);
		
		void Dmg_posiDown(int a);
		//fuctions for health item
		void Health_posi();
		
		void Health_posiUp();
		
		int Health_pos();
		
		void Health_posiUp(int a);
		
		void Health_posiDown(int a);
		//fuctions for armor item
		void Armor_posi();
		
		int Armor_pos();
		
		void Armor_posiUp();
		
		void Armor_posiUp(int a);
		
		void Armor_posiDown(int a);
		
		
		
		int giveCoin(){
			
			return coins;
			
		}
};
//fighter's class
class Fighter{
	//fighter's privet data
	private:
		
		string name;
		int life;
		int dmg;
		int shield;
		int relo;
		int id;
	//fighter's public data
	public:
		
		Fighter();
		
		void setData(string a,int b,int c,int d,int e,int f);
		
		void printData();
		
		int Life();
		
		int Dmg();
		
		int Shield();
		
		int Relo();
		
		void DataUp(int a,int b,int c);
};
//Enemy's class
class Enemy{
	//Enemy's privet data
	private:
		
		string name;
		int life;
		int dmg;
		int shield;
		int relo;
	//Enemy's public data
	public:
		
		Enemy();
		
		void setData(string a,int b,int c,int d,int e);
		
		void printName();
		
		void printLife();
		
		void printDmg();
		
		int Shield();
		
		int Dmg();
		
		int Life();
		
		int Relo();
};
//main function
int main() {
	
	int cha,end=1,menu,amount,cost;
	int temp_co,lose,level=1;	
	lose=1;
	//Fight
	int flif,fdmg,fshield,frelo;
	int turn;
	int elife,eturn,edmg,esh,erelo;
	
	//player
	int hp_posion;
	int rev_posion;
	
	Fighter f1,f2;
	Player p1;
	Enemy e1;
	
	p1.Data();
	
	//name,life,dmg,sh,relo,id
	f1.setData("Carlos",90,30,10,1,1);
	f2.setData("Tommy",90,30,10,1,2);
	
	//name,life,dmg,sh
	e1.setData("Filippos",100,20,4,1);
	
	system("cls");
		

	//main menu loop
	while(end!=0) {
		
		cout<<"|*****************Main Menu****************|"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<" Hello ";
		p1.Name();
		cout<<"                Coins: "; 
		p1.Coin();
		keno();
		cout<<"|                                          |"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"|            1.Play                        |"<<endl;
		cout<<"|            2.Item Shop                   |"<<endl;
		cout<<"|            3.Credits                     |"<<endl;
		cout<<"|            4.How to play                 |"<<endl;
		cout<<"|            5.Quit Game                   |"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"|******************************************|"<<endl;
		
		cin>>menu;
	
		system("cls");
	
		switch(menu) {
			//Play
			case 1:
				
				int plife;
				cout<<"**********Chose Your Character***********"<<endl;
				//chose between our 2 fighters
				void keno();
				f1.printData();
				keno();
				f2.printData();
				void keno();
				
				cout<<"*******************************************"<<endl<<"=";
				cin>>cha;
				
				system("cls");
				
										
			//Fighter
				
				flif=f1.Life();
				fdmg=f1.Dmg();
				fshield=f1.Shield();
				frelo=f1.Relo();
			
			//Enemy
				elife=e1.Life();
				edmg=e1.Dmg();
				esh=e1.Shield();
				erelo=e1.Relo();
			
			//player
				hp_posion=p1.Hp_pos();
				rev_posion=p1.Revive_pos();
				
				//random events in fight
				while(lose!=0){
				
					while(flif>0 and elife>0) {
					
						srand(time(0));
						eturn=rand()%2;
						srand(time(0));
						eturn=rand()%2;
						srand(time(0));
						eturn=rand()%2;
						srand(time(0));
						eturn=rand()%2;
						//main gameplay events
						cout<<"************Level "<<level<<"*****************"<<endl;
						cout<<"Player's Life "<<flif<<" | Filippos's Life "<<elife<<endl;
						cout<<"Player's Ammo "<<frelo<<"  | Filippos's Ammo "<<erelo<<endl;
						cout<<"1.Attack 2.Reload 3.Defence| Filippos's "<<eturn<<endl<<"=";
						cin>>turn;
					
						system("cls");
						
					//fighter 1
					
						//both attack
						if (turn==1 and eturn==0 and frelo>0 and erelo>0){
							flif=flif-edmg;//fighter take dmg
							elife=elife-fdmg;//enemy take dmg
							frelo=frelo-1;//fighter -1 bul
							erelo=erelo-1;//enemy -1 bul
							cout<<"Both attacked"<<endl<<endl;
						}
						//fighter attack enemy relo
						else if (turn==1 and eturn==1 and frelo>0){
							elife=elife-fdmg;//enemy take dmg
							erelo=erelo+1;//enemy relode
							frelo=frelo-1;//fighter -1 bul
							cout<<"You attacked while enemy was reloading"<<endl<<endl;
						}
						//fighter attack enemy sh
						else if(turn==1 and eturn==2 and frelo>0){
							elife=elife-(fdmg-esh);//enemy take dmg
							frelo=frelo-1;//fighter -1bul
							cout<<"You attacked while enemy was defending"<<endl<<endl;
						}
						
					//fighter 2
						
						//fighter reload enemy attack
						else if (turn==2 and eturn==0 and erelo>0){
							flif=flif-edmg;//fighter take dmg
							frelo=frelo+1;//fighter relode
							erelo=erelo-1;//enemy -1bul
							cout<<"You got hit while reloading"<<endl<<endl;
						}
						//fighter reload enemy reload
						else if (turn==2 and eturn==1){
							frelo=frelo+1;//fighter relode
							erelo=erelo+1;//enemy relode
							cout<<"Both reloading"<<endl<<endl;
						}
						//fighter reload enemy sh
						else if (turn==2 and eturn==2){
							frelo=frelo+1;//fighter relode
							cout<<"You reloaded"<<endl<<endl;
						}
					
					//fighter 3
					
						//fighter shielding enemy attack
						else if (turn==3 and eturn==0 and erelo>0){
							erelo=erelo-1;//enemy -1bul
							flif=flif-(edmg-fshield);//fighter take dmg
							cout<<"You defend while enemy attacking"<<endl<<endl;
						}
						//fighter shielding enemy relode
						else if (turn==3 and eturn==1){
							erelo=erelo+1;
							cout<<"You defend"<<endl<<endl;
						}
						//fighter shielding enemy sh
						else if (turn==3 and eturn==2){
							cout<<"both are defeding"<<endl<<endl;
						}
						
					}
//*****************************************************					
					if(elife<=0){
						//reset enemy
						elife=e1.Life();
						edmg=e1.Dmg();
						esh=e1.Shield();
						erelo=e1.Relo();
						
						//reset fighter
						flif=f1.Life();
						fdmg=f1.Dmg();
						fshield=f1.Shield();
						frelo=f1.Relo();
						
						//stronger enemy
						elife=elife+10;
						edmg=edmg+5;
						esh=esh+5;
						
						//stronger fighter
						flif=flif+10;
						fdmg=fdmg+5;
						fshield=fshield+5;
						
						cout<<"Level "<<level<<" Complete"<<endl;
						
						level=level+1;
						system("pause");
						system("cls");					
						//+ random upgrades for enemy
					}
				
					if(flif<=0){
						//if you lose
						cout<<"|**************Game Over****************|"<<endl;
						cout<<"|     1.Use potions                      "<<endl;
						cout<<"|     2.Go back to Main Menu             "<<endl;
						cout<<"|***************************************|"<<endl<<"=";	
						cin>>menu;
						
						system("cls");
						//Potion menu
						switch(menu) {
							
							case 1:
								cout<<"***************Your Potions*****************"<<endl;
								cout<<"|                                You have:  "<<endl;
								cout<<"|            1.Hp Potion +50hp  ";
								p1.Hp_posi();
								keno();
								cout<<"|            2.Revive +100hp    ";
								p1.Revive_posi();
								keno();
								cout<<"|            3.End Run                      "<<endl;
								cout<<"|                                           "<<endl;
								cout<<"|******************************************|"<<endl;								
								cin>>menu;
								
								system("cls");
								//potion's probability
								switch(menu) {
									case 1:
										if (hp_posion>0){
											flif=flif+50;
											p1.Hp_posiDown(1);
										}
										else{
											cout<<"You're out of potions"<<endl;
											
										}
										
									break;
									//revive after lose
									case 2:
										if (rev_posion>0){
											flif=flif+100;
											p1.Revive_posiDown(1);
										}
										else{
											cout<<"You're out of potions'"<<endl;
											
										}									
									
									break;
									
									case 3:
										menu=0;
									break;
								}
							break;
							//if you lose for good
							case 2:
								lose=0;
								cout<<"Better luck next time"<<endl;
								cout<<"Thanks for playing league of trashes :)"<<endl;
								system("pause");
								system("cls");
							break;
							
					 }
					}
				}
			break;
			
			//Item Shop  
			case 2:
				
		cout<<"|*****************Item Menu****************|"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"                Coins: "; 
		p1.Coin();
		keno();
		cout<<"|                                          |"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"|            1.Hp potions                  |"<<endl;
		cout<<"|            2.Revive Potions              |"<<endl;
		cout<<"|            3.Sword                       |"<<endl;
		cout<<"|            4.Bell                        |"<<endl;
		cout<<"|            5.Thorns                      |"<<endl;
		cout<<"|            6.Back to main menu           |"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"|******************************************|"<<endl;
				
				cin>>menu;
				system("cls");
			
				switch(menu) {
					
					//Hp Potions
						
					case 1:
						
						temp_co=0;
						amount=0;
						cost=0;
						
						temp_co=p1.giveCoin();
						
						cout<<"How many Hp Potions do you want to buy;"<<endl<<":";
						cin>>amount;
						
						cost=amount*10;
						
						if(temp_co>=cost){
							
							p1.Hp_posiUp(amount);
							temp_co=temp_co-cost;
		 					p1.CoinUp(temp_co);
		 					system("cls");
														
						}
						else{
							cout<<"You are out of coins"<<endl;
							system("pause");
							system("cls");
						}
						

					break; 
					
					//Revive Potions
					case 2:
						
						temp_co=0;
						amount=0;
						cost=0;
						
						temp_co=p1.giveCoin();
						
						cout<<"How many Revive Potions do you want to buy;"<<endl<<":";
						cin>>amount;
						
						cost=amount*40;
						
						if(temp_co>=cost){
							
							p1.Revive_posiUp(amount);
							temp_co=temp_co-cost;
		 					p1.CoinUp(temp_co);
								system("cls");					
						}
						else{  //back to main menu if poor
							cout<<"You dont have enough coins"<<endl;
							system("pause");
							menu=0;
							system("cls");	
						}
						//Sword
					case 3:
							temp_co=0;
						amount=0;
						cost=0;
						
						temp_co=p1.giveCoin();
						
						cout<<"How many swords do you want to buy;"<<endl<<":";
						cin>>amount;
						
						cost=amount*50;
						
						if(temp_co>=cost){
							
							p1.Dmg_posiUp(amount);
							temp_co=temp_co-cost;
		 					p1.CoinUp(temp_co);
		 				}
		 					else{   //back to main menu if poor
							cout<<"You dont have enough coins"<<endl;
							system("pause");
							system("cls");
						}
														
						

					break;
					//bell
					case 4:
						temp_co=0;
						amount=0;
						cost=0;
						
						temp_co=p1.giveCoin();
						
						cout<<"How many bells do you want to buy;"<<endl<<":";
						cin>>amount;
						
						cost=amount*50;
						
						if(temp_co>=cost){
							
							p1.Hp_posiUp(amount);
							temp_co=temp_co-cost;
		 					p1.CoinUp(temp_co);
		 				}
		 					else{   //back to main menu if poor
							cout<<"You dont have enough coins"<<endl;
							system("pause");
							system("cls");
						}
						
					break;
					//thorns
					case 5:
						temp_co=0;
						amount=0;
						cost=0;
						
						temp_co=p1.giveCoin();
						
						cout<<"How many thorns do you want to buy;"<<endl<<":";
						cin>>amount;
						
						cost=amount*50;
						
						if(temp_co>=cost){
							
							p1.Armor_posiUp(amount);
							temp_co=temp_co-cost;
		 					p1.CoinUp(temp_co);
		 				}
		 					else{   //back to main menu if poor
							cout<<"You dont have enough coins"<<endl;
							system("pause");
							system("cls");
						}
						
					break;
					
					//Exit
					
					case 6:   //back to main menu
						menu=0;
						
					break;
				
				
				}

			break;
			//Credits  
			case 3:
						cout<<"This game was created by Dimitrios Gkoro!"<<endl;
						cout<<"At this game,you have to chose between 2 legendary fighters.";
						cout<<"Both of them, they have one same goal, witch is to win their archenemy monster Filippos!"<<endl;
						cout<<"Filippos is a legendary disgusting monster, who killed a lot of innocent people"<<endl;
						cout<<"The main goal is to win as many rounds as possible,good luck!"<<endl<<endl<<endl;
				system("pause");

				system("cls");
				
			break;
			//How to play
		case 4:
				cout<<"-Press 1 to attack"<<endl;
				cout<<"-Press 2 to reload"<<endl;
				cout<<"-press 3 to defend"<<endl<<endl<<endl;
				cout<<"If your health goes below 0 and you are out of potions, you have to restart from begining"<<endl;
				cout<<"If your enemy's health goes below 0, you can move to the next level"<<endl;
				cout<<"Best thing to do, always check the shop before you start playing,but be careful,your money is limited"<<endl<<endl<<endl;
			system("pause");
			
			system("cls");
		
	    	break;
				
			//Quit Game
		case 5:
				menu=0;
				end=0;
				system("cls");
			break;
		}	
}
	
//cin>>
//cout<<
}






//-----------------------------------------Fighter-----------------------------------------------------------------

Fighter::Fighter(){
	cout<<""<<endl<<""<<endl;
}
//fighter's Data
void Fighter::printData(){
	cout<<"|Character: "<<id<<endl;
	cout<<"| Name: "<<name<<endl;
	cout<<"| Life: "<<life<<endl;
	cout<<"| Damage: "<<dmg<<endl;
	cout<<"| Shield: "<<shield<<endl;
} 

void Fighter::setData(string a,int b,int c,int d,int e,int f){
		//fighter's setData
	name=a;
	life=b;
	dmg=c;
	shield=d;
	relo=e;
	id=f;

}
//fighter's life function
int Fighter::Life(){
	return life;
}
//fighter's Dmg function
int Fighter::Dmg(){
	return dmg;
}
//fighter's shield function
int Fighter::Shield(){
	return shield;
}
//fighter's reload function
int Fighter::Relo(){
	return relo;
}

void Fighter::DataUp(int a,int b,int c){
	
	life=a;
	dmg=b;
	shield=c;
		
}

//---------------------------------------------Fighter-----------------------------------------------------------

//----------------------------------------------Player--------------------------------------------------------------
Player::Player(){
	cout<<"*************Welcome to league of trashes**************"<<endl<<""<<endl;
}
//player putting some data
void Player::Data(){
	
	cout<<"------------------------Enter Your Name"<<endl<<":";
	cin>>name;
	
	cout<<"------------------------Enter Your password"<<endl<<":";
	cin>>pass;
	
	cout<<"-------------------------Enter Your E-mail"<<endl<<":";
	cin>>email;
	
	cout<<"------------------------Enter Your Age"<<endl<<":";
	cin>>age;
	
	cout<<"------------------------Enter Your Phone Number"<<endl<<":";
	cin>>phonenum;
	//stats
	coins=100;
	hp_posi=0;
	revive_posi=0;
	dmg_posi=0;
	health_posi=0;
	armor_posi=0;
		
}
//name function
void Player::Name(){
	
	cout<<name;

}
//player's coin function
void Player::Coin(){
	
	cout<<coins;

}
//coin up function
void Player::CoinUp(int a){
	
	coins=a;

}
//health potion function
void Player::Hp_posi(){
	
	cout<<hp_posi;

}

int Player::Hp_pos(){
	return hp_posi;
}

void Player::Hp_posiUp(int a){
	
	hp_posi=hp_posi+a;

}

void Player::Hp_posiDown(int a){
	
	hp_posi=hp_posi-a;

}
//revive potion function
void Player::Revive_posi(){
	
	cout<<revive_posi;

}

int Player::Revive_pos(){
	return revive_posi;
}

void Player::Revive_posiUp(int a){
	
	revive_posi=revive_posi+a;
	
}

void Player::Revive_posiDown(int a){
	
	revive_posi=revive_posi-a;
	
}
//sword item function
void Player::Dmg_posi(){
	
	cout<<dmg_posi;

}

int Player::Dmg_pos(){
	return dmg_posi;
}

void Player::Dmg_posiUp(int a){
	
	dmg_posi=dmg_posi+a;

}

void Player::Dmg_posiDown(int a){
	
	dmg_posi=dmg_posi-a;
}
//health item function
void Player::Health_posi(){
	
	cout<<health_posi;

}

int Player::Health_pos(){
	return health_posi;
}

void Player::Health_posiUp(int a){
	
	health_posi=health_posi+a;

}

void Player::Health_posiDown(int a){
	
	health_posi=health_posi-a;
}
//armor item function
void Player::Armor_posi(){
	
	cout<<armor_posi;

}

int Player::Armor_pos(){
	return armor_posi;
}

void Player::Armor_posiUp(int a){
	
	armor_posi=armor_posi+a;

}

void Player::Armor_posiDown(int a){
	
	armor_posi=armor_posi-a;
}


		
//--------------------------------------------Player---------------------------------------------------------------

//--------------------------------------------Enemy-----------------------------------------------------------------

Enemy::Enemy(){
	cout<<""<<endl<<""<<endl;
}
//enemies stats data
void Enemy::setData(string a,int b,int c,int d,int e){
		
	name=a;
	life=b;
	dmg=c;
	shield=d;
	relo=e;
	
}
//enemy's name
void Enemy::printName(){
	
	cout<<"Name is"<<name;
	
}
//enemy's life
void Enemy::printLife(){
	
	cout<<"Life is"<<life;
	
}
	//enemy's dmg	
void Enemy::printDmg(){
	
	cout<<"Dmg is"<<dmg;
	
}
//Enemy's life function
int Enemy::Life(){
	return life;
}
//Enemy's Dmg function
int Enemy::Dmg(){
	return dmg;
}
//Enemy's Shield function
int Enemy::Shield(){
	return shield;
}
//Enemy's reload function
int Enemy::Relo(){
	return relo;
}
//----------------------------------Enemy----------------------------------

void keno(){
	cout<<endl;
}
