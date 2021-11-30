#include "CLservice.h"



NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappComm = gcnew NS_Comp_Mappage::CLmapcommTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesCommandes(System::String^ dataTablecom)
{
	System::String^ sql;

	sql = this->oMappComm->SelectComm();
	return this->oCad->getRows(sql, dataTablecom);
}
void NS_Comp_Svc::CLservices::ajouterUneCommande(System::String^ ref, System::String^ date_prevue, System::String^ date_emission, int tot_ar)
{
	System::String^ sql;

	this->oMappComm->setRef(ref);
	this->oMappComm->setDate_Prevue(date_prevue);
	this->oMappComm->setDate_Emission(date_emission);
	this->oMappComm->setTot_ar(tot_ar);
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
void NS_Comp_Svc::CLservices::modifierUneCommande(System::String^ ref, System::String^ date_prevue, System::String^ date_emission, int tot_ar, int id)
{
	System::String^ sql;

	this->oMappComm->setRef(ref);
	this->oMappComm->setDate_Prevue(date_prevue);
	this->oMappComm->setDate_Emission(date_emission);
	this->oMappComm->setTot_ar(tot_ar);
	this->oMappComm->setIdComm(id);
	sql = this->oMappComm->UpdateComm();

	this->oCad->actionRows(sql);
}