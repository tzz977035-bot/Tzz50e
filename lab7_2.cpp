#include <iostream>
#include <string>
using namespace std;

int main(){
  cout <<"Fahsai: Sawadee ka...Can you tell me your name? \n";
  string name;
  cout <<"?????: ";
  getline(cin,name);
  cout <<"Fahsai: Wow!!! "<<name<<" is a really cool name.\n";
  cout <<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
  string id;
  cout <<name<<": ";
  getline(cin,id);
  
  string gear = id.substr(0,2);
  int Gear = stoi(gear);
  Gear = Gear-12;
  
  cout << "Fahsai: I think you may be GEAR "<<Gear<<". I have a free movie ticket for you.\nFahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
  string movie;
  cout << name<<": ";
  getline(cin,movie);
  cout << "Fahsai: So....which day are you free to go with me?\n";
  string date;
  cout << name<<": ";
  getline(cin,date);
  cout << "Fahsai: "<<date<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";
  string a;
  cout << name<<": ";
  getline(cin,a);
  cout << "Fahsai: 555+ see you "<<date<<". Bye Bye \\(^ ^)/";
  
}
