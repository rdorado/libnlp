#include <iostream>
#include <libnlp>

using namespace std;
/*
class Task{
	public:
		virtual string task_identifier() = 0;
		virtual string algorithm_identifier() = 0;
		void load_environment(){ }
};

class Tokenizer : Task {
	public:
		string task_identifier(){ return "tokenize"; }
		virtual string[] execute(string line, string outfile) = 0;
		virtual void execute(string input, string outfile) = 0;
};

class RegExpTokenizer : Tokenizer {
	public:
		string[] execute(string line, string outfile) {
			
		};
		void execute(string input, string outfile) {
			
		};
}

class SentenceDetectionAlgorithm : public Task{
	public:
		string task_identifier(){ return "sentdetect"; }
   
		virtual void execute(string input, string outfile) = 0;
};

class RuleBasedSentenceDetector : public SentenceDetectionAlgorithm {
	public:
		string algorithm_identifier(){ return "rules";}
		void execute(string input, string outfile);
};


void RuleBasedSentenceDetector::execute(string input, string outfile){
	
}
*/
void libnlp::foo(void)
{
	//Tokenizer tokenizer = RegExpTokenizer(" ");
	
	//string[] = libnlp::tokenize("Hello, I'm a shared library", );
    cout << "Hello, I'm a shared library" << endl;
}



