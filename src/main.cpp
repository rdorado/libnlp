#include <iostream>
#include <map>

#include <libnlp>

using namespace std;

/*map<string, int> config;


class Argument{
	string name;
	bool isList;
}

class Command{
	string name;
	map<string, Argument> arguments;
};*/

void print_help();

int main(int argc, char *argv[]) {
	if (argc == 1) 
	{
		print_help();
	}
	else
	{
		//sentdetect();
	}
  
	return 0;
}

void print_help() {
	libnlp::foo();
	cout << "This is the CLI of libnlp. Current options are:" << endl;
	cout << "  sentdetect" << endl; 
}
