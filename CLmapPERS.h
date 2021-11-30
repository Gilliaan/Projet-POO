#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapPERS
	{
	private:
		System::String^ sSql;
		int id_ppl;
		System::String^ ppl_nom;
		System::String^ ppl_prenom;
	public:
		System::String^ Select_PERS(void);
		System::String^ Insert_PERS(void);
		System::String^ Delete_PERS(void);
		System::String^ Update_PERS(void);
		void setId_PERS(int);
		void setNom_PERS(System::String^);
		void setPrenom_PERS(System::String^);
		int getId_PERS(void);
		System::String^ getNom_PERS(void);
		System::String^ getPrenom_PERS(void);
	};

}