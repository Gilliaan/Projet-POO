#include "CLmapStats.h"

System::String^ NS_Comp_Mappage::CLmapStats::AffichageRequete1(void)
{
	return "SELECT SUM(com_tot_ht) AS Chiffre_Affaire_Mars FROM TB_COMMANDE INNER JOIN TB_PAIEMENT ON  TB_COMMANDE.id_com = TB_PAIEMENT.com_id WHERE MONTH(pai_date) = 03";
}