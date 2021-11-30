#pragma once
#include "CLmap.h"
#include "CLcad.h"
#include <iostream>
#include "CLmapPERS.h"

using namespace std;

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
		NS_Comp_Mappage::CLmapPERS^ oMappPERS;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		System::Data::DataSet^ selectionnerToutLePersonnel(System::String^, System::String^);
		void ajouterUnPersonnel(System::String^, System::String^);
		void suprimerUnPersonnel(int);
		void modifierUnPersonnel(System::String^, System::String^ , int);

	};
}
