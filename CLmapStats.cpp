#include "CLmapStats.h"

System::String^ NS_Comp_Mappage::CLmapStats::AffichageRequete1(void)
{
	return "SELECT SUM(com_tot_ht) AS Chiffre_affaire_MARS FROM TB_COMMANDE INNER JOIN TB_PAIEMENT ON  TB_PAIEMENT.id_paiement = TB_COMMANDE.id_com	WHERE MONTH(pai_date) = 3";
}