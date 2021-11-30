#include "CLservice.h"



NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapcommTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUneCommande(System::String^ ref, System::String^ date_prevue, System::String^ date_emission)
{
	System::String^ sql;

	this->oMappTB->setRef(ref);
	this->oMappTB->setDate_Prevue(date_prevue);
	this->oMappTB->setDate_Emission(date_emission);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::suprimerUneCommande(int id)
{
	System::String^ sql;

	this->oMappTB->setIdComm(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);

}
void NS_Comp_Svc::CLservices::modifierUneCommande(System::String^ ref, System::String^ date_prevue, System::String^ date_emission, int id)
{
	System::String^ sql;

	this->oMappTB->setRef(ref);
	this->oMappTB->setDate_Prevue(date_prevue);
	this->oMappTB->setDate_Emission(date_emission);
	this->oMappTB->setIdComm(id);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}