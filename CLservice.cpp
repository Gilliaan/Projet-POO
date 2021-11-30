#include "CLservice.h"
//#include "pch.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappPERS = gcnew NS_Comp_Mappage::CLmapPERS();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutLePersonnel(System::String^ PERS, System::String^ dataTableName)
{
	System::String^ sql;

	this->oMappPERS->setType(PERS);
	sql = this->oMappPERS->Select_PERS();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnPersonnel(System::String^ nom, System::String^ prenom, System::String^ genre, System::String^ emb_date, System::String^ sup_emb_date, System::String^ adresse, System::String^ sup_name)
{
	System::String^ sql;

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
void NS_Comp_Svc::CLservices::modifierUnPersonnel(System::String^ nom, System::String^ prenom, int id)
{
	System::String^ sql;

	this->oMappPERS->setNom_PERS(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setId(id);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}