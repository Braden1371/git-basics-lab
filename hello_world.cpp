// First github program
#include <iostream>
#include <string>
using namespace std;

int main(){

  //Hellow world is too easy, time to add more!
  //Time to add important info
  string userInput;
  bool correct = false;
  while(correct == false){
 	 cout << "Did you ever hear the tragedy of Darth Plaguies the wise? " << endl;
 	 cin >> userInput;

	 cout << userInput << endl;

	 if (userInput != "no" && userInput != "No"){
		 cout << "Search your feelings, and try again" << endl;
	 }

	 else
		 correct = true;
  }

  cout << "I thought not. It's not a story the Jedi would tell you." << endl
  	<< "It's a sith legend. Darth Plagueis was a Dark Lord of the Sith, so " << endl 
  	<< "powerfull and wise he could use the Force to influence midichlorians " << endl
  	<< "to create life." << endl;
}
