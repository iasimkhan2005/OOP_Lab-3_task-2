#include<iostream>
#include<map>
#include<string>
#include "ContactManager.h"

using namespace std;

int main() {
	ContactManager Contact;
	Contact.addcontact("asim", 03354544);
	Contact.addcontact("Hashir", 032525204);

	Contact.SearchContact("Hashir");


	return 0;
}