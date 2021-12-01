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
        double com_tot_ht;
        double com_tot_tva;
        double com_tot_ttc;
        int id_paiement;
    public:
        System::String^ SelectComm(void);
        System::String^ InsertComm(void);
        System::String^ DeleteComm(void);
        System::String^ UpdateComm(void);
        System::String^ AfficherArticleComm(void);
        //System::String^ AjouterArticleComm(void);
        void setIdComm(int);
        void setRef(System::String^);
        void setDate_Prevue(System::String^);
        void setDate_Emission(System::String^);
        void setTot_ar(int);
        void setTot_ht(double);
        void setTot_tva(double);
        void setTot_ttc(double);
        void setId_paiement(int);
        int getIdComm(void);
        System::String^ getRef(void);
        System::String^ getDate_Prevue(void);
        System::String^ getDate_Emission(void);
        int getTot_ar(void);
        double getTot_ht(void);
        double getTot_tva(void);
        double getTot_ttc(void);
        int getId_paiement(void);
    };
}