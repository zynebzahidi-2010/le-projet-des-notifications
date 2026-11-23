#include "GestionnaireNotifications.h"
int GestionnaireNotifications::compt = 0;

GestionnaireNotifications::GestionnaireNotifications()
{
	
}

Notification& GestionnaireNotifications::ajouter(Notification* n)
{
	if (this->nbrNotif < 100) {
			this->T[this->nbrNotif] = n;
			this->nbrNotif++;
	}
	else {
		cout << "tableau plein" << endl;
	}
	return *n;
}




void GestionnaireNotifications::envoyerToutes()
{
	for (int i = 0; i < this->nbrNotif; i++) {
		cout << "notification "<<++GestionnaireNotifications::compt <<" :" << endl;
		this->T[i]->envoyer();
	}
}

GestionnaireNotifications::~GestionnaireNotifications()
{
}
