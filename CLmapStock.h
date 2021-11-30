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
		int ar_id;

	public:
		System::String^ SelectStock(void);
		System::String^ InsertStock(void);
		System::String^ DeleteStock(void);
		System::String^ UpdateStock(void);
		void setIdStock(int);
		void setStockQuantite(int);
		void setSeuilReap(int);
		void setIdArticle(int);
		int getIdStock(void);
		int getStockQuantite(void);
		int getSeuilReap(void);
		int getIdArticle(void);
	};
}
