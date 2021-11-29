#include "CLmap.h"
//#include "pch.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT [id_people], [nom], [prenom], [adr_facturation], [adr_livraison], [date_naissance] FROM [DB_PROJET_POO].[dbo].[TB_PEOPLE]";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO TB_PEOPLE (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM (TB_PEOPLE) WHERE (id_people) = ('" + this->id_people + "'); ";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "";
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->id_people = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->id_people; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
