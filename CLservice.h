#pragma once
#include "CLmap.h"
#include "CLcad.h"
#include "CLmapStock.h"
#include "CLmapPERS.h"
#include "CLmapcommTB.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapClient^ oMappClient;
		NS_Comp_Mappage::CLmapStock^ oMappStock;
		NS_Comp_Mappage::CLmapPERS^ oMappPERS;
		NS_Comp_Mappage::CLmapcommTB^ oMappComm;
		//System::String^ typec;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTousLesClients(System::String^, System::String^);
		System::Data::DataSet^ selectionnerTousLeStock(System::String^);
		System::Data::DataSet^ selectionnerToutLePersonnel(System::String^, System::String^);
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
		System::Data::DataSet^ afficherAdresseClient(int ,System::String^);
		System::Data::DataSet^ afficherArticleComm(int, System::String^);
		//Méthodes gestion Clients
		void ajouterUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnClient(int);
		void modifierUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, int);
		void ajouterAdresseClient(System::String^, System::String^, int);
		//Méthodes gestion Stock
		void ajouterUnStock(int, System::String^, int, int, int, int,int);
		void supprimerUnStock(int);
		void modifierUnStock(int, System::String^, int, int, int, int, int,int);
		//Méthodes gestion personnel
		void ajouterUnPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void suprimerUnPersonnel(int);
		void modifierUnPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int);
		//Méthodes gestion Commandes
		void ajouterUneCommande(System::String^, System::String^, System::String^, int, double, double, double);
		void suprimerUneCommande(int);
		void modifierUneCommande(System::String^, System::String^, System::String^, int, double, double, double, int);
		//Load Data
	};
}
