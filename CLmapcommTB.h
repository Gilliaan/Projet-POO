#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapcommTB
	{
	private:
		System::String^ sSql;
		int id_com;
		System::String^ com_ref;
		System::String^ com_date_prevue;
		System::String^ com_date_emission;
		int com_tot_ar;
	public:
		System::String^ SelectComm(void);
		System::String^ InsertComm(void);
		System::String^ DeleteComm(void);
		System::String^ UpdateComm(void);
		void setIdComm(int);
		void setRef(System::String^);
		void setDate_Prevue(System::String^);
		void setDate_Emission(System::String^);
		void setTot_ar(int);
		int getIdComm(void);
		System::String^ getRef(void);
		System::String^ getDate_Prevue(void);
		System::String^ getDate_Emission(void);
		int getTot_ar(void);

	};
}

