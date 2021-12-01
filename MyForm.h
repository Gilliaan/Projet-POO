#pragma once
#include "CLservice.h"
#include <string>
namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_cl;
	protected:
	private: System::Windows::Forms::Button^ btn_inserer_cl;
	private: System::Windows::Forms::Button^ btn_supprimer_cl;
	private: System::Windows::Forms::Button^ btn_modifier_cl;
	protected:
	private: System::Windows::Forms::TextBox^ txt_id_cl;
	private: System::Windows::Forms::TextBox^ txt_nom_cl;
	private: System::Windows::Forms::TextBox^ txt_prenom_cl;
	protected:
	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ lbl_id_cl;
	private: System::Windows::Forms::Label^ lbl_prenom_cl;
	private: System::Windows::Forms::Label^ lbl_nom_cl;
	private: System::Windows::Forms::TabControl^ tabPage_comm;
	private: System::Windows::Forms::TabPage^ tabPage_cl;
	private: System::Windows::Forms::TabPage^ tabPage_pers;
   	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage_stck;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::ListBox^ list_console_cl;
	private: System::Windows::Forms::TextBox^ txt_type_cl;
	private: System::Windows::Forms::Label^ lbl_date_naissance_cl;
	private: System::Windows::Forms::TextBox^ txt_date_naissance_cl;
	private: System::Windows::Forms::Label^ lbl_adr_facturation_cl;
	private: System::Windows::Forms::Label^ lbl_adr_livraison_cl;
	private: System::Windows::Forms::TextBox^ txt_adr_facturation_cl;
	private: System::Windows::Forms::TextBox^ txt_adr_livraison_cl;
	private: System::Windows::Forms::Label^ lbl_genre_cl;
	private: System::Windows::Forms::TextBox^ txt_genre_cl;
	private: System::Windows::Forms::Label^ lbl_type_personne_cl;
	private: System::Windows::Forms::Label^ lbl_date_premier_achat_cl;
	private: System::Windows::Forms::TextBox^ txt_date_premier_achat_cl;
	private: System::Windows::Forms::Label^ lbl_console_cl;
	private: System::Windows::Forms::DataGridView^ dgv_stck;
	private: System::Windows::Forms::Button^ btn_modifier_stck;
	private: System::Windows::Forms::Button^ btn_supprimer_stck;
	private: System::Windows::Forms::Button^ btn_inserer_stck;
	private: System::Windows::Forms::TextBox^ txt_quantite_produit_stck;
	private: System::Windows::Forms::TextBox^ txt_id_stck;
	private: System::Windows::Forms::Label^ lbl_id_stck;
	private: System::Windows::Forms::Label^ lbl_seuil_reap_stck;
	private: System::Windows::Forms::Label^ lbl_stock_quantite_stck;
	private: System::Windows::Forms::TextBox^ txt_seuil_reap_stck;
	private: System::Windows::Forms::Label^ lbl_console_stck;
	private: System::Windows::Forms::ListBox^ list_console_stck;
	private: System::Windows::Forms::DataGridView^ dgv_aff_adr_cl;
	private: System::Windows::Forms::Button^ aff_adr_cl;
	private: System::Windows::Forms::Button^ ajt_adr_cl;
	private: System::Windows::Forms::Label^ lbl_dgv_adresse_cl;
	private: System::Windows::Forms::TextBox^ txt_taux_tva_art;
	private: System::Windows::Forms::Label^ lbl_tva_art;
	private: System::Windows::Forms::Label^ lbl_prixht_art;
	private: System::Windows::Forms::Label^ lbl_nom_art;
	private: System::Windows::Forms::Label^ lbl_ref_art;
	private: System::Windows::Forms::TextBox^ txt_prixht_art;
	private: System::Windows::Forms::TextBox^ txt_nom_art;
	private: System::Windows::Forms::TextBox^ txt_ref_art;
	private: System::Windows::Forms::Button^ btn_insert_pers;
		   //Gestion Personnel

	private: System::Windows::Forms::DataGridView^ dgv_pers;
	private: System::Windows::Forms::Button^ btn_del_pres;


	private: System::Windows::Forms::Button^ btn_update_pers;

	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ lbl_adr_pers;
	private: System::Windows::Forms::TextBox^ txt_genre_pers;


	private: System::Windows::Forms::Label^ lbl_genre_pers;

	private: System::Windows::Forms::Label^ lbl_prenom_pers;
	private: System::Windows::Forms::TextBox^ txt_prenom_pers;


	private: System::Windows::Forms::Label^ lbl_nom_pers;
	private: System::Windows::Forms::TextBox^ txt_nom_pers;


	private: System::Windows::Forms::Label^ lbl_id_pers;
	private: System::Windows::Forms::TextBox^ txt_id_pers;


	private: System::Windows::Forms::TextBox^ txt_type_pers;
private: System::Windows::Forms::Label^ lbl_type_pers;
private: System::Windows::Forms::TextBox^ txt_date_emb_sup_pers;


private: System::Windows::Forms::TextBox^ txt_nom_sup_pers;

private: System::Windows::Forms::TextBox^ txt_date_emb_pers;

private: System::Windows::Forms::TextBox^ txt_adr_pers;
private: System::Windows::Forms::Label^ lbl_date_emb_sup_pers;


private: System::Windows::Forms::Label^ lbl_nom_sup_pers;

private: System::Windows::Forms::Label^ lbl_date_emb_pers;

	private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::DataGridView^ dgv_comm;
private: System::Windows::Forms::TextBox^ txt_ht_comm;
	   // Gestion des COmmandes



private: System::Windows::Forms::TextBox^ txt_ref_comm;
private: System::Windows::Forms::TextBox^ txt_date_em_comm;



private: System::Windows::Forms::TextBox^ txt_date_prevu_comm;







	private: System::Windows::Forms::Button^ btn_del_comm;

	private: System::Windows::Forms::Button^ btn_modif_comm;
	private: System::Windows::Forms::Button^ btn_inser_comm;
	private: System::Windows::Forms::Label^ label_date_em_comm;

	private: System::Windows::Forms::Label^ label_date_prevu_comm;
	private: System::Windows::Forms::Label^ label_id_paiement_comm;


	private: System::Windows::Forms::Label^ label_ttc_comm;

	private: System::Windows::Forms::Label^ label_tva_comm;

	private: System::Windows::Forms::Label^ label_ref_comm;
	private: System::Windows::Forms::Label^ label_ht_comm;
	private: System::Windows::Forms::Label^ label_article_comm;
private: System::Windows::Forms::TextBox^ txt_article_comm;
private: System::Windows::Forms::TextBox^ txt_tva_comm;
private: System::Windows::Forms::TextBox^ txt_id_paiement_comm;



private: System::Windows::Forms::TextBox^ txt_ttc_comm;









private: System::Windows::Forms::Label^ label_id_comm;
private: System::Windows::Forms::TextBox^ txt_id_comm;


private: System::Windows::Forms::Label^ label_console_comm;
private: System::Windows::Forms::ListBox^ listBox_console_comm;
private: System::Windows::Forms::Button^ btn_delete;
	   private: System::Windows::Forms::TabPage^ tabPage3_comm;


	protected:
		private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_cl = (gcnew System::Windows::Forms::DataGridView());
			this->btn_inserer_cl = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer_cl = (gcnew System::Windows::Forms::Button());
			this->btn_modifier_cl = (gcnew System::Windows::Forms::Button());
			this->txt_id_cl = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_cl = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom_cl = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id_cl = (gcnew System::Windows::Forms::Label());
			this->lbl_prenom_cl = (gcnew System::Windows::Forms::Label());
			this->lbl_nom_cl = (gcnew System::Windows::Forms::Label());
			this->tabPage_comm = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_cl = (gcnew System::Windows::Forms::TabPage());
			this->lbl_dgv_adresse_cl = (gcnew System::Windows::Forms::Label());
			this->ajt_adr_cl = (gcnew System::Windows::Forms::Button());
			this->aff_adr_cl = (gcnew System::Windows::Forms::Button());
			this->dgv_aff_adr_cl = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_console_cl = (gcnew System::Windows::Forms::Label());
			this->lbl_date_premier_achat_cl = (gcnew System::Windows::Forms::Label());
			this->txt_date_premier_achat_cl = (gcnew System::Windows::Forms::TextBox());
			this->lbl_date_naissance_cl = (gcnew System::Windows::Forms::Label());
			this->txt_date_naissance_cl = (gcnew System::Windows::Forms::TextBox());
			this->lbl_adr_facturation_cl = (gcnew System::Windows::Forms::Label());
			this->lbl_adr_livraison_cl = (gcnew System::Windows::Forms::Label());
			this->txt_adr_facturation_cl = (gcnew System::Windows::Forms::TextBox());
			this->txt_adr_livraison_cl = (gcnew System::Windows::Forms::TextBox());
			this->lbl_genre_cl = (gcnew System::Windows::Forms::Label());
			this->txt_genre_cl = (gcnew System::Windows::Forms::TextBox());
			this->lbl_type_personne_cl = (gcnew System::Windows::Forms::Label());
			this->txt_type_cl = (gcnew System::Windows::Forms::TextBox());
			this->list_console_cl = (gcnew System::Windows::Forms::ListBox());
			this->tabPage_pers = (gcnew System::Windows::Forms::TabPage());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txt_type_pers = (gcnew System::Windows::Forms::TextBox());
			this->lbl_type_pers = (gcnew System::Windows::Forms::Label());
			this->txt_date_emb_sup_pers = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_sup_pers = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_emb_pers = (gcnew System::Windows::Forms::TextBox());
			this->txt_adr_pers = (gcnew System::Windows::Forms::TextBox());
			this->lbl_date_emb_sup_pers = (gcnew System::Windows::Forms::Label());
			this->lbl_nom_sup_pers = (gcnew System::Windows::Forms::Label());
			this->lbl_date_emb_pers = (gcnew System::Windows::Forms::Label());
			this->lbl_adr_pers = (gcnew System::Windows::Forms::Label());
			this->txt_genre_pers = (gcnew System::Windows::Forms::TextBox());
			this->lbl_genre_pers = (gcnew System::Windows::Forms::Label());
			this->lbl_prenom_pers = (gcnew System::Windows::Forms::Label());
			this->txt_prenom_pers = (gcnew System::Windows::Forms::TextBox());
			this->lbl_nom_pers = (gcnew System::Windows::Forms::Label());
			this->txt_nom_pers = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id_pers = (gcnew System::Windows::Forms::Label());
			this->txt_id_pers = (gcnew System::Windows::Forms::TextBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->btn_del_pres = (gcnew System::Windows::Forms::Button());
			this->btn_update_pers = (gcnew System::Windows::Forms::Button());
			this->btn_insert_pers = (gcnew System::Windows::Forms::Button());
			this->dgv_pers = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label_console_comm = (gcnew System::Windows::Forms::Label());
			this->listBox_console_comm = (gcnew System::Windows::Forms::ListBox());
			this->label_date_prevu_comm = (gcnew System::Windows::Forms::Label());
			this->label_id_comm = (gcnew System::Windows::Forms::Label());
			this->label_id_paiement_comm = (gcnew System::Windows::Forms::Label());
			this->label_ttc_comm = (gcnew System::Windows::Forms::Label());
			this->label_tva_comm = (gcnew System::Windows::Forms::Label());
			this->label_ref_comm = (gcnew System::Windows::Forms::Label());
			this->label_ht_comm = (gcnew System::Windows::Forms::Label());
			this->label_article_comm = (gcnew System::Windows::Forms::Label());
			this->label_date_em_comm = (gcnew System::Windows::Forms::Label());
			this->btn_del_comm = (gcnew System::Windows::Forms::Button());
			this->btn_modif_comm = (gcnew System::Windows::Forms::Button());
			this->btn_inser_comm = (gcnew System::Windows::Forms::Button());
			this->txt_article_comm = (gcnew System::Windows::Forms::TextBox());
			this->txt_ht_comm = (gcnew System::Windows::Forms::TextBox());
			this->txt_tva_comm = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_comm = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_em_comm = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_comm = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_paiement_comm = (gcnew System::Windows::Forms::TextBox());
			this->txt_ttc_comm = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_prevu_comm = (gcnew System::Windows::Forms::TextBox());
			this->dgv_comm = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage_stck = (gcnew System::Windows::Forms::TabPage());
			this->txt_taux_tva_art = (gcnew System::Windows::Forms::TextBox());
			this->lbl_tva_art = (gcnew System::Windows::Forms::Label());
			this->lbl_prixht_art = (gcnew System::Windows::Forms::Label());
			this->lbl_nom_art = (gcnew System::Windows::Forms::Label());
			this->lbl_ref_art = (gcnew System::Windows::Forms::Label());
			this->txt_prixht_art = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_art = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_art = (gcnew System::Windows::Forms::TextBox());
			this->lbl_console_stck = (gcnew System::Windows::Forms::Label());
			this->list_console_stck = (gcnew System::Windows::Forms::ListBox());
			this->txt_quantite_produit_stck = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_stck = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id_stck = (gcnew System::Windows::Forms::Label());
			this->lbl_seuil_reap_stck = (gcnew System::Windows::Forms::Label());
			this->lbl_stock_quantite_stck = (gcnew System::Windows::Forms::Label());
			this->txt_seuil_reap_stck = (gcnew System::Windows::Forms::TextBox());
			this->btn_modifier_stck = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer_stck = (gcnew System::Windows::Forms::Button());
			this->btn_inserer_stck = (gcnew System::Windows::Forms::Button());
			this->dgv_stck = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3_comm = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_cl))->BeginInit();
			this->tabPage_comm->SuspendLayout();
			this->tabPage_cl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_aff_adr_cl))->BeginInit();
			this->tabPage_pers->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_pers))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_comm))->BeginInit();
			this->tabPage_stck->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_stck))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_cl
			// 
			this->dgv_cl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_cl->Location = System::Drawing::Point(16, 18);
			this->dgv_cl->Margin = System::Windows::Forms::Padding(4);
			this->dgv_cl->Name = L"dgv_cl";
			this->dgv_cl->RowHeadersWidth = 51;
			this->dgv_cl->Size = System::Drawing::Size(1145, 183);
			this->dgv_cl->TabIndex = 0;
			this->dgv_cl->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_cl_CellContentClick);
			// 
			// btn_inserer_cl
			// 
			this->btn_inserer_cl->BackColor = System::Drawing::Color::Transparent;
			this->btn_inserer_cl->Location = System::Drawing::Point(16, 215);
			this->btn_inserer_cl->Margin = System::Windows::Forms::Padding(4);
			this->btn_inserer_cl->Name = L"btn_inserer_cl";
			this->btn_inserer_cl->Size = System::Drawing::Size(121, 46);
			this->btn_inserer_cl->TabIndex = 2;
			this->btn_inserer_cl->Text = L"INSÉRER";
			this->btn_inserer_cl->UseVisualStyleBackColor = false;
			this->btn_inserer_cl->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_click_cl);
			// 
			// btn_supprimer_cl
			// 
			this->btn_supprimer_cl->Location = System::Drawing::Point(16, 322);
			this->btn_supprimer_cl->Margin = System::Windows::Forms::Padding(4);
			this->btn_supprimer_cl->Name = L"btn_supprimer_cl";
			this->btn_supprimer_cl->Size = System::Drawing::Size(121, 46);
			this->btn_supprimer_cl->TabIndex = 3;
			this->btn_supprimer_cl->Text = L"SUPPRIMER";
			this->btn_supprimer_cl->UseVisualStyleBackColor = true;
			this->btn_supprimer_cl->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_click_cl);
			// 
			// btn_modifier_cl
			// 
			this->btn_modifier_cl->Location = System::Drawing::Point(16, 268);
			this->btn_modifier_cl->Margin = System::Windows::Forms::Padding(4);
			this->btn_modifier_cl->Name = L"btn_modifier_cl";
			this->btn_modifier_cl->Size = System::Drawing::Size(121, 46);
			this->btn_modifier_cl->TabIndex = 4;
			this->btn_modifier_cl->Text = L"MODIFIER";
			this->btn_modifier_cl->UseVisualStyleBackColor = true;
			this->btn_modifier_cl->Click += gcnew System::EventHandler(this, &MyForm::btn_update_click_cl);
			// 
			// txt_id_cl
			// 
			this->txt_id_cl->Location = System::Drawing::Point(166, 292);
			this->txt_id_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_cl->Name = L"txt_id_cl";
			this->txt_id_cl->Size = System::Drawing::Size(153, 22);
			this->txt_id_cl->TabIndex = 5;
			// 
			// txt_nom_cl
			// 
			this->txt_nom_cl->Location = System::Drawing::Point(166, 239);
			this->txt_nom_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom_cl->Name = L"txt_nom_cl";
			this->txt_nom_cl->Size = System::Drawing::Size(153, 22);
			this->txt_nom_cl->TabIndex = 6;
			// 
			// txt_prenom_cl
			// 
			this->txt_prenom_cl->Location = System::Drawing::Point(353, 239);
			this->txt_prenom_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom_cl->Name = L"txt_prenom_cl";
			this->txt_prenom_cl->Size = System::Drawing::Size(153, 22);
			this->txt_prenom_cl->TabIndex = 7;
			// 
			// lbl_id_cl
			// 
			this->lbl_id_cl->AutoSize = true;
			this->lbl_id_cl->Location = System::Drawing::Point(163, 271);
			this->lbl_id_cl->Name = L"lbl_id_cl";
			this->lbl_id_cl->Size = System::Drawing::Size(19, 17);
			this->lbl_id_cl->TabIndex = 8;
			this->lbl_id_cl->Text = L"Id";
			// 
			// lbl_prenom_cl
			// 
			this->lbl_prenom_cl->AutoSize = true;
			this->lbl_prenom_cl->Location = System::Drawing::Point(350, 218);
			this->lbl_prenom_cl->Name = L"lbl_prenom_cl";
			this->lbl_prenom_cl->Size = System::Drawing::Size(57, 17);
			this->lbl_prenom_cl->TabIndex = 9;
			this->lbl_prenom_cl->Text = L"Prenom";
			// 
			// lbl_nom_cl
			// 
			this->lbl_nom_cl->AutoSize = true;
			this->lbl_nom_cl->Location = System::Drawing::Point(163, 218);
			this->lbl_nom_cl->Name = L"lbl_nom_cl";
			this->lbl_nom_cl->Size = System::Drawing::Size(37, 17);
			this->lbl_nom_cl->TabIndex = 10;
			this->lbl_nom_cl->Text = L"Nom";
			// 
			// tabPage_comm
			// 
			this->tabPage_comm->Controls->Add(this->tabPage_cl);
			this->tabPage_comm->Controls->Add(this->tabPage_pers);
			this->tabPage_comm->Controls->Add(this->tabPage3);
			this->tabPage_comm->Controls->Add(this->tabPage_stck);
			this->tabPage_comm->Controls->Add(this->tabPage5);
			this->tabPage_comm->Location = System::Drawing::Point(34, 25);
			this->tabPage_comm->Name = L"tabPage_comm";
			this->tabPage_comm->SelectedIndex = 0;
			this->tabPage_comm->Size = System::Drawing::Size(1190, 589);
			this->tabPage_comm->TabIndex = 11;
			// 
			// tabPage_cl
			// 
			this->tabPage_cl->BackColor = System::Drawing::Color::White;
			this->tabPage_cl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage_cl->Controls->Add(this->lbl_dgv_adresse_cl);
			this->tabPage_cl->Controls->Add(this->ajt_adr_cl);
			this->tabPage_cl->Controls->Add(this->aff_adr_cl);
			this->tabPage_cl->Controls->Add(this->dgv_aff_adr_cl);
			this->tabPage_cl->Controls->Add(this->lbl_console_cl);
			this->tabPage_cl->Controls->Add(this->lbl_date_premier_achat_cl);
			this->tabPage_cl->Controls->Add(this->txt_date_premier_achat_cl);
			this->tabPage_cl->Controls->Add(this->lbl_date_naissance_cl);
			this->tabPage_cl->Controls->Add(this->txt_date_naissance_cl);
			this->tabPage_cl->Controls->Add(this->lbl_adr_facturation_cl);
			this->tabPage_cl->Controls->Add(this->lbl_adr_livraison_cl);
			this->tabPage_cl->Controls->Add(this->txt_adr_facturation_cl);
			this->tabPage_cl->Controls->Add(this->txt_adr_livraison_cl);
			this->tabPage_cl->Controls->Add(this->lbl_genre_cl);
			this->tabPage_cl->Controls->Add(this->txt_genre_cl);
			this->tabPage_cl->Controls->Add(this->lbl_type_personne_cl);
			this->tabPage_cl->Controls->Add(this->txt_type_cl);
			this->tabPage_cl->Controls->Add(this->list_console_cl);
			this->tabPage_cl->Controls->Add(this->dgv_cl);
			this->tabPage_cl->Controls->Add(this->btn_supprimer_cl);
			this->tabPage_cl->Controls->Add(this->btn_modifier_cl);
			this->tabPage_cl->Controls->Add(this->lbl_nom_cl);
			this->tabPage_cl->Controls->Add(this->txt_id_cl);
			this->tabPage_cl->Controls->Add(this->btn_inserer_cl);
			this->tabPage_cl->Controls->Add(this->lbl_prenom_cl);
			this->tabPage_cl->Controls->Add(this->txt_nom_cl);
			this->tabPage_cl->Controls->Add(this->lbl_id_cl);
			this->tabPage_cl->Controls->Add(this->txt_prenom_cl);
			this->tabPage_cl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabPage_cl->Location = System::Drawing::Point(4, 25);
			this->tabPage_cl->Name = L"tabPage_cl";
			this->tabPage_cl->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_cl->Size = System::Drawing::Size(1182, 560);
			this->tabPage_cl->TabIndex = 0;
			this->tabPage_cl->Text = L"Clients";
			// 
			// lbl_dgv_adresse_cl
			// 
			this->lbl_dgv_adresse_cl->AutoSize = true;
			this->lbl_dgv_adresse_cl->Location = System::Drawing::Point(594, 258);
			this->lbl_dgv_adresse_cl->Name = L"lbl_dgv_adresse_cl";
			this->lbl_dgv_adresse_cl->Size = System::Drawing::Size(112, 17);
			this->lbl_dgv_adresse_cl->TabIndex = 28;
			this->lbl_dgv_adresse_cl->Text = L"Adresses client :";
			// 
			// ajt_adr_cl
			// 
			this->ajt_adr_cl->BackColor = System::Drawing::Color::Transparent;
			this->ajt_adr_cl->Location = System::Drawing::Point(951, 215);
			this->ajt_adr_cl->Margin = System::Windows::Forms::Padding(4);
			this->ajt_adr_cl->Name = L"ajt_adr_cl";
			this->ajt_adr_cl->Size = System::Drawing::Size(210, 46);
			this->ajt_adr_cl->TabIndex = 27;
			this->ajt_adr_cl->Text = L"CRÉER ADRESSE";
			this->ajt_adr_cl->UseVisualStyleBackColor = false;
			this->ajt_adr_cl->Click += gcnew System::EventHandler(this, &MyForm::ajt_adr_cl_Click);
			// 
			// aff_adr_cl
			// 
			this->aff_adr_cl->BackColor = System::Drawing::Color::Transparent;
			this->aff_adr_cl->Location = System::Drawing::Point(722, 215);
			this->aff_adr_cl->Margin = System::Windows::Forms::Padding(4);
			this->aff_adr_cl->Name = L"aff_adr_cl";
			this->aff_adr_cl->Size = System::Drawing::Size(210, 46);
			this->aff_adr_cl->TabIndex = 26;
			this->aff_adr_cl->Text = L"AFFICHER ADRESSE";
			this->aff_adr_cl->UseVisualStyleBackColor = false;
			this->aff_adr_cl->Click += gcnew System::EventHandler(this, &MyForm::aff_adr_cl_Click);
			// 
			// dgv_aff_adr_cl
			// 
			this->dgv_aff_adr_cl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_aff_adr_cl->Location = System::Drawing::Point(595, 279);
			this->dgv_aff_adr_cl->Margin = System::Windows::Forms::Padding(4);
			this->dgv_aff_adr_cl->Name = L"dgv_aff_adr_cl";
			this->dgv_aff_adr_cl->RowHeadersWidth = 51;
			this->dgv_aff_adr_cl->Size = System::Drawing::Size(566, 113);
			this->dgv_aff_adr_cl->TabIndex = 25;
			// 
			// lbl_console_cl
			// 
			this->lbl_console_cl->AutoSize = true;
			this->lbl_console_cl->Location = System::Drawing::Point(13, 457);
			this->lbl_console_cl->Name = L"lbl_console_cl";
			this->lbl_console_cl->Size = System::Drawing::Size(59, 17);
			this->lbl_console_cl->TabIndex = 24;
			this->lbl_console_cl->Text = L"Console";
			// 
			// lbl_date_premier_achat_cl
			// 
			this->lbl_date_premier_achat_cl->AutoSize = true;
			this->lbl_date_premier_achat_cl->Location = System::Drawing::Point(163, 406);
			this->lbl_date_premier_achat_cl->Name = L"lbl_date_premier_achat_cl";
			this->lbl_date_premier_achat_cl->Size = System::Drawing::Size(129, 17);
			this->lbl_date_premier_achat_cl->TabIndex = 23;
			this->lbl_date_premier_achat_cl->Text = L"Date premier achat";
			// 
			// txt_date_premier_achat_cl
			// 
			this->txt_date_premier_achat_cl->Location = System::Drawing::Point(323, 401);
			this->txt_date_premier_achat_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_date_premier_achat_cl->Name = L"txt_date_premier_achat_cl";
			this->txt_date_premier_achat_cl->Size = System::Drawing::Size(204, 22);
			this->txt_date_premier_achat_cl->TabIndex = 22;
			// 
			// lbl_date_naissance_cl
			// 
			this->lbl_date_naissance_cl->AutoSize = true;
			this->lbl_date_naissance_cl->Location = System::Drawing::Point(163, 378);
			this->lbl_date_naissance_cl->Name = L"lbl_date_naissance_cl";
			this->lbl_date_naissance_cl->Size = System::Drawing::Size(106, 17);
			this->lbl_date_naissance_cl->TabIndex = 21;
			this->lbl_date_naissance_cl->Text = L"Date naissance";
			// 
			// txt_date_naissance_cl
			// 
			this->txt_date_naissance_cl->Location = System::Drawing::Point(323, 373);
			this->txt_date_naissance_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_date_naissance_cl->Name = L"txt_date_naissance_cl";
			this->txt_date_naissance_cl->Size = System::Drawing::Size(204, 22);
			this->txt_date_naissance_cl->TabIndex = 20;
			// 
			// lbl_adr_facturation_cl
			// 
			this->lbl_adr_facturation_cl->AutoSize = true;
			this->lbl_adr_facturation_cl->Location = System::Drawing::Point(594, 432);
			this->lbl_adr_facturation_cl->Name = L"lbl_adr_facturation_cl";
			this->lbl_adr_facturation_cl->Size = System::Drawing::Size(151, 17);
			this->lbl_adr_facturation_cl->TabIndex = 19;
			this->lbl_adr_facturation_cl->Text = L"Adresse de facturation";
			// 
			// lbl_adr_livraison_cl
			// 
			this->lbl_adr_livraison_cl->AutoSize = true;
			this->lbl_adr_livraison_cl->Location = System::Drawing::Point(594, 406);
			this->lbl_adr_livraison_cl->Name = L"lbl_adr_livraison_cl";
			this->lbl_adr_livraison_cl->Size = System::Drawing::Size(136, 17);
			this->lbl_adr_livraison_cl->TabIndex = 18;
			this->lbl_adr_livraison_cl->Text = L"Adresse de livraison";
			// 
			// txt_adr_facturation_cl
			// 
			this->txt_adr_facturation_cl->Location = System::Drawing::Point(754, 427);
			this->txt_adr_facturation_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_adr_facturation_cl->Name = L"txt_adr_facturation_cl";
			this->txt_adr_facturation_cl->Size = System::Drawing::Size(204, 22);
			this->txt_adr_facturation_cl->TabIndex = 17;
			// 
			// txt_adr_livraison_cl
			// 
			this->txt_adr_livraison_cl->Location = System::Drawing::Point(754, 401);
			this->txt_adr_livraison_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_adr_livraison_cl->Name = L"txt_adr_livraison_cl";
			this->txt_adr_livraison_cl->Size = System::Drawing::Size(204, 22);
			this->txt_adr_livraison_cl->TabIndex = 16;
			// 
			// lbl_genre_cl
			// 
			this->lbl_genre_cl->AutoSize = true;
			this->lbl_genre_cl->Location = System::Drawing::Point(350, 271);
			this->lbl_genre_cl->Name = L"lbl_genre_cl";
			this->lbl_genre_cl->Size = System::Drawing::Size(48, 17);
			this->lbl_genre_cl->TabIndex = 15;
			this->lbl_genre_cl->Text = L"Genre";
			// 
			// txt_genre_cl
			// 
			this->txt_genre_cl->Location = System::Drawing::Point(353, 292);
			this->txt_genre_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_genre_cl->Name = L"txt_genre_cl";
			this->txt_genre_cl->Size = System::Drawing::Size(153, 22);
			this->txt_genre_cl->TabIndex = 14;
			// 
			// lbl_type_personne_cl
			// 
			this->lbl_type_personne_cl->AutoSize = true;
			this->lbl_type_personne_cl->Location = System::Drawing::Point(13, 392);
			this->lbl_type_personne_cl->Name = L"lbl_type_personne_cl";
			this->lbl_type_personne_cl->Size = System::Drawing::Size(124, 17);
			this->lbl_type_personne_cl->TabIndex = 13;
			this->lbl_type_personne_cl->Text = L"Type de personne";
			// 
			// txt_type_cl
			// 
			this->txt_type_cl->Location = System::Drawing::Point(16, 413);
			this->txt_type_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_type_cl->Name = L"txt_type_cl";
			this->txt_type_cl->Size = System::Drawing::Size(121, 22);
			this->txt_type_cl->TabIndex = 12;
			this->txt_type_cl->Text = L"Client";
			this->txt_type_cl->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// list_console_cl
			// 
			this->list_console_cl->FormattingEnabled = true;
			this->list_console_cl->ItemHeight = 16;
			this->list_console_cl->Location = System::Drawing::Point(16, 477);
			this->list_console_cl->Name = L"list_console_cl";
			this->list_console_cl->Size = System::Drawing::Size(1145, 52);
			this->list_console_cl->TabIndex = 11;
			// 
			// tabPage_pers
			// 
			this->tabPage_pers->Controls->Add(this->label20);
			this->tabPage_pers->Controls->Add(this->txt_type_pers);
			this->tabPage_pers->Controls->Add(this->lbl_type_pers);
			this->tabPage_pers->Controls->Add(this->txt_date_emb_sup_pers);
			this->tabPage_pers->Controls->Add(this->txt_nom_sup_pers);
			this->tabPage_pers->Controls->Add(this->txt_date_emb_pers);
			this->tabPage_pers->Controls->Add(this->txt_adr_pers);
			this->tabPage_pers->Controls->Add(this->lbl_date_emb_sup_pers);
			this->tabPage_pers->Controls->Add(this->lbl_nom_sup_pers);
			this->tabPage_pers->Controls->Add(this->lbl_date_emb_pers);
			this->tabPage_pers->Controls->Add(this->lbl_adr_pers);
			this->tabPage_pers->Controls->Add(this->txt_genre_pers);
			this->tabPage_pers->Controls->Add(this->lbl_genre_pers);
			this->tabPage_pers->Controls->Add(this->lbl_prenom_pers);
			this->tabPage_pers->Controls->Add(this->txt_prenom_pers);
			this->tabPage_pers->Controls->Add(this->lbl_nom_pers);
			this->tabPage_pers->Controls->Add(this->txt_nom_pers);
			this->tabPage_pers->Controls->Add(this->lbl_id_pers);
			this->tabPage_pers->Controls->Add(this->txt_id_pers);
			this->tabPage_pers->Controls->Add(this->listBox2);
			this->tabPage_pers->Controls->Add(this->btn_del_pres);
			this->tabPage_pers->Controls->Add(this->btn_update_pers);
			this->tabPage_pers->Controls->Add(this->btn_insert_pers);
			this->tabPage_pers->Controls->Add(this->dgv_pers);
			this->tabPage_pers->Location = System::Drawing::Point(4, 25);
			this->tabPage_pers->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage_pers->Name = L"tabPage_pers";
			this->tabPage_pers->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage_pers->Size = System::Drawing::Size(1182, 560);
			this->tabPage_pers->TabIndex = 1;
			this->tabPage_pers->Text = L"Personnel";
			this->tabPage_pers->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(14, 589);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(59, 17);
			this->label20->TabIndex = 29;
			this->label20->Text = L"Console";
			// 
			// txt_type_pers
			// 
			this->txt_type_pers->Location = System::Drawing::Point(18, 519);
			this->txt_type_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_type_pers->Name = L"txt_type_pers";
			this->txt_type_pers->Size = System::Drawing::Size(141, 22);
			this->txt_type_pers->TabIndex = 28;
			this->txt_type_pers->Text = L"Personnel";
			this->txt_type_pers->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lbl_type_pers
			// 
			this->lbl_type_pers->AutoSize = true;
			this->lbl_type_pers->Location = System::Drawing::Point(14, 494);
			this->lbl_type_pers->Name = L"lbl_type_pers";
			this->lbl_type_pers->Size = System::Drawing::Size(124, 17);
			this->lbl_type_pers->TabIndex = 27;
			this->lbl_type_pers->Text = L"Type de personne";
			// 
			// txt_date_emb_sup_pers
			// 
			this->txt_date_emb_sup_pers->Location = System::Drawing::Point(464, 448);
			this->txt_date_emb_sup_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_date_emb_sup_pers->Name = L"txt_date_emb_sup_pers";
			this->txt_date_emb_sup_pers->Size = System::Drawing::Size(141, 22);
			this->txt_date_emb_sup_pers->TabIndex = 26;
			// 
			// txt_nom_sup_pers
			// 
			this->txt_nom_sup_pers->Location = System::Drawing::Point(464, 380);
			this->txt_nom_sup_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_nom_sup_pers->Name = L"txt_nom_sup_pers";
			this->txt_nom_sup_pers->Size = System::Drawing::Size(141, 22);
			this->txt_nom_sup_pers->TabIndex = 25;
			// 
			// txt_date_emb_pers
			// 
			this->txt_date_emb_pers->Location = System::Drawing::Point(189, 448);
			this->txt_date_emb_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_date_emb_pers->Name = L"txt_date_emb_pers";
			this->txt_date_emb_pers->Size = System::Drawing::Size(141, 22);
			this->txt_date_emb_pers->TabIndex = 24;
			// 
			// txt_adr_pers
			// 
			this->txt_adr_pers->Location = System::Drawing::Point(189, 380);
			this->txt_adr_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_adr_pers->Name = L"txt_adr_pers";
			this->txt_adr_pers->Size = System::Drawing::Size(141, 22);
			this->txt_adr_pers->TabIndex = 23;
			// 
			// lbl_date_emb_sup_pers
			// 
			this->lbl_date_emb_sup_pers->AutoSize = true;
			this->lbl_date_emb_sup_pers->Location = System::Drawing::Point(460, 423);
			this->lbl_date_emb_sup_pers->Name = L"lbl_date_emb_sup_pers";
			this->lbl_date_emb_sup_pers->Size = System::Drawing::Size(183, 17);
			this->lbl_date_emb_sup_pers->TabIndex = 22;
			this->lbl_date_emb_sup_pers->Text = L"Date d\'embauche supérieur";
			// 
			// lbl_nom_sup_pers
			// 
			this->lbl_nom_sup_pers->AutoSize = true;
			this->lbl_nom_sup_pers->Location = System::Drawing::Point(460, 355);
			this->lbl_nom_sup_pers->Name = L"lbl_nom_sup_pers";
			this->lbl_nom_sup_pers->Size = System::Drawing::Size(121, 17);
			this->lbl_nom_sup_pers->TabIndex = 21;
			this->lbl_nom_sup_pers->Text = L"Nom du supérieur";
			// 
			// lbl_date_emb_pers
			// 
			this->lbl_date_emb_pers->AutoSize = true;
			this->lbl_date_emb_pers->Location = System::Drawing::Point(185, 423);
			this->lbl_date_emb_pers->Name = L"lbl_date_emb_pers";
			this->lbl_date_emb_pers->Size = System::Drawing::Size(119, 17);
			this->lbl_date_emb_pers->TabIndex = 20;
			this->lbl_date_emb_pers->Text = L"Date d\'embauche";
			// 
			// lbl_adr_pers
			// 
			this->lbl_adr_pers->AutoSize = true;
			this->lbl_adr_pers->Location = System::Drawing::Point(185, 355);
			this->lbl_adr_pers->Name = L"lbl_adr_pers";
			this->lbl_adr_pers->Size = System::Drawing::Size(60, 17);
			this->lbl_adr_pers->TabIndex = 19;
			this->lbl_adr_pers->Text = L"Adresse";
			// 
			// txt_genre_pers
			// 
			this->txt_genre_pers->Location = System::Drawing::Point(701, 284);
			this->txt_genre_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_genre_pers->Name = L"txt_genre_pers";
			this->txt_genre_pers->Size = System::Drawing::Size(141, 22);
			this->txt_genre_pers->TabIndex = 15;
			// 
			// lbl_genre_pers
			// 
			this->lbl_genre_pers->AutoSize = true;
			this->lbl_genre_pers->Location = System::Drawing::Point(697, 259);
			this->lbl_genre_pers->Name = L"lbl_genre_pers";
			this->lbl_genre_pers->Size = System::Drawing::Size(48, 17);
			this->lbl_genre_pers->TabIndex = 16;
			this->lbl_genre_pers->Text = L"Genre";
			// 
			// lbl_prenom_pers
			// 
			this->lbl_prenom_pers->AutoSize = true;
			this->lbl_prenom_pers->Location = System::Drawing::Point(496, 259);
			this->lbl_prenom_pers->Name = L"lbl_prenom_pers";
			this->lbl_prenom_pers->Size = System::Drawing::Size(57, 17);
			this->lbl_prenom_pers->TabIndex = 12;
			this->lbl_prenom_pers->Text = L"Prenom";
			// 
			// txt_prenom_pers
			// 
			this->txt_prenom_pers->Location = System::Drawing::Point(500, 284);
			this->txt_prenom_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_prenom_pers->Name = L"txt_prenom_pers";
			this->txt_prenom_pers->Size = System::Drawing::Size(141, 22);
			this->txt_prenom_pers->TabIndex = 12;
			// 
			// lbl_nom_pers
			// 
			this->lbl_nom_pers->AutoSize = true;
			this->lbl_nom_pers->Location = System::Drawing::Point(318, 259);
			this->lbl_nom_pers->Name = L"lbl_nom_pers";
			this->lbl_nom_pers->Size = System::Drawing::Size(37, 17);
			this->lbl_nom_pers->TabIndex = 12;
			this->lbl_nom_pers->Text = L"Nom";
			// 
			// txt_nom_pers
			// 
			this->txt_nom_pers->Location = System::Drawing::Point(322, 284);
			this->txt_nom_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_nom_pers->Name = L"txt_nom_pers";
			this->txt_nom_pers->Size = System::Drawing::Size(141, 22);
			this->txt_nom_pers->TabIndex = 12;
			// 
			// lbl_id_pers
			// 
			this->lbl_id_pers->AutoSize = true;
			this->lbl_id_pers->Location = System::Drawing::Point(185, 259);
			this->lbl_id_pers->Name = L"lbl_id_pers";
			this->lbl_id_pers->Size = System::Drawing::Size(19, 17);
			this->lbl_id_pers->TabIndex = 12;
			this->lbl_id_pers->Text = L"Id";
			// 
			// txt_id_pers
			// 
			this->txt_id_pers->Location = System::Drawing::Point(189, 284);
			this->txt_id_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_id_pers->Name = L"txt_id_pers";
			this->txt_id_pers->Size = System::Drawing::Size(47, 22);
			this->txt_id_pers->TabIndex = 12;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(18, 613);
			this->listBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(915, 52);
			this->listBox2->TabIndex = 12;
			// 
			// btn_del_pres
			// 
			this->btn_del_pres->Location = System::Drawing::Point(18, 404);
			this->btn_del_pres->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_del_pres->Name = L"btn_del_pres";
			this->btn_del_pres->Size = System::Drawing::Size(112, 58);
			this->btn_del_pres->TabIndex = 4;
			this->btn_del_pres->Text = L"SUPPRIMER";
			this->btn_del_pres->UseVisualStyleBackColor = true;
			this->btn_del_pres->Click += gcnew System::EventHandler(this, &MyForm::button_delete2_Click);
			// 
			// btn_update_pers
			// 
			this->btn_update_pers->Location = System::Drawing::Point(18, 336);
			this->btn_update_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_update_pers->Name = L"btn_update_pers";
			this->btn_update_pers->Size = System::Drawing::Size(112, 58);
			this->btn_update_pers->TabIndex = 3;
			this->btn_update_pers->Text = L"MODIFIER";
			this->btn_update_pers->UseVisualStyleBackColor = true;
			this->btn_update_pers->Click += gcnew System::EventHandler(this, &MyForm::button_update2_Click);
			// 
			// btn_insert_pers
			// 
			this->btn_insert_pers->Location = System::Drawing::Point(18, 268);
			this->btn_insert_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_insert_pers->Name = L"btn_insert_pers";
			this->btn_insert_pers->Size = System::Drawing::Size(112, 58);
			this->btn_insert_pers->TabIndex = 2;
			this->btn_insert_pers->Text = L"INSÉRER";
			this->btn_insert_pers->UseVisualStyleBackColor = true;
			this->btn_insert_pers->Click += gcnew System::EventHandler(this, &MyForm::button_insert2_Click);
			// 
			// dgv_pers
			// 
			this->dgv_pers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_pers->Location = System::Drawing::Point(18, 22);
			this->dgv_pers->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dgv_pers->Name = L"dgv_pers";
			this->dgv_pers->RowHeadersWidth = 51;
			this->dgv_pers->RowTemplate->Height = 24;
			this->dgv_pers->Size = System::Drawing::Size(1143, 196);
			this->dgv_pers->TabIndex = 0;
			this->dgv_pers->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_PER_CellContentClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label_console_comm);
			this->tabPage3->Controls->Add(this->listBox_console_comm);
			this->tabPage3->Controls->Add(this->label_date_prevu_comm);
			this->tabPage3->Controls->Add(this->label_id_comm);
			this->tabPage3->Controls->Add(this->label_id_paiement_comm);
			this->tabPage3->Controls->Add(this->label_ttc_comm);
			this->tabPage3->Controls->Add(this->label_tva_comm);
			this->tabPage3->Controls->Add(this->label_ref_comm);
			this->tabPage3->Controls->Add(this->label_ht_comm);
			this->tabPage3->Controls->Add(this->label_article_comm);
			this->tabPage3->Controls->Add(this->label_date_em_comm);
			this->tabPage3->Controls->Add(this->btn_del_comm);
			this->tabPage3->Controls->Add(this->btn_modif_comm);
			this->tabPage3->Controls->Add(this->btn_inser_comm);
			this->tabPage3->Controls->Add(this->txt_article_comm);
			this->tabPage3->Controls->Add(this->txt_ht_comm);
			this->tabPage3->Controls->Add(this->txt_tva_comm);
			this->tabPage3->Controls->Add(this->txt_ref_comm);
			this->tabPage3->Controls->Add(this->txt_date_em_comm);
			this->tabPage3->Controls->Add(this->txt_id_comm);
			this->tabPage3->Controls->Add(this->txt_id_paiement_comm);
			this->tabPage3->Controls->Add(this->txt_ttc_comm);
			this->tabPage3->Controls->Add(this->txt_date_prevu_comm);
			this->tabPage3->Controls->Add(this->dgv_comm);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3->Size = System::Drawing::Size(1182, 560);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Commandes";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label_console_comm
			// 
			this->label_console_comm->AutoSize = true;
			this->label_console_comm->Location = System::Drawing::Point(24, 358);
			this->label_console_comm->Name = L"label_console_comm";
			this->label_console_comm->Size = System::Drawing::Size(59, 17);
			this->label_console_comm->TabIndex = 6;
			this->label_console_comm->Text = L"Console";
			// 
			// listBox_console_comm
			// 
			this->listBox_console_comm->FormattingEnabled = true;
			this->listBox_console_comm->ItemHeight = 16;
			this->listBox_console_comm->Location = System::Drawing::Point(23, 377);
			this->listBox_console_comm->Name = L"listBox_console_comm";
			this->listBox_console_comm->Size = System::Drawing::Size(592, 52);
			this->listBox_console_comm->TabIndex = 5;
			// 
			// label_date_prevu_comm
			// 
			this->label_date_prevu_comm->AutoSize = true;
			this->label_date_prevu_comm->Location = System::Drawing::Point(184, 217);
			this->label_date_prevu_comm->Name = L"label_date_prevu_comm";
			this->label_date_prevu_comm->Size = System::Drawing::Size(84, 17);
			this->label_date_prevu_comm->TabIndex = 4;
			this->label_date_prevu_comm->Text = L"date prevue";
			// 
			// label_id_comm
			// 
			this->label_id_comm->AutoSize = true;
			this->label_id_comm->Location = System::Drawing::Point(162, 332);
			this->label_id_comm->Name = L"label_id_comm";
			this->label_id_comm->Size = System::Drawing::Size(94, 17);
			this->label_id_comm->TabIndex = 4;
			this->label_id_comm->Text = L"ID commande";
			// 
			// label_id_paiement_comm
			// 
			this->label_id_paiement_comm->AutoSize = true;
			this->label_id_paiement_comm->Location = System::Drawing::Point(461, 334);
			this->label_id_paiement_comm->Name = L"label_id_paiement_comm";
			this->label_id_paiement_comm->Size = System::Drawing::Size(83, 17);
			this->label_id_paiement_comm->TabIndex = 4;
			this->label_id_paiement_comm->Text = L"ID paiement";
			// 
			// label_ttc_comm
			// 
			this->label_ttc_comm->AutoSize = true;
			this->label_ttc_comm->Location = System::Drawing::Point(477, 212);
			this->label_ttc_comm->Name = L"label_ttc_comm";
			this->label_ttc_comm->Size = System::Drawing::Size(66, 17);
			this->label_ttc_comm->TabIndex = 4;
			this->label_ttc_comm->Text = L"total TTC";
			// 
			// label_tva_comm
			// 
			this->label_tva_comm->AutoSize = true;
			this->label_tva_comm->Location = System::Drawing::Point(477, 180);
			this->label_tva_comm->Name = L"label_tva_comm";
			this->label_tva_comm->Size = System::Drawing::Size(66, 17);
			this->label_tva_comm->TabIndex = 4;
			this->label_tva_comm->Text = L"total TVA";
			// 
			// label_ref_comm
			// 
			this->label_ref_comm->AutoSize = true;
			this->label_ref_comm->Location = System::Drawing::Point(197, 178);
			this->label_ref_comm->Name = L"label_ref_comm";
			this->label_ref_comm->Size = System::Drawing::Size(69, 17);
			this->label_ref_comm->TabIndex = 4;
			this->label_ref_comm->Text = L"reference";
			// 
			// label_ht_comm
			// 
			this->label_ht_comm->AutoSize = true;
			this->label_ht_comm->Location = System::Drawing::Point(477, 245);
			this->label_ht_comm->Name = L"label_ht_comm";
			this->label_ht_comm->Size = System::Drawing::Size(58, 17);
			this->label_ht_comm->TabIndex = 4;
			this->label_ht_comm->Text = L"total HT";
			// 
			// label_article_comm
			// 
			this->label_article_comm->AutoSize = true;
			this->label_article_comm->Location = System::Drawing::Point(184, 287);
			this->label_article_comm->Name = L"label_article_comm";
			this->label_article_comm->Size = System::Drawing::Size(77, 17);
			this->label_article_comm->TabIndex = 4;
			this->label_article_comm->Text = L"total article";
			// 
			// label_date_em_comm
			// 
			this->label_date_em_comm->AutoSize = true;
			this->label_date_em_comm->Location = System::Drawing::Point(162, 250);
			this->label_date_em_comm->Name = L"label_date_em_comm";
			this->label_date_em_comm->Size = System::Drawing::Size(106, 17);
			this->label_date_em_comm->TabIndex = 4;
			this->label_date_em_comm->Text = L"date d\'emission";
			// 
			// btn_del_comm
			// 
			this->btn_del_comm->Location = System::Drawing::Point(23, 282);
			this->btn_del_comm->Name = L"btn_del_comm";
			this->btn_del_comm->Size = System::Drawing::Size(112, 48);
			this->btn_del_comm->TabIndex = 3;
			this->btn_del_comm->Text = L"SUPPRIMER";
			this->btn_del_comm->UseVisualStyleBackColor = true;
			this->btn_del_comm->Click += gcnew System::EventHandler(this, &MyForm::btn_del_comm_Click);
			// 
			// btn_modif_comm
			// 
			this->btn_modif_comm->Location = System::Drawing::Point(23, 225);
			this->btn_modif_comm->Name = L"btn_modif_comm";
			this->btn_modif_comm->Size = System::Drawing::Size(112, 48);
			this->btn_modif_comm->TabIndex = 3;
			this->btn_modif_comm->Text = L"MODIFIER";
			this->btn_modif_comm->UseVisualStyleBackColor = true;
			this->btn_modif_comm->Click += gcnew System::EventHandler(this, &MyForm::btn_modif_comm_Click);
			// 
			// btn_inser_comm
			// 
			this->btn_inser_comm->Location = System::Drawing::Point(23, 171);
			this->btn_inser_comm->Name = L"btn_inser_comm";
			this->btn_inser_comm->Size = System::Drawing::Size(112, 48);
			this->btn_inser_comm->TabIndex = 3;
			this->btn_inser_comm->Text = L"INSÉRER";
			this->btn_inser_comm->UseVisualStyleBackColor = true;
			this->btn_inser_comm->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click_Comm);
			// 
			// txt_article_comm
			// 
			this->txt_article_comm->Location = System::Drawing::Point(272, 282);
			this->txt_article_comm->Name = L"txt_article_comm";
			this->txt_article_comm->Size = System::Drawing::Size(183, 22);
			this->txt_article_comm->TabIndex = 2;
			// 
			// txt_ht_comm
			// 
			this->txt_ht_comm->Location = System::Drawing::Point(549, 240);
			this->txt_ht_comm->Name = L"txt_ht_comm";
			this->txt_ht_comm->Size = System::Drawing::Size(183, 22);
			this->txt_ht_comm->TabIndex = 2;
			// 
			// txt_tva_comm
			// 
			this->txt_tva_comm->Location = System::Drawing::Point(549, 178);
			this->txt_tva_comm->Name = L"txt_tva_comm";
			this->txt_tva_comm->Size = System::Drawing::Size(183, 22);
			this->txt_tva_comm->TabIndex = 2;
			// 
			// txt_ref_comm
			// 
			this->txt_ref_comm->Location = System::Drawing::Point(272, 175);
			this->txt_ref_comm->Name = L"txt_ref_comm";
			this->txt_ref_comm->Size = System::Drawing::Size(183, 22);
			this->txt_ref_comm->TabIndex = 2;
			// 
			// txt_date_em_comm
			// 
			this->txt_date_em_comm->Location = System::Drawing::Point(272, 245);
			this->txt_date_em_comm->Name = L"txt_date_em_comm";
			this->txt_date_em_comm->Size = System::Drawing::Size(183, 22);
			this->txt_date_em_comm->TabIndex = 2;
			// 
			// txt_id_comm
			// 
			this->txt_id_comm->Location = System::Drawing::Point(272, 327);
			this->txt_id_comm->Name = L"txt_id_comm";
			this->txt_id_comm->Size = System::Drawing::Size(183, 22);
			this->txt_id_comm->TabIndex = 2;
			// 
			// txt_id_paiement_comm
			// 
			this->txt_id_paiement_comm->Location = System::Drawing::Point(549, 329);
			this->txt_id_paiement_comm->Name = L"txt_id_paiement_comm";
			this->txt_id_paiement_comm->Size = System::Drawing::Size(183, 22);
			this->txt_id_paiement_comm->TabIndex = 2;
			// 
			// txt_ttc_comm
			// 
			this->txt_ttc_comm->Location = System::Drawing::Point(549, 209);
			this->txt_ttc_comm->Name = L"txt_ttc_comm";
			this->txt_ttc_comm->Size = System::Drawing::Size(183, 22);
			this->txt_ttc_comm->TabIndex = 2;
			// 
			// txt_date_prevu_comm
			// 
			this->txt_date_prevu_comm->Location = System::Drawing::Point(272, 212);
			this->txt_date_prevu_comm->Name = L"txt_date_prevu_comm";
			this->txt_date_prevu_comm->Size = System::Drawing::Size(183, 22);
			this->txt_date_prevu_comm->TabIndex = 2;
			// 
			// dgv_comm
			// 
			this->dgv_comm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_comm->Location = System::Drawing::Point(23, 15);
			this->dgv_comm->Name = L"dgv_comm";
			this->dgv_comm->RowHeadersWidth = 51;
			this->dgv_comm->Size = System::Drawing::Size(1133, 150);
			this->dgv_comm->TabIndex = 0;
			this->dgv_comm->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_comm_CellContentClick);
			// 
			// tabPage_stck
			// 
			this->tabPage_stck->Controls->Add(this->txt_taux_tva_art);
			this->tabPage_stck->Controls->Add(this->lbl_tva_art);
			this->tabPage_stck->Controls->Add(this->lbl_prixht_art);
			this->tabPage_stck->Controls->Add(this->lbl_nom_art);
			this->tabPage_stck->Controls->Add(this->lbl_ref_art);
			this->tabPage_stck->Controls->Add(this->txt_prixht_art);
			this->tabPage_stck->Controls->Add(this->txt_nom_art);
			this->tabPage_stck->Controls->Add(this->txt_ref_art);
			this->tabPage_stck->Controls->Add(this->lbl_console_stck);
			this->tabPage_stck->Controls->Add(this->list_console_stck);
			this->tabPage_stck->Controls->Add(this->txt_quantite_produit_stck);
			this->tabPage_stck->Controls->Add(this->txt_id_stck);
			this->tabPage_stck->Controls->Add(this->lbl_id_stck);
			this->tabPage_stck->Controls->Add(this->lbl_seuil_reap_stck);
			this->tabPage_stck->Controls->Add(this->lbl_stock_quantite_stck);
			this->tabPage_stck->Controls->Add(this->txt_seuil_reap_stck);
			this->tabPage_stck->Controls->Add(this->btn_modifier_stck);
			this->tabPage_stck->Controls->Add(this->btn_supprimer_stck);
			this->tabPage_stck->Controls->Add(this->btn_inserer_stck);
			this->tabPage_stck->Controls->Add(this->dgv_stck);
			this->tabPage_stck->Location = System::Drawing::Point(4, 25);
			this->tabPage_stck->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage_stck->Name = L"tabPage_stck";
			this->tabPage_stck->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage_stck->Size = System::Drawing::Size(1182, 560);
			this->tabPage_stck->TabIndex = 3;
			this->tabPage_stck->Text = L"Stock";
			this->tabPage_stck->UseVisualStyleBackColor = true;
			// 
			// txt_taux_tva_art
			// 
			this->txt_taux_tva_art->Location = System::Drawing::Point(541, 397);
			this->txt_taux_tva_art->Name = L"txt_taux_tva_art";
			this->txt_taux_tva_art->Size = System::Drawing::Size(100, 22);
			this->txt_taux_tva_art->TabIndex = 21;
			// 
			// lbl_tva_art
			// 
			this->lbl_tva_art->AutoSize = true;
			this->lbl_tva_art->Location = System::Drawing::Point(538, 377);
			this->lbl_tva_art->Name = L"lbl_tva_art";
			this->lbl_tva_art->Size = System::Drawing::Size(70, 17);
			this->lbl_tva_art->TabIndex = 20;
			this->lbl_tva_art->Text = L"Taux TVA";
			// 
			// lbl_prixht_art
			// 
			this->lbl_prixht_art->AutoSize = true;
			this->lbl_prixht_art->Location = System::Drawing::Point(538, 332);
			this->lbl_prixht_art->Name = L"lbl_prixht_art";
			this->lbl_prixht_art->Size = System::Drawing::Size(54, 17);
			this->lbl_prixht_art->TabIndex = 19;
			this->lbl_prixht_art->Text = L"Prix HT";
			// 
			// lbl_nom_art
			// 
			this->lbl_nom_art->AutoSize = true;
			this->lbl_nom_art->Location = System::Drawing::Point(538, 287);
			this->lbl_nom_art->Name = L"lbl_nom_art";
			this->lbl_nom_art->Size = System::Drawing::Size(80, 17);
			this->lbl_nom_art->TabIndex = 18;
			this->lbl_nom_art->Text = L"Nom Article";
			// 
			// lbl_ref_art
			// 
			this->lbl_ref_art->AutoSize = true;
			this->lbl_ref_art->Location = System::Drawing::Point(538, 242);
			this->lbl_ref_art->Name = L"lbl_ref_art";
			this->lbl_ref_art->Size = System::Drawing::Size(30, 17);
			this->lbl_ref_art->TabIndex = 17;
			this->lbl_ref_art->Text = L"Ref";
			// 
			// txt_prixht_art
			// 
			this->txt_prixht_art->Location = System::Drawing::Point(541, 352);
			this->txt_prixht_art->Name = L"txt_prixht_art";
			this->txt_prixht_art->Size = System::Drawing::Size(100, 22);
			this->txt_prixht_art->TabIndex = 16;
			// 
			// txt_nom_art
			// 
			this->txt_nom_art->Location = System::Drawing::Point(541, 304);
			this->txt_nom_art->Name = L"txt_nom_art";
			this->txt_nom_art->Size = System::Drawing::Size(100, 22);
			this->txt_nom_art->TabIndex = 15;
			// 
			// txt_ref_art
			// 
			this->txt_ref_art->Location = System::Drawing::Point(541, 262);
			this->txt_ref_art->Name = L"txt_ref_art";
			this->txt_ref_art->Size = System::Drawing::Size(100, 22);
			this->txt_ref_art->TabIndex = 14;
			// 
			// lbl_console_stck
			// 
			this->lbl_console_stck->AutoSize = true;
			this->lbl_console_stck->Location = System::Drawing::Point(32, 463);
			this->lbl_console_stck->Name = L"lbl_console_stck";
			this->lbl_console_stck->Size = System::Drawing::Size(46, 17);
			this->lbl_console_stck->TabIndex = 13;
			this->lbl_console_stck->Text = L"label1";
			// 
			// list_console_stck
			// 
			this->list_console_stck->FormattingEnabled = true;
			this->list_console_stck->ItemHeight = 16;
			this->list_console_stck->Location = System::Drawing::Point(16, 477);
			this->list_console_stck->Name = L"list_console_stck";
			this->list_console_stck->Size = System::Drawing::Size(1147, 52);
			this->list_console_stck->TabIndex = 12;
			// 
			// txt_quantite_produit_stck
			// 
			this->txt_quantite_produit_stck->Location = System::Drawing::Point(177, 307);
			this->txt_quantite_produit_stck->Name = L"txt_quantite_produit_stck";
			this->txt_quantite_produit_stck->Size = System::Drawing::Size(302, 22);
			this->txt_quantite_produit_stck->TabIndex = 11;
			// 
			// txt_id_stck
			// 
			this->txt_id_stck->Location = System::Drawing::Point(177, 262);
			this->txt_id_stck->Name = L"txt_id_stck";
			this->txt_id_stck->Size = System::Drawing::Size(302, 22);
			this->txt_id_stck->TabIndex = 10;
			// 
			// lbl_id_stck
			// 
			this->lbl_id_stck->AutoSize = true;
			this->lbl_id_stck->Location = System::Drawing::Point(174, 241);
			this->lbl_id_stck->Name = L"lbl_id_stck";
			this->lbl_id_stck->Size = System::Drawing::Size(58, 17);
			this->lbl_id_stck->TabIndex = 8;
			this->lbl_id_stck->Text = L"Stock Id";
			// 
			// lbl_seuil_reap_stck
			// 
			this->lbl_seuil_reap_stck->AutoSize = true;
			this->lbl_seuil_reap_stck->Location = System::Drawing::Point(174, 332);
			this->lbl_seuil_reap_stck->Name = L"lbl_seuil_reap_stck";
			this->lbl_seuil_reap_stck->Size = System::Drawing::Size(168, 17);
			this->lbl_seuil_reap_stck->TabIndex = 6;
			this->lbl_seuil_reap_stck->Text = L"Seuil réaprovisionnement";
			// 
			// lbl_stock_quantite_stck
			// 
			this->lbl_stock_quantite_stck->AutoSize = true;
			this->lbl_stock_quantite_stck->Location = System::Drawing::Point(174, 287);
			this->lbl_stock_quantite_stck->Name = L"lbl_stock_quantite_stck";
			this->lbl_stock_quantite_stck->Size = System::Drawing::Size(111, 17);
			this->lbl_stock_quantite_stck->TabIndex = 5;
			this->lbl_stock_quantite_stck->Text = L"Quantite Produit";
			// 
			// txt_seuil_reap_stck
			// 
			this->txt_seuil_reap_stck->Location = System::Drawing::Point(177, 352);
			this->txt_seuil_reap_stck->Name = L"txt_seuil_reap_stck";
			this->txt_seuil_reap_stck->Size = System::Drawing::Size(302, 22);
			this->txt_seuil_reap_stck->TabIndex = 4;
			// 
			// btn_modifier_stck
			// 
			this->btn_modifier_stck->Location = System::Drawing::Point(16, 338);
			this->btn_modifier_stck->Name = L"btn_modifier_stck";
			this->btn_modifier_stck->Size = System::Drawing::Size(110, 50);
			this->btn_modifier_stck->TabIndex = 3;
			this->btn_modifier_stck->Text = L"MODIFIER";
			this->btn_modifier_stck->UseVisualStyleBackColor = true;
			this->btn_modifier_stck->Click += gcnew System::EventHandler(this, &MyForm::btn_modifier_stck_Click);
			// 
			// btn_supprimer_stck
			// 
			this->btn_supprimer_stck->Location = System::Drawing::Point(16, 280);
			this->btn_supprimer_stck->Name = L"btn_supprimer_stck";
			this->btn_supprimer_stck->Size = System::Drawing::Size(110, 50);
			this->btn_supprimer_stck->TabIndex = 2;
			this->btn_supprimer_stck->Text = L"SUPPRIMER";
			this->btn_supprimer_stck->UseVisualStyleBackColor = true;
			this->btn_supprimer_stck->Click += gcnew System::EventHandler(this, &MyForm::btn_supprimer_stck_Click);
			// 
			// btn_inserer_stck
			// 
			this->btn_inserer_stck->Location = System::Drawing::Point(16, 224);
			this->btn_inserer_stck->Name = L"btn_inserer_stck";
			this->btn_inserer_stck->Size = System::Drawing::Size(110, 50);
			this->btn_inserer_stck->TabIndex = 1;
			this->btn_inserer_stck->Text = L"INSÉRER";
			this->btn_inserer_stck->UseVisualStyleBackColor = true;
			this->btn_inserer_stck->Click += gcnew System::EventHandler(this, &MyForm::btn_inserer_click_stck);
			// 
			// dgv_stck
			// 
			this->dgv_stck->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_stck->Location = System::Drawing::Point(16, 20);
			this->dgv_stck->Name = L"dgv_stck";
			this->dgv_stck->RowHeadersWidth = 51;
			this->dgv_stck->RowTemplate->Height = 24;
			this->dgv_stck->Size = System::Drawing::Size(1147, 184);
			this->dgv_stck->TabIndex = 0;
			this->dgv_stck->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_stck_CellContentClick);
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Margin = System::Windows::Forms::Padding(2);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(2);
			this->tabPage5->Size = System::Drawing::Size(1182, 560);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Statistiques";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage3_comm
			// 
			this->tabPage3_comm->Location = System::Drawing::Point(0, 0);
			this->tabPage3_comm->Name = L"tabPage3_comm";
			this->tabPage3_comm->Size = System::Drawing::Size(200, 100);
			this->tabPage3_comm->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(1262, 626);
			this->Controls->Add(this->tabPage_comm);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_cl))->EndInit();
			this->tabPage_comm->ResumeLayout(false);
			this->tabPage_cl->ResumeLayout(false);
			this->tabPage_cl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_aff_adr_cl))->EndInit();
			this->tabPage_pers->ResumeLayout(false);
			this->tabPage_pers->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_pers))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_comm))->EndInit();
			this->tabPage_stck->ResumeLayout(false);
			this->tabPage_stck->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_stck))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Initialisation du myform
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_cl->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_cl->Text, "TB_PEOPLE");
		this->dgv_cl->DataSource = this->oDs;
		this->dgv_cl->DataMember = "TB_PEOPLE";

		//Load data Stock
		this->oSvc = gcnew NS_Comp_Svc::CLservices();	
		this->dgv_stck->Refresh();
		this->oDs = this->oSvc->selectionnerTousLeStock("TB_STOCK");
		this->dgv_stck->DataSource = this->oDs;
		this->dgv_stck->DataMember = "TB_STOCK";

		//Load data personnel
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_pers->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel(this->txt_type_pers->Text, "TB_PEOPLE");
		this->dgv_pers->DataSource = this->oDs;
		this->dgv_pers->DataMember = "TB_PEOPLE";

		//Load data Commande
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_comm->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("TB_COMMANDE");
		this->dgv_comm->DataSource = this->oDs;
		this->dgv_comm->DataMember = "TB_COMMANDE";
	}

	//Click sur le boutton Insérer de l'onglet Clients
	private: System::Void btn_insert_click_cl(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnClient(this->txt_type_cl->Text, this->txt_date_naissance_cl->Text, this->txt_date_premier_achat_cl->Text, this->txt_genre_cl->Text, this->txt_nom_cl->Text, this->txt_prenom_cl->Text);
		
		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_cl->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_cl->Text, "TB_PEOPLE");
		this->dgv_cl->DataSource = this->oDs;
		this->dgv_cl->DataMember = "TB_PEOPLE";

		//Affichage de la personne ajouter
		this->list_console_cl->Items->Add("Personne ajouter, Id :" + this->txt_id_cl->Text + ", Nom =" + this->txt_nom_cl->Text + " OK");
	}

	//Click sur le boutton Supprimer de l'onglet Clients
	private: System::Void btn_delete_click_cl(System::Object^ sender, System::EventArgs^ e)
	{
		String^ textVal = this->txt_id_cl->Text;
		int id_people = System::Convert::ToInt32(textVal);
		//String^ textVal = this->txt_id_cl->Text;
		//float id_people = System::Convert::ToDouble(textVal);
		this->oSvc->supprimerUnClient(id_people);

		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_cl->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_cl->Text, "TB_PEOPLE");
		this->dgv_cl->DataSource = this->oDs;
		this->dgv_cl->DataMember = "TB_PEOPLE";

		//Affichage de la personne supprimer
		this->list_console_cl->Items->Add("Personne suprimer, Id :" + this->txt_id_cl->Text + ", Nom ="+ this->txt_nom_cl->Text +" OK");
	}

	//Click sur le boutton Modifier de l'onglet Clients
	private: System::Void btn_update_click_cl(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ textVal = this->txt_id_cl->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->modifierUnClient(this->txt_date_naissance_cl->Text, this->txt_date_premier_achat_cl->Text, this->txt_genre_cl->Text, this->txt_nom_cl->Text, this->txt_prenom_cl->Text, id_people);
	

		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_cl->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_cl->Text, "TB_PEOPLE");
		this->dgv_cl->DataSource = this->oDs;
		this->dgv_cl->DataMember = "TB_PEOPLE";

		//Affichage de la personne modifier
		this->list_console_cl->Items->Add("Personne modifier, Id :" + this->txt_id_cl->Text + ", Nom ="+ this->txt_nom_cl->Text +" OK");
	}
	private: System::Void aff_adr_cl_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ val = this->txt_id_cl->Text;
		int id = System::Convert::ToInt32(val);

		//Load data Adresse
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_aff_adr_cl->Refresh();
		this->oDs = this->oSvc->afficherAdresseClient(id, "TB_ADRESSE");
		this->dgv_aff_adr_cl->DataSource = this->oDs;
		this->dgv_aff_adr_cl->DataMember = "TB_ADRESSE";
	}
	private: System::Void ajt_adr_cl_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ val = this->txt_id_cl->Text;
		int id = System::Convert::ToInt32(val);

		this->oSvc->ajouterAdresseClient(this->txt_adr_livraison_cl->Text, this->txt_adr_facturation_cl->Text, id);

		
		//Load data Adresse
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_aff_adr_cl->Refresh();
		this->oDs = this->oSvc->afficherAdresseClient(id, "TB_ADRESSE");
		this->dgv_aff_adr_cl->DataSource = this->oDs;
		this->dgv_aff_adr_cl->DataMember = "TB_ADRESSE";
	}

	private: System::Void btn_inserer_click_stck(System::Object^ sender, System::EventArgs^ e)
	{
		String^ textquantite = this->txt_quantite_produit_stck->Text;
		int quantiteProduit = System::Convert::ToInt32(textquantite);
		String^ textseuil = this->txt_seuil_reap_stck->Text;
		int seuilReap = System::Convert::ToInt32(textseuil);
		String^ textref = this->txt_ref_art->Text;
		int ref = System::Convert::ToInt32(textref);
		String^ textprixht = this->txt_prixht_art->Text;
		int prixht = System::Convert::ToInt32(textprixht);
		String^ texttaux = this->txt_taux_tva_art->Text;
		int taux = System::Convert::ToInt32(texttaux);
		
		this->oSvc->ajouterUnStock(ref, this->txt_nom_art->Text, prixht, taux, quantiteProduit, seuilReap);

		//Load data Stock
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_stck->Refresh();
		this->oDs = this->oSvc->selectionnerTousLeStock("TB_STOCK");
		this->dgv_stck->DataSource = this->oDs;
		this->dgv_stck->DataMember = "TB_STOCK";
	}
	private: System::Void btn_supprimer_stck_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ txtid = this->txt_id_stck->Text;
		int id = System::Convert::ToInt32(txtid);

		this->oSvc->supprimerUnStock(id);

		//Load data Stock
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_stck->Refresh();
		this->oDs = this->oSvc->selectionnerTousLeStock("TB_STOCK");
		this->dgv_stck->DataSource = this->oDs;
		this->dgv_stck->DataMember = "TB_STOCK";
	}
	private: System::Void btn_modifier_stck_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ textquantite = this->txt_quantite_produit_stck->Text;
		int quantiteProduit = System::Convert::ToInt32(textquantite);
		String^ textseuil = this->txt_seuil_reap_stck->Text;
		int seuilReap = System::Convert::ToInt32(textseuil);
		String^ textref = this->txt_ref_art->Text;
		int ref = System::Convert::ToInt32(textref);
		String^ textprixht = this->txt_prixht_art->Text;
		int prixht = System::Convert::ToInt32(textprixht);
		String^ texttaux = this->txt_taux_tva_art->Text;
		int taux = System::Convert::ToInt32(texttaux);
		String^ txtid = this->txt_id_stck->Text;
		int id = System::Convert::ToInt32(txtid);

		this->oSvc->modifierUnStock(ref, this->txt_nom_art->Text, prixht, taux, quantiteProduit, seuilReap, id);

		//Load data Stock
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_stck->Refresh();
		this->oDs = this->oSvc->selectionnerTousLeStock("TB_STOCK");
		this->dgv_stck->DataSource = this->oDs;
		this->dgv_stck->DataMember = "TB_STOCK";
	}
	private: System::Void dgv_cl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int rowIndex = e->RowIndex;
		DataGridViewRow^ rowv = dgv_cl->Rows[rowIndex];
		this->txt_id_cl->Text = rowv->Cells["id_ppl"]->Value->ToString();
		this->txt_nom_cl->Text = rowv->Cells["ppl_nom"]->Value->ToString();
		this->txt_prenom_cl->Text = rowv->Cells["ppl_prenom"]->Value->ToString();
		this->txt_date_naissance_cl->Text = rowv->Cells["cl_date_naissance"]->Value->ToString();
		this->txt_date_premier_achat_cl->Text = rowv->Cells["CL_date_premier_achat"]->Value->ToString();
		this->txt_genre_cl->Text = rowv->Cells["ppl_gender"]->Value->ToString();
	}
	private: System::Void dgv_stck_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int rowIndex = e->RowIndex;
		DataGridViewRow^ rowv = dgv_stck->Rows[rowIndex];
		this->txt_id_stck->Text = rowv->Cells["st_id"]->Value->ToString();
		this->txt_ref_art->Text = rowv->Cells["art_ref"]->Value->ToString();
		this->txt_nom_art->Text = rowv->Cells["art_name"]->Value->ToString();
		this->txt_prixht_art->Text = rowv->Cells["art_prix_ht"]->Value->ToString();
		this->txt_taux_tva_art->Text = rowv->Cells["art_taux_tva"]->Value->ToString();
		this->txt_quantite_produit_stck->Text = rowv->Cells["st_prod_quantite"]->Value->ToString();
		this->txt_seuil_reap_stck->Text = rowv->Cells["st_seuil_reap"]->Value->ToString();
	}
	private: System::Void button_update2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ textVal = this->txt_id_pers->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->modifierUnPersonnel(this->txt_nom_pers->Text, this->txt_prenom_pers->Text,this->txt_genre_pers->Text,this->txt_date_emb_pers->Text,this->txt_date_emb_sup_pers->Text,this->txt_adr_pers->Text,this->txt_nom_sup_pers->Text, id_people);

		//Load data
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_pers->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel(this->txt_type_pers->Text, "TB_PEOPLE");
		this->dgv_pers->DataSource = this->oDs;
		this->dgv_pers->DataMember = "TB_PEOPLE";

		//Affichage de la personne modifier
		this->listBox2->Items->Add("Personne modifiée, Id :" + this->txt_id_pers->Text + ", Nom =" + this->txt_nom_pers->Text + " OK");
	}
	private: System::Void button_insert2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oSvc->ajouterUnPersonnel(this->txt_nom_pers->Text, this->txt_prenom_pers->Text, this->txt_genre_pers->Text, this->txt_date_emb_pers->Text, this->txt_date_emb_sup_pers->Text, this->txt_adr_pers->Text, this->txt_nom_sup_pers->Text);
		//Load data
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_pers->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel(this->txt_type_pers->Text, "TB_PEOPLE");
		this->dgv_pers->DataSource = this->oDs;
		this->dgv_pers->DataMember = "TB_PEOPLE";

		//Affichage de la personne ajouter
		this->listBox2->Items->Add("Personne ajoutée, Id :" + this->txt_id_pers->Text + ", Nom =" + this->txt_nom_pers->Text + " OK");

	}
	private: System::Void button_delete2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ textVal = this->txt_id_pers->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->suprimerUnPersonnel(id_people);

		//Load data
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_pers->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel(this->txt_type_pers->Text, "TB_PEOPLE");
		this->dgv_pers->DataSource = this->oDs;
		this->dgv_pers->DataMember = "TB_PEOPLE";

		//Affichage de la personne supprimer
		this->listBox2->Items->Add("Personne suprimée, Id :" + this->txt_id_pers->Text + ", Nom =" + this->txt_nom_pers->Text + " OK");
	}

	private: System::Void dgv_PER_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int rowIndex = e->RowIndex;
		DataGridViewRow^ rowv = dgv_pers->Rows[rowIndex];

		this->txt_id_pers->Text = rowv->Cells["id_ppl"]->Value->ToString();
		this->txt_genre_pers->Text = rowv->Cells["ppl_gender"]->Value->ToString();
		this->txt_nom_pers->Text = rowv->Cells["ppl_nom"]->Value->ToString();
		this->txt_prenom_pers->Text = rowv->Cells["ppl_prenom"]->Value->ToString();
		this->txt_date_emb_pers->Text = rowv->Cells["p_emb_date"]->Value->ToString();
		this->txt_adr_pers->Text = rowv->Cells["p_adresse"]->Value->ToString();
		this->txt_nom_sup_pers->Text = rowv->Cells["p_sup_name"]->Value->ToString();
		this->txt_date_emb_sup_pers->Text = rowv->Cells["p_sup_emb_date"]->Value->ToString();
	};
	// Gestion des commandes
	private: System::Void btn_insert_Click_Comm(System::Object^ sender, System::EventArgs^ e)
	{

		String^ textVal = this->text_id_comm->Text;
		int id_com = System::Convert::ToInt32(textVal);

		String^ textVal1 = this->text_article_comm->Text;
		int com_tot_ar = System::Convert::ToInt32(textVal1);

		String^ textVal2 = this->text_ht_comm->Text;
		double com_tot_ht = System::Convert::ToDouble(textVal2);

		String^ textVal3 = this->text_tva_comm->Text;
		double com_tot_tva = System::Convert::ToDouble(textVal3);

		String^ textVal4 = this->text_ttc_comm->Text;
		double com_tot_ttc = System::Convert::ToDouble(textVal4);

		String^ textVal5 = this->text_id_paiement_comm->Text;
		int id_paiement = System::Convert::ToInt32(textVal5);

		this->oSvc->ajouterUneCommande(this->text_ref_comm->Text, this->text_date_prevu_comm->Text, this->text_date_em_comm->Text, com_tot_ar, com_tot_ht, com_tot_tva, com_tot_ttc, id_paiement);

		//Load data
		this->dgv_comm->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("TB_COMMANDE");
		this->dgv_comm->DataSource = this->oDs;
		this->dgv_comm->DataMember = "TB_COMMANDE";

		//Affichage de la commande ajouter
		this->listBox_console_comm->Items->Add("Commande ajouter, Id :" + this->text_id_comm->Text + ", Reference =" + this->text_ref_comm->Text + " OK"); // a modifier
	}
	private: System::Void btn_del_comm_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ textVal = this->text_id_comm->Text;

		int id_com = System::Convert::ToInt32(textVal);
		this->oSvc->suprimerUneCommande(id_com);


		//Load data
		this->dgv_comm->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("TB_COMMANDE");
		this->dgv_comm->DataSource = this->oDs;
		this->dgv_comm->DataMember = "TB_COMMANDE";

		//Affichage de la commande supprimer
		this->listBox_console_comm->Items->Add("Commande suprimer, Id :" + this->text_id_comm->Text + ", reference =" + this->text_ref_comm->Text + " OK");

	}
	private: System::Void btn_modif_comm_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ textVal = this->text_id_comm->Text;
		int id_com = System::Convert::ToInt32(textVal);

		String^ textVal1 = this->text_article_comm->Text;
		int com_tot_ar = System::Convert::ToInt32(textVal1);

		String^ textVal2 = this->text_ht_comm->Text;
		double com_tot_ht = System::Convert::ToDouble(textVal2);

		String^ textVal3 = this->text_tva_comm->Text;
		double com_tot_tva = System::Convert::ToDouble(textVal3);

		String^ textVal4 = this->text_ttc_comm->Text;
		double com_tot_ttc = System::Convert::ToDouble(textVal4);

		String^ textVal5 = this->text_id_paiement_comm->Text;
		int id_paiement = System::Convert::ToInt32(textVal5);

		this->oSvc->modifierUneCommande(this->text_ref_comm->Text, this->text_date_prevu_comm->Text, this->text_date_em_comm->Text, com_tot_ar, com_tot_ht, com_tot_tva, com_tot_ttc, id_paiement, id_com);
		//Load data
		this->dgv_comm->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("TB_COMMANDE");
		this->dgv_comm->DataSource = this->oDs;
		this->dgv_comm->DataMember = "TB_COMMANDE";

		//Affichage de la commande modifier
		this->listBox_console_comm->Items->Add("Commande modifier, Id :" + this->text_id_comm->Text + ", Reference =" + this->text_ref_comm->Text + " OK");
	}

	private: System::Void dgv_comm_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int rowIndex = e->RowIndex;
		DataGridViewRow^ rowv = dgv_comm->Rows[rowIndex];

		this->txt_id_comm->Text = rowv->Cells["id_com"]->Value->ToString();
		this->txt_ref_comm->Text = rowv->Cells["com_ref"]->Value->ToString();
		this->txt_date_em_comm->Text = rowv->Cells["com_date_prevue"]->Value->ToString();
		this->txt_date_prevu_comm->Text = rowv->Cells["com_date_emission"]->Value->ToString();
		this->txt_taux_tva_art->Text = rowv->Cells["com_tot_ar"]->Value->ToString();
		this->txt_ttc_comm->Text = rowv->Cells["com_tot_ht"]->Value->ToString();
		this->txt_tva_comm->Text = rowv->Cells["com_tot_tva"]->Value->ToString();
		this->txt_ttc_comm->Text = rowv->Cells["com_tot_ttc"]->Value->ToString();
		this->txt_id_paiement_comm->Text = rowv->Cells["pai_id"]->Value->ToString();
	}
};
}
