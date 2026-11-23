#pragma once
#include "Notification.h"
class NotificationEmail :
    public Notification
{
private:
	string objet;
public:
	NotificationEmail(string , string , string );
	void afficher()const override;
	void envoyer() override;
	~NotificationEmail();
};

