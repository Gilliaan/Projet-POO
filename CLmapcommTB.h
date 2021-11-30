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
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setIdComm(int);
		void setRef(System::String^);
		void setDate_Prevue(System::String^);
		void setDate_Emission(System::String^);
		int getIdComm(void);
		System::String^ getRef(void);
		System::String^ getDate_Prevue(void);
		System::String^ getDate_Emission(void);
	};
}

