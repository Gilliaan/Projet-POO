#include "CLmap.h"
//#include "pch.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT id_ppl, ppl_nom, ppl_prenom, ppl_gender, cl_date_naissance, CL_date_premier_achat, cl_adresse_livraison, cl_adresse_facturation FROM [DB_PROJET_POO].[dbo].[TB_PEOPLE] WHERE ppl_type = '" + this->ppl_type + "';";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO TB_PEOPLE (ppl_nom, ppl_prenom, ppl_type, ppl_gender, cl_date_naissance, CL_date_premier_achat, cl_adresse_livraison, cl_adresse_facturation) VALUES('" + this->ppl_nom + "', '" + this->ppl_prenom + "', '" + this->ppl_type + "', '" + this->ppl_gender + "', '" + this->cl_date_naissance + "','" + this->CL_date_premier_achat + "','" + this->cl_adresse_livraison + "','"+ this->cl_adresse_facturation +"'); ";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM TB_PEOPLE WHERE id_ppl = '" + this->id_ppl + "'; ";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "UPDATE TB_PEOPLE SET ppl_nom = '" + this->ppl_nom + "', ppl_prenom = '" + this->ppl_prenom + "' WHERE id_ppl = " + "'" + this->id_ppl + "'; ";
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->id_ppl = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->ppl_nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->ppl_prenom = prenom;
}
void NS_Comp_Mappage::CLmapTB::setType(System::String^ type)
{
	this->ppl_type = type;
}
void NS_Comp_Mappage::CLmapTB::setGender(System::String^ gender)
{
	this->ppl_gender = gender;
}
void NS_Comp_Mappage::CLmapTB::setDateNaissance(System::String^ dateNaissance)
{
	this->cl_date_naissance = dateNaissance;
}
void NS_Comp_Mappage::CLmapTB::setDatePremierAchat(System::String^ datePremierAchat)
{
	this->CL_date_premier_achat = datePremierAchat;
}
void NS_Comp_Mappage::CLmapTB::setAdresseFacturation(System::String^ adrFacturation)
{
	this->cl_adresse_facturation = adrFacturation;
}
void NS_Comp_Mappage::CLmapTB::setAdresseLivraison(System::String^ adrLivraison)
{
	this->cl_adresse_livraison = adrLivraison;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->id_ppl; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->ppl_nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->ppl_prenom; }
System::String^ NS_Comp_Mappage::CLmapTB::getType(void) { return this->ppl_type; }
System::String^ NS_Comp_Mappage::CLmapTB::getGender(void) { return this->ppl_gender; }
System::String^ NS_Comp_Mappage::CLmapTB::getDateNaissance(void) { return cl_date_naissance; }
System::String^ NS_Comp_Mappage::CLmapTB::getDatePremierAchat(void) { return CL_date_premier_achat; }
System::String^ NS_Comp_Mappage::CLmapTB::getAdresseFacturation(void) { return cl_adresse_facturation; }
System::String^ NS_Comp_Mappage::CLmapTB::getAdresseLivraison(void) { return cl_adresse_livraison; }