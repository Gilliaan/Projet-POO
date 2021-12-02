#include "CLmapStats.h"
//Chiffre d'affaire sur un mois
System::String^ NS_Comp_Mappage::CLmapStats::AffichageRequete1(void)
{
	return "SELECT SUM(com_tot_ht) AS Chiffre_Affaire_Mars FROM TB_COMMANDE INNER JOIN TB_PAIEMENT ON  TB_COMMANDE.id_com = TB_PAIEMENT.com_id WHERE MONTH('" + this->mois_stats + "') = 03";
}
//Valeur commerciale du stock
System::String^ NS_Comp_Mappage::CLmapStats::AffichageRequete2(void)
{
	return "SELECT SUM(art_prix_ht*st_prod_quantite) AS Valeur_com_stock FROM TB_STOCK";
}
//Produit sous le seuil de réaprovisionnement
System::String^ NS_Comp_Mappage::CLmapStats::AffichageRequete3(void)
{
	return "SELECT art_name,st_prod_quantite, st_seuil_reap FROM TB_STOCK WHERE(st_prod_quantite < st_seuil_reap) ";
}
//Montant total des achats pour un client
System::String^ NS_Comp_Mappage::CLmapStats::AffichageRequete4(void)
{
	return "SELECT com_tot_ttc AS Montant_total_achat_client_1 FROM TB_COMMANDE	WHERE('"+this->id_cl_stats +"' = 1) ";
}
//Valeur d'achat du stock
System::String^ NS_Comp_Mappage::CLmapStats::AffichageRequete5(void)
{
	return "SELECT SUM(art_prix_achat*st_prod_quantite) AS Valeur_achat_stock FROM TB_STOCK";
}

void NS_Comp_Mappage::CLmapStats::setIdClStats(int id)
{
	this->id_cl_stats = id;
}
void NS_Comp_Mappage::CLmapStats::setMoisStats(System::String^ mois)
{
	this->mois_stats = mois;
}
int NS_Comp_Mappage::CLmapStats::getIdClStats(void) { return this->id_cl_stats; }
System::String^ NS_Comp_Mappage::CLmapStats::getMoisStats(void) { return this->mois_stats; }