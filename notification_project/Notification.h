#pragma once
#include<iostream>
using namespace std;
class Notification
{
private:
	string destinataire;
	string message;
public:
	Notification(string , string );
	virtual void afficher()const;
	virtual void envoyer() = 0;
	virtual ~Notification();
};

