#include <iostream>
using namespace std;

int main(){
cout <<"The sorting hat Quiz. "<<endl;
int gryffindor = 0 , hufflepuff = 0 , ravenclaw =0 , slytherin = 0;
int ans_1 , ans_2 , ans_3 , ans_4 ;
//Question no 1
cout <<"Q1) When I'm dead, I want people to remember me as:"<<endl;
cout <<"1) The Good"<<endl;
cout <<"2) The Great"<<endl;
cout <<"3) The wise"<<endl;
cout <<"4) The bold"<<endl;
cin >> ans_1;

if (ans_1 == 1 ){
  hufflepuff++;
}
else if(ans_1 == 2 ){
  slytherin++;
}
else if (ans_1 == 3 ){
  ravenclaw++;
}
else if(ans_1 == 4 ){
  gryffindor++;
}
else {
  cout <<"Invalid Input."<<endl;
}

//Question no 2
cout <<"Q2) Dawn or dusk "<<endl;
cout <<"1) Dawn "<<endl;
cout <<"2) Dusk "<<endl;
cin >> ans_2;
if (ans_2 == 1 ){
  gryffindor++;
  ravenclaw++;
}
else if(ans_2 == 2 ){
  hufflepuff++;
  slytherin++;
}
else {
  cout <<"Invalid Input."<<endl;
}

//Question no 3
cout <<"Q3) Which kind of instrument most pleases your ear?"<<endl;
cout <<"1) The violin"<<endl;
cout <<"2) The trumpet"<<endl;
cout <<"3) The piano"<<endl;
cout <<"4) The drum"<<endl;
cin >> ans_3;
if (ans_3 == 1 ){
  slytherin++;
}
else if(ans_3 == 2 ){
  hufflepuff++;
}
else if (ans_3 == 3 ){
  ravenclaw++;
}
else if(ans_3 == 4 ){
  gryffindor++;
}
else {
  cout <<"Invalid Input."<<endl;
}

//Question no 4
cout <<"Q4) Which road tempts you most"<<endl;
cout <<"1) The wide , sunny grassy lane"<<endl;
cout <<"2) The narrow, dark , lantern-lit alley"<<endl;
cout <<"3) The twisting, leaf-strewn path through woods"<<endl;
cout <<"4) The cobbled street lined (ancient buildings)"<<endl;
cin >> ans_4;
if (ans_4 == 1 ){
  hufflepuff++;
}
else if(ans_4 == 2 ){
  slytherin++;
}
else if (ans_4 == 3 ){
  gryffindor++;
}
else if(ans_4 == 4 ){
  ravenclaw++;
}
else {
  cout <<"Invalid Input."<<endl;
}

//check highest points
string house;
int max=0;
if (gryffindor > max) {
  
  max = gryffindor;
  house = "Gryffindor";
  
}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";
  
}

if (ravenclaw > max) {
  
  max = ravenclaw;
  house = "Ravenclaw";
  
}

if (slytherin > max) {
  
  max = slytherin;
  house = "Slytherin";
  
}

cout << house << "!\n";


system("PAUSE");
return 0;

}
