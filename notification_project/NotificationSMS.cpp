#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string num, string m, string oper)
	:Notification(num,m)
{
	this->operateur = oper;
}

void NotificationSMS::afficher() const
{
	cout << "SMS | Numero: ";
	Notification::afficher();
	cout << " | operateur :" << this->operateur << endl;

}

void NotificationSMS::envoyer()
{
	cout << " SMS envoye avec succes" << endl;
	NotificationSMS::afficher();
}

NotificationSMS::~NotificationSMS()
{
	cout << "destructeur de classe notification sms" << endl;
}
