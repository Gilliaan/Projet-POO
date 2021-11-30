#pragma once
#include "CLmap.h"
#include "CLcad.h"
#include "CLmapStock.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapClient^ oMappClient;
		NS_Comp_Mappage::CLmapStock^ oMappStock;
		//System::String^ typec;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTousLesClients(System::String^, System::String^);
		System::Data::DataSet^ selectionnerTousLeStock(System::String^);
		System::Data::DataSet^ afficherAdresseClient(int ,System::String^);
		//Méthodes gestion Clients
		void ajouterUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnClient(int);
		void modifierUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, int);
		void ajouterAdresseClient(System::String^, System::String^, int);
		//Méthodes gestion Stock
		void ajouterUnStock(int, int);
		void supprimerUnStock(int);
		void modifierUnStock(int, int, int);

	};
}
