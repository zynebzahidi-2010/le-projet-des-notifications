#include "NotificationPush.h"

NotificationPush::NotificationPush(string utilisateur, string m, string a)
	:Notification(utilisateur, m), application(a)
{
}

void NotificationPush::afficher() const
{
	cout << "PUSH | Utilisateur: ";
	Notification::afficher();
	cout << " | application :" << this->application << endl;
}

void NotificationPush::envoyer()
{
	cout << " PUSH envoye avec succes" << endl;
	NotificationPush::afficher();
}

NotificationPush::~NotificationPush()
{
}
