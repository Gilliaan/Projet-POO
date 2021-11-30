#include "CLservice.h"
//#include "pch.h"
NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerTousLesClients(System::String^ type, System::String^ dataTableName)
{
	System::String^ sql;

	this->oMappTB->setType(type);
	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ dateNaissance, System::String^ datePremierAchat, System::String^ genre, System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappTB->setDateNaissance(dateNaissance);
	this->oMappTB->setDatePremierAchat(datePremierAchat);
	this->oMappTB->setGender(genre);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::suprimerUnePersonne(int id)
{
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);

}
void NS_Comp_Svc::CLservices::modifierUnePersonne(System::String^ nom, System::String^ prenom, int id)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setId(id);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}