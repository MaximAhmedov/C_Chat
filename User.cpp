#include "User.h"

User::messageHT::messageHT()
{
	pairCount = 0;
	arraySize = 8;
	array = new Pair[arraySize];
}

User::messageHT::~messageHT()
{
	delete array;
}

User::User(char login[plLength], char password[plLength], char name[plLength])
{
	strcpy_s(_login, login);
	strcpy_s(_password, password);
	strcpy_s(_name, name);
	messageHT myMessages;
}
