#include "CLmapcommTB.h"

System::String^ NS_Comp_Mappage::CLmapcommTB::SelectComm(void)
{
    return "SELECT * FROM [DB_PROJET_POO].[dbo].[TB_COMMANDE]";
}
System::String^ NS_Comp_Mappage::CLmapcommTB::AfficherPaiement(void)
{
    return "SELECT id_paiement, pai_date, pai_moy FROM TB_COMMANDE INNER JOIN TB_PAIEMENT ON TB_COMMANDE.pai_id = TB_PAIEMENT.id_paiement";
}
System::String^ NS_Comp_Mappage::CLmapcommTB::InsertComm(void)
{
    return "INSERT INTO TB_COMMANDE (com_ref, com_date_prevue, com_date_emission, com_tot_ar, com_tot_ht, com_tot_tva, com_tot_ttc, pai_id) VALUES('" + this->com_ref + "','" + this->com_date_prevue + "','" + this->com_date_emission + "','" + this->com_tot_ar + "','" + this->com_tot_ht + "','" + this->com_tot_tva + "','" + this->com_tot_ttc + "','" + this->id_paiement + "');";
}
System::String^ NS_Comp_Mappage::CLmapcommTB::DeleteComm(void)
{
    return "DELETE FROM TB_COMMANDE WHERE id_com = '" + this->id_com + "'; ";
}
System::String^ NS_Comp_Mappage::CLmapcommTB::UpdateComm(void)
{
    return "UPDATE TB_COMMANDE SET com_ref = '" + this->com_ref + "', com_date_prevue = '" + this->com_date_prevue + "', com_date_emission = '" + this->com_date_emission + "', com_tot_ar = '" + this->com_tot_ar + "', com_tot_ht = '" + this->com_tot_ht + "', com_tot_tva = '" + this->com_tot_tva + "', com_tot_ttc = '" + this->com_tot_ttc + "', pai_id = '" + this->id_paiement + "' WHERE id_com = " + "'" + this->id_com + "'; ";
}
void NS_Comp_Mappage::CLmapcommTB::setIdComm(int Id)
{
    this->id_com = Id;
}
void NS_Comp_Mappage::CLmapcommTB::setRef(System::String^ ref)
{
    this->com_ref = ref;
}
void NS_Comp_Mappage::CLmapcommTB::setDate_Prevue(System::String^ date_prevue)
{
    this->com_date_prevue = date_prevue;
}
void NS_Comp_Mappage::CLmapcommTB::setDate_Emission(System::String^ date_emission)
{
    this->com_date_emission = date_emission;
}
void NS_Comp_Mappage::CLmapcommTB::setTot_ar(int tot_ar)
{
    this->com_tot_ar = tot_ar;
}
void NS_Comp_Mappage::CLmapcommTB::setTot_ht(double tot_ht)
{
    this->com_tot_ht = tot_ht;
}
void NS_Comp_Mappage::CLmapcommTB::setTot_tva(double tot_tva)
{
    this->com_tot_tva = tot_tva;
}
void NS_Comp_Mappage::CLmapcommTB::setTot_ttc(double tot_ttc)
{
    this->com_tot_ttc = tot_ttc;
}
void NS_Comp_Mappage::CLmapcommTB::setId_paiement(int idpaiment)
{
    this->id_paiement = idpaiment;
}
int NS_Comp_Mappage::CLmapcommTB::getIdComm(void) { return this->id_com; }
System::String^ NS_Comp_Mappage::CLmapcommTB::getRef(void) { return this->com_ref; }
System::String^ NS_Comp_Mappage::CLmapcommTB::getDate_Prevue(void) { return this->com_date_prevue; }
System::String^ NS_Comp_Mappage::CLmapcommTB::getDate_Emission(void) { return this->com_date_emission; }
int NS_Comp_Mappage::CLmapcommTB::getTot_ar(void) { return this->com_tot_ar; }
double NS_Comp_Mappage::CLmapcommTB::getTot_ht(void) { return this->com_tot_ht; }
double NS_Comp_Mappage::CLmapcommTB::getTot_tva(void) { return this->com_tot_tva; }
double NS_Comp_Mappage::CLmapcommTB::getTot_ttc(void) { return this->com_tot_ttc; }
int NS_Comp_Mappage::CLmapcommTB::getId_paiement(void) { return this->id_paiement; }