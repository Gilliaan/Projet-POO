#pragma once
#include "CLmapcommTB.h"
#include "CLcad.h"
#include <iostream>

using namespace std;

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapcommTB^ oMappComm;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
		void ajouterUneCommande(System::String^, System::String^, System::String^, int, double, double, double, int);
		void suprimerUneCommande(int);
		void modifierUneCommande(System::String^, System::String^, System::String^, int, double, double, double, int, int);
	};
}
