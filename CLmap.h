#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapClient
	{
	private:
		System::String^ sSql;
		int id_ppl;
		System::String^ ppl_nom;
		System::String^ ppl_prenom;
		System::String^ ppl_type;
		System::String^ ppl_gender;
		System::String^ cl_date_naissance;
		System::String^ CL_date_premier_achat;
		System::String^ cl_adresse_livraison;
		System::String^ cl_adresse_facturation;
	public:
		System::String^ SelectClient(void);
		System::String^ InsertClient(void);
		System::String^ DeleteClient(void);
		System::String^ UpdateClient(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setType(System::String^);
		void setGender(System::String^);
		void setDateNaissance(System::String^);
		void setDatePremierAchat(System::String^);
		void setAdresseLivraison(System::String^);
		void setAdresseFacturation(System::String^);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getType(void);
		System::String^ getGender(void);
		System::String^ getDateNaissance(void);
		System::String^ getDatePremierAchat(void);
		System::String^ getAdresseLivraison(void);
		System::String^ getAdresseFacturation(void);
	};
}