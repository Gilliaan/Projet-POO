#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapStats
	{
	private:
		System::String^ sSql;
		System::String^ mois_stats;
		int id_cl_stats;
	public:
		System::String^ AffichageRequete1(void);
		System::String^ AffichageRequete2(void);
		System::String^ AffichageRequete3(void);
		System::String^ AffichageRequete4(void);
		System::String^ AffichageRequete5(void);
		System::String^ AffichageRequete6(void);
		System::String^ AffichageRequete7(void);
		void setIdClStats(int);
		void setMoisStats(System::String^);
		int getIdClStats(void);
		System::String^ getMoisStats(void);
	};
}
