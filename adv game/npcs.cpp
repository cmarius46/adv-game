#include "npcs.hpp"
#include "all.hpp"

void npc(int number, const char* city_name) {
	switch(number) {

		case 0:
		building(0, "TOWN HALL");
	person(0);

	cout << "Hello, wanderer !\n";
	system("sleep 2s");
	cout << "I am the " << city_name << "\'s mayor.\n";
	system("sleep 2s");
	cout << "Our city has been infested by inculture !\n";
	system("sleep 2s");
	cout << "Pleaz help us !\n";
	system("sleep 2s");
	cout << "Oh, no...\n";
	system("sleep 2s");
	cout << "...my...\n";
	system("sleep 2s");
	cout << "...culture...\n";
	system("sleep 2s");
	cout << "...\n";
	system("sleep 2s");
	cout << "I...\n";
	system("sleep 2s");
	cout << "...am sorry...\n";
	system("sleep 2s");

	person(1);

	system("sleep 2s");

	person(2);

	system("sleep 2s");
	
	person(3);

	system("sleep 2s");
	break;

		case 1: 
		{
		building(1, "BARN BUDDIES");

	//hat();
	person(0);

	system("sleep 2s");

	cout << "Heyo !\n";

	system("sleep 2s");

	cout << "I cam B-liv yo ar hear, m'boy !\n";

	system("sleep 2s");

	cout << "Yo, you lok lika yo cood uz sum extras, y'know ?\n";

	system("sleep 2s");

	cout << "Here me out !\n";

	system("sleep 2s");

	cout << "...\n";

	system("sleep 2s");

	cout << "Hawabout ya help'm milkeh za cows, wha'dya say ?\n";

	system("sleep 2s");

	cout << "Hold...Holdap, don live !\n";

	system("sleep 2s");

	cout << "Bout dem cowz iwa talkn 'bout !\n";

	system("sleep 2s");

	system("cowsay MOOoooo");

	system("sleep 2s");

	cout << "-------------------Milk cows ?-------------\n";
	cout << "Y/n:";
	char input;
	bool inserted = 0;
	bool dead = 0;
	while(!inserted) {
		inserted = 1;
		input = getchar();
		switch(input) {
			case 'y':
				break;
			case 'Y':
				break;
			case 'n':
				dead = true;
				break;
			case 'N':
				dead = true;
				break;
			default:
				inserted = 0;
		}
	}

	if(dead) {
		die(0);
	}

	cout << "You havin' one tryz only to mylk meh !!\n";

	system("sleep 2s");

	cout << "In oder to do so, choose yar milkin' mefod cowarfully\n";

	system("sleep 2s");

	cout << "\n--Choose a letter that could make";
	cout << " SOCKS at church bad for any child---\n\n";

	system("sleep 2s");

	cout << "If you do not know what you're choosing,";
	cout << " I suggest you thread carefully !\n";
	cout <<	"								 - Cowsenberg\n";

	bool chosen = false;
	char buffer_clear = getchar();
	char method = getchar();

	if(method == 'U') {
		chosen = true;
	}

	if(!chosen) {
		die(0);
	}
	
	system("sleep 2s");
	cout << "Goood milkin', ma' boy !\n";
	system("sleep 3s");

	break;
	}
	case 2: {
	
	
	building(2, "BASHTANUL's CASTLE");

	person(4);

	system("sleep 2s");

	cout << "Sohallo, boss !\n";

	system("sleep 2s");

	cout << "Yos BASHTANU, yos BOSSU p-aci ! \n";

	system("sleep 2s");

	cout << "Iote ce castel miam tras !\n";

	system("sleep 2s");

	cout << "Misto, no ?\n";

	system("sleep 2s");

	cout << "Io singur miam ales numele\n";

	system("sleep 2s");

	cout << "Ba, boss, auz ?\n";

	system("sleep 2s");

	cout << "Io am un canie\n";

	system("sleep 2s");

	cout << "Si nus tiu ce sai m-ai fac ca nu mas-culta...\n";

	system("sleep 2s");

	cout << "Ia dute bossica sin cearca tu sal dresezi !\n";

	system("sleep 2s");

	cout << "Daca reusest, te faci dun lant da haur, smr famhilia mea !\n";

	system("sleep 2s");

	cout << "------ *Do you understand this guy ? Me neither, but he looks ";
	cout << "like a good guy, so we should go where he says and help him...-----\n";

	system("sleep 2s");

	cout << "--Go where the guy says ? Y/n :\n";

	char input;
	bool inserted = 0;
	bool dead = 0;
	while(!inserted) {
		inserted = 1;
		input = getchar();
		switch(input) {
			case 'y':
				break;
			case 'Y':
				break;
			case 'n':
				dead = true;
				break;
			case 'N':
				dead = true;
				break;
			default:
				inserted = 0;
		}
	}

	if(dead) {
		die(1);
	}

	system("clear");
	

	system("clear");
	system("cowsay -f dragon \"MOOoooo\"");
	system("sleep 3s");
	system("clear");
	system("cowsay -f dragon \"Ahem..\"");
	system("sleep 3s");
	system("clear");
	system("cowsay -f dragon \"I AM BASH DRAGON, ALL SHOULD FEAR ME\"");
	system("sleep 4s");
	system("clear");
	system("cowsay -f dragon \"Are you here to try to tame the mighty BASH DRAGON ?\"");
	system("sleep 5s");
	system("clear");
	system("cowsay -f dragon \"YOU FOOL, BEWARE THE DAWN OF JUSTICE !\"");
	system("sleep 3s");
	cout << "Try to tame the dragon (hint - one word no bigger than";
	cout <<" 10 letters will do it) :\n";
	char martha[15];
	dead = 1;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.getline(martha, 15);
	if(strcmp(martha, "martha") == 0 || strcmp(martha, "Martha") == 0) {
		dead = 0;
	}

	if(dead) {
		die(2);
	}

	system("clear");
	system("cowsay -f dragon \"Oh, that's my mother's name as well !\"\n");
	system("sleep 3s");
	system("clear");
	system("cowsay -f dragon \"Well, if you say so... what can I help you with ?\"\n");
	system("sleep 3s");
	system("clear");
	system("cowsay -f dragon \"Yea, sure, I cand pretend you tamed me...\"\n");
	system("sleep 3s");
	system("clear");
	person(4);

	cout << "Ba, boss, javra asta parca mas-culta!\n";
	system("sleep 2s");
	cout << "Nust ce iai facut boss da vad ca esti";
	cout << " bossan tu s-iai stiut ce sai faci !\n";
	system("sleep 2s");
	cout << "Hai mars da-ici !\n";
	system("sleep 2s");


	break;
	}//end of case 2
	case 3: {
		building(3, "OLD HOUSE");

		person(5);

		cout << "Hell...\n";
		system("sleep 0.3s");
		cout << "*cough* *cough*\n";
		system("sleep 1s");
		cout << "Halo\n";
		system("sleep 3s");
		cout << "*to himself*\n";

		system("sleep 2s");

		cout << "Aah, plasma cannon !\n";

		system("sleep 3s");

		cout << "Ha, ah, ha..\n";

		system("sleep 1s");

		cout << "*cough* *cough*\n";

		system("sleep 3s");

		cout << "Would...are...will...\n";

		system("sleep 3s");

		cout << "...you watch movie with me ?\n";

		system("sleep 3s");

		cout << "Just one...\n";

		system("sleep 3s");

		char response[2];

		cout << "---------------Watch movie with old man ?----------\n";

		cin.getline(response, 14);

		cout << "Aah, marvelous !\n";

		system("sleep 3s");

		cout << "What movie do we watch ?\n";

		cout << "1) Russians stealing " << city_name << "'s tesaurus\n";
		cout << "2) Star Wars : A new hope\n";
		cout << "3) Matrix\n";

		cout << "Choose 1, 2, or 3 :\n";

		bool chosen = false;
		int number;
		while(!chosen) {
			cin.getline(response, 14);
			chosen = true;
			number = response[0] - '0';
			switch(number) {
				case 1:
					system("clear");
					for(int i = 0; i < 15; ++i) {
						system("sl");
					}
					break;
				case 2:
					system("clear");
					system("telnet towel.blinkenlights.nl");
					break;
				case 3:
					system("clear");
					system("cmatrix");
					break;
				default:
					chosen = false;
					break;
			}
		}
		system("clear");

		person(5);

		system("sleep 3s");

		cout << "Thank you, wanderer. I fell much better and obliged to ";
		cout << "meet your great kindness with similar doings having the ";
		cout << "sole purpose of directing the society towards culture.\n";

		system("sleep 7s");

		cout << "Go on your way now, you shall see what future holds for you,";
		cout << " young man !\n";

		system("sleep 5s");



		break;
	}
		//end of case 3

		case 4: {
			
			person(4);

			cout << "Ce fa' boss ?\n";

			system("sleep 2s");

			cout << "Pleci asa repede ?\n";

			system("sleep 2s");

			cout << "Nu tu salut la bossu al mare, nu tu o salba o halba o ceva\n";

			system("sleep 2s");

			cout << "O atentie ceva cai trecut p-aci ?\n";

			system("sleep 2s");

			cout << "...\n";

			system("sleep 2s");

			cout << "Poate vrei sapun javra asta pe tine boss\n";

			system("sleep 2s");

			cout << "------------You don't understand a thing the big guy is ";
			cout << "saying, but you see his big dragon approaching----------\n";

			system("sleep 4s");

			cout << "*BOOM*\n";

			system("sleep 2s");

			cout << "*BOOM*\n";

			system("sleep 2s");

			cout << "...\n";

			system("clear");

			system("cowsay -f dragon \"MOOoooo\"\n");

			system("sleep 2s");

			system("clear");

			system("cowsay -f dragon \"Ahem...\"\n");

			system("sleep 2s");

			system("clear");

			system("cowsay -f dragon \"I  AM  A  BIG  AND  STRONG  DROGON...\"\n");

			system("sleep 4s");

			system("clear");

			system("cowsay -f dragon \"DRAGON*...\"\n");

			system("sleep 2s");

			system("clear");

			system("cowsay -f dragon \"Nevermind....\"\n");

			system("sleep 2s");

			system("clear");

			system("cowsay -f dragon \"....\"\n");

			system("sleep 2s");

			system("clear");

			system("cowsay -f dragon \"ROAR !!!\"\n");

			system("sleep 2s");

			cout << "------------------What do you say to try to";
			cout << " get out alive ?----------\n";

			char response[15];

			cin.getline(response, 14);

			bool dead = true;

			bool martha = false;

			if(strcmp(response, "DRACARYS") == 0) {
				dead = false;
			}
			else {
				if(strcmp(response, "martha") == 0 ||
					strcmp(response, "Martha") == 0 ||
					strcmp(response, "MARTHA") == 0) 
					martha = true;
			}

			system("sleep 2s");

			if(dead && ! martha) {
				die(2);
			}
			else {
				if(dead && martha) {
					system("clear");

					system("cowsay -f dragon \"Ah, I remember you !\"\n");

					system("sleep 2s");

					system("clear");

					person(4);

					cout << "Cu sau fara martoaga tu tot nai haur deci";
					cout << " nai valoare\n";

					system("sleep 2s");

					cout << "...\n";

					system("sleep 2s");

					cout << "Ba tu ai venit acia sa ne furi ?\n";

					system("sleep 2s");

					cout << "Beli-tai cariciu, rumane !\n";

					die(1);
				}
			}
			

			system("clear");

			person(4);

			system("sleep 1s");

			system("printf \'\033[5m\'");

			system("printf \'\033[31m\'");

			system("clear");

			person(4);

			system("sleep 4s");

			system("clear");

			person(4);

			system("sleep 4s");

			system("clear");

			system("printf \'\033[31m\'");

			person(6);

			system("sleep 3s");

			system("clear");

			system("figlet \"GG    EASY\"");

			system("sleep 5s");

			system("clear");

			system("printf \'\033[0m\'");

			exit(1);

			break;
			//end of case 4
		}



	}
}