// notification_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"NotificationEmail.h"
#include"NotificationSMS.h"
#include"NotificationPUSH.h"
#include"GestionnaireNotifications.h"

int main()
{
	//creation des notifications
	Notification *notif = new NotificationEmail("sara@example.com", "nouvelle connexion detectee", "securite");
	notif->envoyer();

	cout << endl;

	Notification *notif2 = new NotificationSMS("0656432178", "votre code est 4582", "Orange");
	notif2->envoyer();

	cout << endl;


	Notification *notif3 = new NotificationPush("user_102", "paiement confirme", "MyBank");
	notif3->envoyer();

	//creation d'un tableau de notifications
	cout << endl;

	Notification* tab[3];
	tab[0] = notif;
	tab[1] = notif2;
	tab[2] = notif3;

	cout << "afffichage de toutes notification" << endl;
	for (int i = 0;i < 3;i++) {
		cout << "======================" << endl;
		tab[i]->envoyer();
	}

	cout << endl;

	GestionnaireNotifications* gn = new GestionnaireNotifications();
	gn->ajouter(notif);
	gn->ajouter(notif2);
	gn->ajouter(notif3);
	gn->envoyerToutes();

	delete notif;
	cout << endl;
	delete notif2;
} 

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
