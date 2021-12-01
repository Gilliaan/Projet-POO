#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapStock
	{
	private:
		System::String^ sSql;
		int id_stock;
		int st_prod_quantite;
		int st_seuil_reap;
		int art_ref;
		System::String^ art_name;
		//int art_designation;
		double art_prix_ht;
		double art_taux_tva;
	public:
		System::String^ SelectStock(void);
		System::String^ InsertStock(void);
		System::String^ DeleteStock(void);
		System::String^ UpdateStock(void);
		void setIdStock(int);
		void setStockQuantite(int);
		void setSeuilReap(int);
		void setArtRef(int);
		void setArtName(System::String^);
		//void setArtDesignation(int);
		void setArtPrixHt(double);
		void setArtTauxTva(double);
		int getIdStock(void);
		int getStockQuantite(void);
		int getSeuilReap(void);
		int getArtRef(void);
		System::String^ getArtName(void);
		//int getArtDesignation(void);
		double getArtPrixHt(void);
		double getArtTauxTva(void);
	};
}
