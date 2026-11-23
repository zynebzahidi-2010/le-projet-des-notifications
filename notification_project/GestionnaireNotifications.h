#pragma once
#include"Notification.h"
class GestionnaireNotifications
{
private:
	Notification* T[100];
	int nbrNotif;
	static int compt;
public:
	GestionnaireNotifications();
	Notification& ajouter(Notification* n);
	void envoyerToutes();
	~GestionnaireNotifications();
};

