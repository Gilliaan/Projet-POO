#pragma once
#include "CLmap.h"
#include "CLcad.h"
#include <iostream>

using namespace std;

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
		System::String^ typec;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerTousLesClients(System::String^, System::String^);
		void ajouterUnePersonne(System::String^, System::String^, System::String^);
		void suprimerUnePersonne(int);
		void modifierUnePersonne(System::String^, System::String^ , int);
	};
}
