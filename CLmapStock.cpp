#include "CLmapStock.h"
System::String^ NS_Comp_Mappage::CLmapStock::SelectStock(void)
{
	//return "SELECT st_id, st_prod_quantite, st_seuil_reap FROM [DB_PROJET_POO].[dbo].[TB_STOCK]";
	return "SELECT st_id,art_ref,art_name,art_prix_ht,art_taux_tva,st_prod_quantite,st_seuil_reap FROM TB_STOCK INNER JOIN TB_ARTICLES ON TB_STOCK.ar_id = TB_ARTICLES.id_art";
}
System::String^ NS_Comp_Mappage::CLmapStock::InsertStock(void)
{
	return "INSERT INTO TB_STOCK (st_prod_quantite, st_seuil_reap, ar_id) '"
		+ "', VALUES('" + this->st_prod_quantite + "', '" + this->st_seuil_reap + "', '" + this->ar_id + "'); '"
		+ "', INSERT INTO TB_ARTICLES (art_ref,art_name,art_prix_ht,taux_tva) '"
		+ "', VALUES('"+ +"');";
}
System::String^ NS_Comp_Mappage::CLmapStock::DeleteStock(void)
{
	return "DELETE FROM TB_STOCK WHERE st_id = '" + this->id_stock + "'; ";
}
System::String^ NS_Comp_Mappage::CLmapStock::UpdateStock(void)
{
	return "UPDATE TB_PEOPLE SET st_prod_quantite = '" 
		+ this->st_prod_quantite + "', st_seuil_reap = '" 
		+ this->st_seuil_reap + "', ar_id = '"
		+ this->ar_id +"' WHERE st_id = " + "'" + this->id_stock + "'; ";
}
void NS_Comp_Mappage::CLmapStock::setIdStock(int Id)
{
	this->id_stock = Id;
}
void NS_Comp_Mappage::CLmapStock::setStockQuantite(int quantite)
{
	this->st_prod_quantite = quantite;
}
void NS_Comp_Mappage::CLmapStock::setSeuilReap(int seuil)
{
	this->st_seuil_reap = seuil;
}
void NS_Comp_Mappage::CLmapStock::setIdArticle(int idArticle)
{
	this->ar_id = idArticle;
}
int NS_Comp_Mappage::CLmapStock::getIdStock(void) { return this->id_stock; }
int NS_Comp_Mappage::CLmapStock::getStockQuantite(void) { return this->st_prod_quantite; }
int NS_Comp_Mappage::CLmapStock::getSeuilReap(void) { return this->st_seuil_reap; }
int NS_Comp_Mappage::CLmapStock::getIdArticle(void) { return this->ar_id; }