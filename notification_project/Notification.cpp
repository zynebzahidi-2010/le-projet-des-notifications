#include "Notification.h"

Notification::Notification(string d, string m)
{
	this->destinataire = d;
	this->message = m;
}

void Notification::afficher() const
{
	cout <<  this->destinataire << " | Message : " << this->message;
}

Notification::~Notification()
{
	cout << "descructeur de classe notification" << endl;
}
