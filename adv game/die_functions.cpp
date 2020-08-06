#include "die_functions.hpp"

void die(int method) {

	switch(method) {
		case 0:
		system("clear");
		for(int i = 0; i < 3; ++i) {
			system("xcowsay DIE !!");
			system("sleep 0.1s");
			system("clear");
		}
		system("speep 1s");

		system("clear");
		system("figlet \"YOU   DIED\"  !");
		exit(1);
		break;
		case 1: {
			system("clear");
			system("figlet TE TAI SA MOARA MAMA");
			system("sleep 5s");
			system("asciiview sword.png -driver curses");
			system("sleep 3s");
			system("clear");
			system("figlet \"YOU   DIED\"  !");
			exit(1);
			break;
		}
		case 2: {
			system("clear");
			system("figlet \"A  CROWN  FOR  A  KING\"");
			system("sleep 5s");
			system("aafire");
			//system("sleep 5s");
			system("pkill -9 aafire");
			system("clear");
			system("figlet \"YOU   DIED  !\"");
			exit(1);
			break;
		}
	}
	
}
