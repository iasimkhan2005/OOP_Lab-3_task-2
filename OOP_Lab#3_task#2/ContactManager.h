#pragma once

using namespace std;
class ContactManager
{
	map < string , int> contact;
public:
	string name;

	void addcontact(string name, int Phone_no)
	{
		contact[name] = Phone_no;
	}

	void SearchContact(string name)
	{
		auto t = contact.find(name);
		cout << "Name: " << t->first << endl;
		cout << "Contact NO.: " << t->second << endl;
	}

};

