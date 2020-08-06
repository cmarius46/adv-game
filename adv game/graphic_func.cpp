#include "graphic_func.hpp"

void path(int path_size) {
	for(int i = 0; i < path_size; ++i) {
		cout << "				|	|\n";
		system("sleep 0.01s");
	}
}

void building(int type, const char *name) {
	//0 for town hall
	//

	switch(type) {
		case 0:
			cout << "				    ^\n";
			cout << "				  _/ \\_\n";
			cout << "				_-_____-_\n";
			cout << "				||     ||\n";
			cout << "				||     ||\n";
			cout << "				||     ||\n";
			cout << "              	 		||_____||\n";
			cout << "				" << name << "\n\n";
		  //cout << "				TOWN HALL\n\n";
			break;
		case 1:
			cout << "				   _-_\n";
			cout << "				  -- --\n";
			cout << "				 -------\n";
			cout << "				|| ^ ^ ||\n";
			cout << "				|| |^| ||\n";
			cout << "				||== ==||\n";
			cout << "				" << name << "\n\n";
			break;

		case 2:
			cout << "				*castle FILE missing*\n";
			cout << "				" << name << "\n\n";
			break;

		case 3:
			cout << "				*barn FILE missing*\n";
			cout << "				" << name << "\n\n";
			break;

		default:
			cout << "Graphic error ! Building type not correct !\n";
			break;
	}

	
}

void person(int type) {
	//0 for hello
	//1 for sword not ready
	//2 for sword ready
	//3 for decapitation
	//4 for fat person

	switch(type) {
		case 0:
			cout << "\n";
			cout << "   0/ \n";
			cout << "  /|\n";
			cout << "   |\n";
			cout << "  / \\\n";
			cout << "\n";
			break;
		case 1:
			cout << "\n";
			cout << "   0  \n";
			cout << "  /|\\\n";
			cout << "   | -|---\n";
			cout << "  / \\\n";
			cout << "\n";
			break;
		case 2:
			cout << "\n";
			cout << "      |\n";
			cout << "     _|_\n";
			cout << "   0__| \n";
			cout << "  /|\n";
			cout << "   | \n";
			cout << "  / \\\n";
			cout << "\n";
			break;
		case 3:
			cout << "\n";
			cout << "  '''\n";
			cout << "   '  \n";
			cout << "  /|\\\n";
			cout << "   | \n";
			cout << "o / \\  _|___ \n";
			cout << "\n";
			break;
		case 4:
			cout << "   0\n";
			cout << " /-;-\\\n";
			cout << "/|   |\\\n";
			cout << "  ---\n";
			cout << "  \' \'\n";
			break;
		case 5:
			cout << "  _0\n";
			cout << "  \\|\\_\n";
			cout << "  / \\|\n";
			cout << "\n";
			break;
		case 6:
			cout << "\n\n\n\n";
			cout << " --P--\n";
			cout << "\n";
			break;
		default:
			break;
	}

}

void hat() {
	cout << "-^-\n";
}
