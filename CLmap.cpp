#include "CLmap.h"
//#include "pch.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT [id_ppl], [ppl_nom], [ppl_prenom] FROM [DB_PROJET_POO].[dbo].[TB_PEOPLE]";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO TB_PEOPLE (ppl_nom, ppl_prenom) VALUES('" + this->ppl_nom + "','" + this->ppl_prenom + "');";
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
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->id_ppl; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->ppl_nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->ppl_prenom; }
