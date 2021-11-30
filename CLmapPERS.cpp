#include "CLmapPERS.h"

System::String^ NS_Comp_Mappage::CLmapPERS::Select_PERS(void)
{
	return "SELECT [id_ppl], [ppl_nom], [ppl_prenom], [ppl_gender], [ppl_type]  FROM [DB_PROJET_POO].[dbo].[TB_PEOPLE] WHERE ppl_type = '" + this->ppl_type + "'";
}
System::String^ NS_Comp_Mappage::CLmapPERS::Insert_PERS(void)
{
	return "INSERT INTO TB_PEOPLE (ppl_nom, ppl_prenom) VALUES('" + this->ppl_nom + "', '" + this->ppl_prenom + "') ";
}
System::String^ NS_Comp_Mappage::CLmapPERS::Delete_PERS(void)
{
	return "DELETE FROM TB_PEOPLE WHERE id_ppl = '" + this->id_ppl + "'; ";
}
System::String^ NS_Comp_Mappage::CLmapPERS::Update_PERS(void)
{
	return "UPDATE TB_PEOPLE SET ppl_nom = '" + this->ppl_nom + "', ppl_prenom = '" + this->ppl_prenom + "' WHERE id_ppl = " + "'" + this->id_ppl + "'; ";
}
void NS_Comp_Mappage::CLmapPERS::setId_PERS(int Id)
{
	this->id_ppl = Id;
}
void NS_Comp_Mappage::CLmapPERS::setNom_PERS(System::String^ nom)
{
	this->ppl_nom = nom;
}
void NS_Comp_Mappage::CLmapPERS::setPrenom_PERS(System::String^ prenom)
{
	this->ppl_prenom = prenom;
}
int NS_Comp_Mappage::CLmapPERS::getId_PERS(void) { return this->id_ppl; }
System::String^ NS_Comp_Mappage::CLmapPERS::getNom_PERS(void) { return this->ppl_nom; }
System::String^ NS_Comp_Mappage::CLmapPERS::getPrenom_PERS(void) { return this->ppl_prenom; }

