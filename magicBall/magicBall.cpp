#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  string question;
  cout<<"Ask me a question :  ";
	getline(cin,question);
  srand(time(NULL));
  int answer = rand() % 10 ;
  switch (answer){

    case 0:
    cout <<"It is Certain."<<endl;
        break;
    case 1:
    cout <<"My sources say no."<<endl;
        break;
    case 2:
    cout <<"You may rely on it."<<endl;
        break;
    case 3:
    cout <<"Most likely."<<endl;
        break;
    case 4:
    cout <<"Without a doubt."<<endl;
        break;
    case 5:
    cout <<"Don't count on it."<<endl;
        break;
    case 6:
    cout <<"Concentrate and ask again."<<endl;
        break;
    case 7:
    cout <<"Better not tell you now."<<endl;
        break;
    case 8:
    cout <<"Outlook not so good."<<endl;
        break;
    case 9:
    cout <<"Outlook good."<<endl;
        break;
    case 10:
    cout <<"Very doubtful."<<endl;
        break;
    default:
    cout<<"Try Again"<<endl;
  }
system ("PAUSE");
return 0;

}
