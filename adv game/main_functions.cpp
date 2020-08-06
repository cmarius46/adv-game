#include "all.hpp"

void clear_scr() {
	cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void play() {
	int number_of_buildings = 2;
	char city_name[15];
	bool city = 0;
	
	//introduction();
	
	while(!city) {
		clear_scr();
		cout << "Hello, Wanderer !\n\n";
		cout << "This is the land of Landrim !\n\n\n\n\n\n\n\n\n";
		cout << "Choose a city to play your adventure in (choose difficulty) :\n\n\n";
		cout << "For			       type\n\n";
		cout << "*Meteor(easy)			M\n\n";
		cout << "*Craiovita(medium)		C\n\n";
		cout << "*Ferentari(hard)		F\n\n";
		char input = getchar();
		city = 1;
		
		switch(input) {
			case 'M':
				strcpy(city_name, "Meteor");
				break;
			case 'C':
				strcpy(city_name, "Craiovita");
				break;
			case 'F':
				strcpy(city_name, "Ferentari");
				break;
			//case 10:
				//city = 0;
				//break;
			default : {
				cout <<"Wrong choice. Now die and be reborn !";
				city = 0;
				//getchar();
				//cin.get();
				//cin >> ws;
			}
		}
		if(city) {
			cout << "Congrats, you chose to spend your next miserable minutes in the city of ";
			cout << city_name << " ! \n\n";
			system("sleep 3s");
		}
		else {
			cout << "\n";
			system("sleep 2s");
			//cin >> ws;
		}

	}
	cout << "\n\nGo to the city !\n\n";
	path(100);
	
	 //end of introoduction

	npc(0, city_name);
	
	system("sleep 3s");
	path(30);

	int b_number;

	////b_number = rand() % number_of_buildings;

	////building(b_number);
	npc(1, city_name);

	system("sleep 3s");
	
	path(50);

	npc(2, city_name);

	system("sleep 3s");

	path(50);

	npc(3, city_name);	

	system("sleep 3s");

	path(50);

	npc(4, city_name);
	
}
