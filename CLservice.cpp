#include "CLservice.h"
#include "CLmapStock.h"
#include "CLmapcommTB.h"

//#include "pch.h"
NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();
	this->oMappStock = gcnew NS_Comp_Mappage::CLmapStock();
	this->oMappPERS = gcnew NS_Comp_Mappage::CLmapPERS();
	this->oMappComm = gcnew NS_Comp_Mappage::CLmapcommTB();
}
//Sélectionner et afficher tous les clients de la table PEOPLE
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerTousLesClients(System::String^ type, System::String^ dataTableName)
{
	System::String^ sql;

	this->oMappClient->setType(type);
	sql = this->oMappClient->SelectClient();
	return this->oCad->getRows(sql, dataTableName);
}
//Sélectionner et afficher tous le stock de la table STOCK
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerTousLeStock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStock->SelectStock();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutLePersonnel(System::String^ PERS, System::String^ dataTableName)
{
	System::String^ sql;

	this->oMappPERS->setType(PERS);
	sql = this->oMappPERS->Select_PERS();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesCommandes(System::String^ dataTablecom)
{
	System::String^ sql;

	sql = this->oMappComm->SelectComm();
	return this->oCad->getRows(sql, dataTablecom);
}
//Sélectionner et afficher les adresses clients
System::Data::DataSet^ NS_Comp_Svc::CLservices::afficherAdresseClient(int id, System::String^ dataTableName)
{
	System::String^ sql;

	this->oMappClient->setId(id);
	sql = this->oMappClient->AffichageAdrCl();
	return this->oCad->getRows(sql, dataTableName);
}
//Méthodes Gestion d'un client
void NS_Comp_Svc::CLservices::ajouterUnClient(System::String^ type, System::String^ dateNaissance, System::String^ datePremierAchat, System::String^ genre, System::String^ nom, System::String^ prenom) {
	System::String^ sql;

	this->oMappClient->setType(type);
	this->oMappClient->setDateNaissance(dateNaissance);
	this->oMappClient->setDatePremierAchat(datePremierAchat);
	this->oMappClient->setGender(genre);
	this->oMappClient->setNom(nom);
	this->oMappClient->setPrenom(prenom);
	sql = this->oMappClient->InsertClient();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::supprimerUnClient(int id) {
	System::String^ sql;

	this->oMappClient->setId(id);
	sql = this->oMappClient->DeleteClient();

	this->oCad->actionRows(sql);

}
void NS_Comp_Svc::CLservices::modifierUnClient(System::String^ dateNaissance, System::String^ datePremierAchat, System::String^ genre, System::String^ nom, System::String^ prenom, int id)
{
	System::String^ sql;

	this->oMappClient->setDateNaissance(dateNaissance);
	this->oMappClient->setDatePremierAchat(datePremierAchat);
	this->oMappClient->setGender(genre);
	this->oMappClient->setNom(nom);
	this->oMappClient->setPrenom(prenom);
	this->oMappClient->setId(id);
	sql = this->oMappClient->UpdateClient();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::ajouterAdresseClient(System::String^ adrLivraison, System::String^ adrFacturation, int id)
{
	System::String^ sql;
	this->oMappClient->setId(id);
	this->oMappClient->setAdresseFacturation(adrFacturation);
	this->oMappClient->setAdresseLivraison(adrLivraison);
	sql = this->oMappClient->AjouterAdrCl();

	this->oCad->actionRows(sql);
}
//Méthodes gestion du stock
void NS_Comp_Svc::CLservices::ajouterUnStock(int ref, System::String^ nom,int prixht,int tauxtva,int prodQuantite, int seuil,int com_id) {
	System::String^ sql;

	this->oMappStock->setIdCom(com_id);
	this->oMappStock->setArtName(nom);
	this->oMappStock->setArtPrixHt(prixht);
	this->oMappStock->setArtRef(ref);
	this->oMappStock->setArtTauxTva(tauxtva);
	this->oMappStock->setStockQuantite(prodQuantite);
	this->oMappStock->setSeuilReap(seuil);
	sql = this->oMappStock->InsertStock();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::supprimerUnStock(int id)
{
	System::String^ sql;

	this->oMappStock->setIdStock(id);
	sql = this->oMappStock->DeleteStock();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::modifierUnStock(int ref, System::String^ nom ,int prixht,int tauxtva, int prodQuantite, int seuil, int id,int com_id)
{
	System::String^ sql;

	this->oMappStock->setIdCom(com_id);
	this->oMappStock->setArtName(nom);
	this->oMappStock->setArtPrixHt(prixht);
	this->oMappStock->setArtRef(ref);
	this->oMappStock->setArtTauxTva(tauxtva);
	this->oMappStock->setStockQuantite(prodQuantite);
	this->oMappStock->setSeuilReap(seuil);
	this->oMappStock->setIdStock(id);
	sql = this->oMappStock->UpdateStock();

	this->oCad->actionRows(sql);
}
//Méthodes gestion du personnel
void NS_Comp_Svc::CLservices::ajouterUnPersonnel(System::String^ type,System::String^ nom, System::String^ prenom, System::String^ genre, System::String^ emb_date, System::String^ sup_emb_date, System::String^ adresse, System::String^ sup_name)
{
	System::String^ sql;

	this->oMappPERS->setType(type);
	this->oMappPERS->setNom_PERS(nom);
	this->oMappPERS->setPrenom_PERS(prenom);
	this->oMappPERS->setGender(genre);
	this->oMappPERS->setEmbDate(emb_date);
	this->oMappPERS->setSupEmbDate(sup_emb_date);
	this->oMappPERS->setAdresse(adresse);
	this->oMappPERS->setSupName(sup_name);
	sql = this->oMappPERS->Insert_PERS();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::suprimerUnPersonnel(int id)
{
	System::String^ sql;

	this->oMappPERS->setId_PERS(id);
	sql = this->oMappPERS->Delete_PERS();

	this->oCad->actionRows(sql);

}
void NS_Comp_Svc::CLservices::modifierUnPersonnel(System::String^ nom, System::String^ prenom, System::String^ genre, System::String^ emb_date, System::String^ sup_emb_date, System::String^ adresse, System::String^ sup_name, int id)
{
	System::String^ sql;

	this->oMappPERS->setNom_PERS(nom);
	this->oMappPERS->setPrenom_PERS(prenom);
	this->oMappPERS->setGender(genre);
	this->oMappPERS->setEmbDate(emb_date);
	this->oMappPERS->setSupEmbDate(sup_emb_date);
	this->oMappPERS->setAdresse(adresse);
	this->oMappPERS->setSupName(sup_name);
	this->oMappPERS->setId_PERS(id);
	sql = this->oMappPERS->Update_PERS();

	this->oCad->actionRows(sql);
}
//Méthodes gestion des commandes
void NS_Comp_Svc::CLservices::ajouterUneCommande(System::String^ ref, System::String^ date_prevue, System::String^ date_emission, int tot_ar, double tot_ht, double tot_tva, double tot_ttc)
{
	System::String^ sql;

	this->oMappComm->setRef(ref);
	this->oMappComm->setDate_Prevue(date_prevue);
	this->oMappComm->setDate_Emission(date_emission);
	this->oMappComm->setTot_ar(tot_ar);
	this->oMappComm->setTot_ht(tot_ht);
	this->oMappComm->setTot_tva(tot_tva);
	this->oMappComm->setTot_ttc(tot_ttc);
	sql = this->oMappComm->InsertComm();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::suprimerUneCommande(int id)
{
	System::String^ sql;

	this->oMappComm->setIdComm(id);
	sql = this->oMappComm->DeleteComm();

	this->oCad->actionRows(sql);

}
void NS_Comp_Svc::CLservices::modifierUneCommande(System::String^ ref, System::String^ date_prevue, System::String^ date_emission, int tot_ar, double tot_ht, double tot_tva, double tot_ttc, int id)
{
	System::String^ sql;

	this->oMappComm->setRef(ref);
	this->oMappComm->setDate_Prevue(date_prevue);
	this->oMappComm->setDate_Emission(date_emission);
	this->oMappComm->setTot_ar(tot_ar);
	this->oMappComm->setTot_ht(tot_ht);
	this->oMappComm->setTot_tva(tot_tva);
	this->oMappComm->setTot_ttc(tot_ttc);
	this->oMappComm->setIdComm(id);
	sql = this->oMappComm->UpdateComm();

	this->oCad->actionRows(sql);
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::afficherArticleComm(int id, System::String^ dataTableName)
{
	System::String^ sql;

	this->oMappComm->setIdComm(id);
	sql = this->oMappComm->AfficherArticleComm();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::afficherRequete1(System::String^ mois, System::String^ dataTableName)
{
	System::String^ sql;

	this->oMappStats->setMoisStats(mois);
	sql = this->oMappStats->AffichageRequete1();
	return this->oCad->getRows(sql, dataTableName);
	
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::afficherRequete2(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->AffichageRequete2();
	return this->oCad->getRows(sql, dataTableName);

}
System::Data::DataSet^ NS_Comp_Svc::CLservices::afficherRequete3(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->AffichageRequete3();
	return this->oCad->getRows(sql, dataTableName);

}
System::Data::DataSet^ NS_Comp_Svc::CLservices::afficherRequete4(int id, System::String^ dataTableName)
{
	System::String^ sql;

	this->oMappStats->setIdClStats(id);
	sql = this->oMappStats->AffichageRequete4();
	return this->oCad->getRows(sql, dataTableName);

}
System::Data::DataSet^ NS_Comp_Svc::CLservices::afficherRequete5(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappStats->AffichageRequete5();
	return this->oCad->getRows(sql, dataTableName);

}