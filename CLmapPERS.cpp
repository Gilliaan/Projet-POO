#include "CLmapPERS.h"

System::String^ NS_Comp_Mappage::CLmapPERS::Select_PERS(void)
{
    return "SELECT [id_ppl], [ppl_nom], [ppl_prenom], [ppl_gender], [p_emb_date], [p_sup_emb_date], [p_adresse], [p_sup_name]  FROM [DB_PROJET_POO].[dbo].[TB_PEOPLE] WHERE ppl_type = '" + this->ppl_type + "';";
}
System::String^ NS_Comp_Mappage::CLmapPERS::Insert_PERS(void)
{
    return "INSERT INTO TB_PEOPLE (ppl_nom, ppl_prenom, ppl_type, ppl_gender, p_emb_date, p_sup_emb_date, p_adresse, p_sup_name) VALUES('" + this->ppl_nom + "', '" + this->ppl_prenom + "', '" + this->ppl_type + "', '" + this->ppl_gender + "', '" + this->p_emb_date + "', '" + this->p_sup_emb_date + "', '" + this->p_adresse + "', '" + this->p_sup_name + "'); ";
}
System::String^ NS_Comp_Mappage::CLmapPERS::Delete_PERS(void)
{
    return "DELETE FROM TB_PEOPLE WHERE id_ppl = '" + this->id_ppl + "'; ";
}
System::String^ NS_Comp_Mappage::CLmapPERS::Update_PERS(void)
{
    return "UPDATE TB_PEOPLE SET ppl_nom = '" + this->ppl_nom + "', ppl_prenom = '" + this->ppl_prenom + "', ppl_gender = '"+ this->ppl_gender +"', p_emb_date = '"+ this->p_emb_date +"', p_sup_emb_date = '"+ this->p_sup_emb_date +"', p_adresse = '"+ this->p_adresse +"', p_sup_name = '"+ this->p_sup_name +"'  WHERE id_ppl = " + "'" + this->id_ppl + "'; ";
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
void NS_Comp_Mappage::CLmapPERS::setType(System::String^ PERS)
{
    this->ppl_type = PERS;
}
void NS_Comp_Mappage::CLmapPERS::setGender(System::String^ Gender)
{
    this->ppl_gender = Gender;
}
void NS_Comp_Mappage::CLmapPERS::setEmbDate(System::String^ emb_date)
{
    this->p_emb_date = emb_date;
}
void NS_Comp_Mappage::CLmapPERS::setSupEmbDate(System::String^ sup_emb_date)
{
    this->p_sup_emb_date = sup_emb_date;
}
void NS_Comp_Mappage::CLmapPERS::setAdresse(System::String^ Adresse)
{
    this->p_adresse = Adresse;
}
void NS_Comp_Mappage::CLmapPERS::setSupName(System::String^ sup_name)
{
    this->p_sup_name = sup_name;
}

int NS_Comp_Mappage::CLmapPERS::getId_PERS(void) { return this->id_ppl; }
System::String^ NS_Comp_Mappage::CLmapPERS::getNom_PERS(void) { return this->ppl_nom; }
System::String^ NS_Comp_Mappage::CLmapPERS::getPrenom_PERS(void) { return this->ppl_prenom; }
System::String^ NS_Comp_Mappage::CLmapPERS::getType(void) { return this->ppl_type; }
System::String^ NS_Comp_Mappage::CLmapPERS::getGender(void) { return this->ppl_gender; }
System::String^ NS_Comp_Mappage::CLmapPERS::getEmbDate(void) { return this->p_emb_date; }
System::String^ NS_Comp_Mappage::CLmapPERS::getSupEmbDate(void) { return this->p_sup_emb_date; }
System::String^ NS_Comp_Mappage::CLmapPERS::getAdresse(void) { return this->p_adresse; }
System::String^ NS_Comp_Mappage::CLmapPERS::getSupName(void) { return this->p_sup_name; }