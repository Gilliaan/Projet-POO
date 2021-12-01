#include "CLmapStock.h"
System::String^ NS_Comp_Mappage::CLmapStock::SelectStock(void)
{
	//return "SELECT st_id, st_prod_quantite, st_seuil_reap FROM [DB_PROJET_POO].[dbo].[TB_STOCK]";
	return "SELECT st_id,art_ref,art_name,art_prix_ht,art_taux_tva,st_prod_quantite,st_seuil_reap,com_id FROM TB_STOCK";
}
System::String^ NS_Comp_Mappage::CLmapStock::InsertStock(void)
{
	return "INSERT INTO TB_STOCK (art_ref, art_name, art_prix_ht, art_taux_tva, st_prod_quantite, st_seuil_reap,com_id) VALUES('"+ this->art_ref +"','"+ this->art_name +"','"+ this->art_prix_ht +"', '"+ this->art_taux_tva +"', '" + this->st_prod_quantite + "', '" + this->st_seuil_reap + "', '"+this->com_id+"'); ";
}
System::String^ NS_Comp_Mappage::CLmapStock::DeleteStock(void)
{
	return "DELETE FROM TB_STOCK WHERE st_id = '" + this->st_id + "'; ";
}
System::String^ NS_Comp_Mappage::CLmapStock::UpdateStock(void)
{
	return "UPDATE TB_STOCK SET st_prod_quantite = '"+ this->st_prod_quantite + "', st_seuil_reap = '"+ this->st_seuil_reap + "', art_ref = '"+ this->art_ref + "', art_name = '"+ this->art_name +"', art_prix_ht = '"+ this->art_prix_ht + "', art_taux_tva = '"+ this->art_taux_tva + "', com_id = '"+this->com_id+"' WHERE st_id = '" + this->st_id + "'; ";
}

void NS_Comp_Mappage::CLmapStock::setIdStock(int Id)
{
	this->st_id = Id;
}
void NS_Comp_Mappage::CLmapStock::setStockQuantite(int quantite)
{
	this->st_prod_quantite = quantite;
}
void NS_Comp_Mappage::CLmapStock::setSeuilReap(int seuil)
{
	this->st_seuil_reap = seuil;
}
void NS_Comp_Mappage::CLmapStock::setArtRef(int ref)
{
	this->art_ref = ref;
}
void NS_Comp_Mappage::CLmapStock::setArtName(System::String^ name)
{
	this->art_name = name;
}
void NS_Comp_Mappage::CLmapStock::setArtPrixHt(int prixht)
{
	this->art_prix_ht = prixht;
}
void NS_Comp_Mappage::CLmapStock::setArtTauxTva(int tauxtva)
{
	this->art_taux_tva = tauxtva;
}
void NS_Comp_Mappage::CLmapStock::setIdCom(int id)
{
	this->com_id = id;
}
int NS_Comp_Mappage::CLmapStock::getIdStock(void) { return this->st_id; }
int NS_Comp_Mappage::CLmapStock::getStockQuantite(void) { return this->st_prod_quantite; }
int NS_Comp_Mappage::CLmapStock::getSeuilReap(void) { return this->st_seuil_reap; }
//int NS_Comp_Mappage::CLmapStock::getArtDesignation(void) { return this->art_designation; }
System::String^ NS_Comp_Mappage::CLmapStock::getArtName(void) { return this->art_name; }
int NS_Comp_Mappage::CLmapStock::getArtPrixHt(void) { return this->art_prix_ht; }
int NS_Comp_Mappage::CLmapStock::getArtTauxTva(void) { return this->art_taux_tva; }
int NS_Comp_Mappage::CLmapStock::getArtRef(void) { return this->art_ref; }
int NS_Comp_Mappage::CLmapStock::getIdCom(void) { return this->com_id; }