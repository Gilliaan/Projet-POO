#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapStock
	{
	private:
		System::String^ sSql;
		int st_id;
		int st_prod_quantite;
		int st_seuil_reap;
		int art_ref;
		System::String^ art_name;
		//int art_designation;
		int art_prix_ht;
		int art_taux_tva;
		int com_id;
	public:
		System::String^ SelectStock(void);
		System::String^ InsertStock(void);
		System::String^ DeleteStock(void);
		System::String^ UpdateStock(void);
		void setIdStock(int);
		void setIdCom(int);
		void setStockQuantite(int);
		void setSeuilReap(int);
		void setArtRef(int);
		void setArtName(System::String^);
		//void setArtDesignation(int);
		void setArtPrixHt(int);
		void setArtTauxTva(int);
		int getIdCom(void);
		int getIdStock(void);
		int getStockQuantite(void);
		int getSeuilReap(void);
		int getArtRef(void);
		System::String^ getArtName(void);
		//int getArtDesignation(void);
		int getArtPrixHt(void);
		int getArtTauxTva(void);
	};
}
