#pragma once
#include <iostream>
#include <vector>

#define plLength 10
#define idLength 20

class User {
public:
	User() = default;
	User(char login[plLength], char password[plLength], char name[plLength]);
private:
	class messageHT {
	public:
		messageHT();
		~messageHT();
	private:
		struct Pair {
			Pair() :
				_messageID(""),
				_messages{} {
				}
			char _messageID[idLength];
			std::vector<std::string> _messages;
		};
		Pair* array;
		int arraySize;
		int pairCount;
	};
	char _login[plLength];
	char _password[plLength];
	char _name[plLength];
};
