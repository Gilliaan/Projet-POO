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
		System::String^ ppl_type;
		System::String^ ppl_gender;
		System::String^ p_emb_date;
		System::String^ p_sup_emb_date;
		System::String^ p_adresse;
		System::String^ p_sup_name;
	public:
		System::String^ Select_PERS(void);
		System::String^ Insert_PERS(void);
		System::String^ Delete_PERS(void);
		System::String^ Update_PERS(void);
		int getId_PERS(void);
		void setId_PERS(int);
		void setNom_PERS(System::String^);
		void setPrenom_PERS(System::String^);
		void setType(System::String^);
		void setGender(System::String^);
		void setEmbDate(System::String^);
		void setSupEmbDate(System::String^);
		void setAdresse(System::String^);
		void setSupName(System::String^);
		System::String^ getNom_PERS(void);
		System::String^ getPrenom_PERS(void);
		System::String^ getType(void);
		System::String^ getGender(void);
		System::String^ getEmbDate(void);
		System::String^ getSupEmbDate(void);
		System::String^ getAdresse(void);
		System::String^ getSupName(void);
	};


}