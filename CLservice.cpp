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
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutLePersonnel(System::String^ Type,System::String^ dataTableName)
{
	System::String^ sql;

	this->oMappPERS->setType(Type);
	sql = this->oMappPERS->Select_PERS();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnPersonnel(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappPERS->setNom_PERS(nom);
	this->oMappPERS->setPrenom_PERS(prenom);
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