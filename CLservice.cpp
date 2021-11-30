#include "CLservice.h"
#include "CLmapStock.h"
//#include "pch.h"
NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();
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
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ adrLivraison , System::String^ adrFacturation,System::String^ dateNaissance, System::String^ datePremierAchat, System::String^ genre, System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappClient->setAdresseFacturation(adrFacturation);
	this->oMappClient->setAdresseLivraison(adrLivraison);
	this->oMappClient->setDateNaissance(dateNaissance);
	this->oMappClient->setDatePremierAchat(datePremierAchat);
	this->oMappClient->setGender(genre);
	this->oMappClient->setNom(nom);
	this->oMappClient->setPrenom(prenom);
	sql = this->oMappClient->InsertClient();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::suprimerUnePersonne(int id)
{
	System::String^ sql;

	this->oMappClient->setId(id);
	sql = this->oMappClient->DeleteClient();

	this->oCad->actionRows(sql);

}
void NS_Comp_Svc::CLservices::modifierUnePersonne(System::String^ nom, System::String^ prenom, int id)
{
	System::String^ sql;

	this->oMappClient->setNom(nom);
	this->oMappClient->setPrenom(prenom);
	this->oMappClient->setId(id);
	sql = this->oMappClient->UpdateClient();

	this->oCad->actionRows(sql);
}