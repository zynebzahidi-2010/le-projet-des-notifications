#pragma once
#include "Notification.h"
class NotificationSMS :
    public Notification
{
private:
	string operateur;
public:
	NotificationSMS(string, string, string);
	void afficher()const override;
	void envoyer()override;
	virtual ~NotificationSMS();

};

