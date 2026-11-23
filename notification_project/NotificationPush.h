#pragma once
#include "Notification.h"
class NotificationPush :
	public Notification
{
private:
	string application;
public:
	NotificationPush(string, string, string);
	void afficher()const override;
	void envoyer()override;
	~NotificationPush();

};
