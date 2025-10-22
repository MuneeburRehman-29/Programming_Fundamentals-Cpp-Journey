#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

	string answer , answer_2;
	int number,rounds, win =0 , draw =0 , loss =0 ;

	cout <<"Lets play Rock Paper and Scissor :"<<endl;
	cout <<"Rule of entering your choise "<< endl<< "1) Enter in small letters "<<endl<< "2( use these spelling  rock , paper , scissor"<<endl<<endl;
	cout <<"How many rounds do you want to play : ";
	cin >> rounds;
	
	for (int i = 0; i < rounds ; i++){
	
		cout << "Enter your choise : ";
		cin >> answer;
		srand(time(NULL));
		number = rand() %3; // generates number between 0 to 2
		if (number == 0 ){
			answer_2 = "rock";
			cout<< answer_2<<endl;
		}
		else 	if (number == 1){
			answer_2 = "paper";
			cout<< answer_2<<endl;
		}
		else {
			answer_2 = "scissor";
			cout<< answer_2<<endl;
		}	
	
		if (answer == "rock" && answer_2 == "paper"){
			loss++;
			cout <<" You lose!"<<endl;
		}	
		else if (answer == "rock" && answer_2 == "scissor"){
			win++;
			cout <<" You Win!"<<endl;
		}
		else if (answer == "paper" && answer_2 == "scissor"){
			loss++;
			cout <<" You lose!"<<endl;
		}
		else if (answer == "paper" && answer_2 == "rock"){
			win++;
			cout <<" You Win!"<<endl;
		}
		else if (answer == "scissor" && answer_2 == "rock"){
			loss++;
			cout <<" You lose!"<<endl;
		}
		else if (answer == "scissor" && answer_2 == "paper"){
			win++;
			cout <<" You Win!"<<endl;
		}
		else if (answer == answer_2){
			draw++;
			cout <<" Draw "<<endl;
		}
		else {
			cout<< "Invaid input"<<endl;
		}
		
	}
	cout <<"Wins : "<<win<<endl;
	cout <<"Losses : "<<loss<<endl;
	cout <<"Draws : "<<draw<<endl;
	
system("PAUSE");
return 0;
}

