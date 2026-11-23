#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string d, string m, string o)
	:Notification(d,m), objet(o)
{
}

void NotificationEmail::afficher() const
{
	cout << "EMAIL | A : ";
	Notification::afficher();
	cout << " | objet :" << this->objet << endl;
}

void NotificationEmail::envoyer()
{
	cout << " email envoye avec succes" << endl;
	NotificationEmail::afficher();
}

NotificationEmail::~NotificationEmail()
{
	cout << "descructeur de classe notification email" << endl;
}
