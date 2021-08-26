#include<iostream>
#include<windows.h>// for seting the screen colour to blue
using namespace std;

void magazien() {// output all that
	cout << "\n\tWELLERMAN \t SONG" << endl;
	cout << "> please chose which page that you wanna read ^_^ " << endl;
	cout << "> 9 Pages(0 will show all of them)" << endl;
	cout << "> Press q to Quit\n" << endl;
}
void p1() {// output all that
	cout << " There once was a ship that put to sea\a " << endl;
	cout << " The name of the ship was the Billy of Tea " << endl;
	cout << " The winds blew up, her bow dipped down " << endl;
	cout << " O blow, my bully boys, blow (huh)\n " << endl;
}
void p2() {// output all that
	cout << " She had not been two weeks from shore\a " << endl;
	cout << " When down on her a right whale bore " << endl;
	cout << " The captain called all hands and swore " << endl;
	cout << " He'd take that whale in tow (huh)\n " << endl;
}
void p3() {// output all that
	cout << " Soon may the Wellerman come\a " << endl;
	cout << " To bring us sugar and tea and rum (hey) " << endl;
	cout << " One day, when the tonguin' is done " << endl;
	cout << " We'll take our leave and go\n " << endl;
	cout << " Take our leave and go\n " << endl;
}
void p4() {// output all that
	cout << " Soon may the Wellerman come\a " << endl;
	cout << " To bring us sugar and tea and rum " << endl;
	cout << " One day, when the tonguin' is done " << endl;
	cout << " We'll take our leave and go\n " << endl;
}
void p5() {// output all that
	cout << " Before the boat had hit the water\a " << endl;
	cout << " The whale's tail came up and caught her " << endl;
	cout << " All hands to the side harpooned and fought her " << endl;
	cout << " When she dived down below (huh)\n " << endl;
}
void p6() {// output all that
	cout << " She had not been two weeks from shore\a " << endl;
	cout << " When down on her a right whale bore " << endl;
	cout << " The captain called all hands and swore " << endl;
	cout << " He'd take that whale in tow (huh)\n " << endl;
}
void p7() {// output all that.
	cout << " Soon may the Wellerman come\a " << endl;
	cout << " To bring us sugar and tea and rum (hey) " << endl;
	cout << " One day, when the tonguin' is done " << endl;
	cout << " We'll take our leave and go\n " << endl;
	cout << " Take our leave and go\n " << endl;
}
void p8() {// output all that.
	cout << " Soon may the Wellerman come\a " << endl;
	cout << " To bring us sugar and tea and rum " << endl;
	cout << " One day, when the tonguin' is done " << endl;
	cout << " We'll take our leave and go\n " << endl;
}
void p9() {// output all that.
	cout << " Soon may the Wellerman come\a " << endl;
	cout << " To bring us sugar and tea and rum (hey) " << endl;
	cout << " One day, when the tonguin' is done " << endl;
	cout << " We'll take our leave and go\n " << endl;
	cout << " Take our leave and go\n " << endl;
	cout << " Take our leave and go\n " << endl;
}


int main() {
	char x;// input value.
	system("color 3");// set screen colour to blue.
	do {
	magazien();// call the function.
	cin >> x;// get input from the user.
		switch (x) {// switching options.
		case '1':
			p1();
			break;
		case '2':
			p2();
			break;
		case '3':
			p3();
			break;
		case '4':
			p4();
			break;
		case '5':
			p5();
			break;
		case '6':
			p6();
			break;
		case '7':
			p7();
			break;
		case '8':
			p8();
			break;
		case '9':
			p9();
			break;
		case '0':
			p1();
			p2();
			p3();
			p4();
			p5();
			p6();
			p7();
			p8();
			p9();
			break;
		case 'q':
			cout << "Goodbye!";
			break;
		default:
			cout << "invalid option >_< ";//if the user has inputed wrong option.
			break;

		}
	} while (x != 'q');//break the loop when user enter q.
}
