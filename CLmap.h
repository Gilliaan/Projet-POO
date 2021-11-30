#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapTB
	{
	private:
		System::String^ sSql;
		int id_ppl;
		System::String^ ppl_nom;
		System::String^ ppl_prenom;
		System::String^ ppl_type;
		System::String^ ppl_gender;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setType(System::String^);
		void setGender(System::String^);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getType(void);
		System::String^ getGender(void);
	};
}
