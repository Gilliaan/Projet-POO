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
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tab_cl;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tab_cl = (gcnew System::Windows::Forms::TabPage());
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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_cl))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tab_cl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_aff_adr_cl))->BeginInit();
			this->tabPage4->SuspendLayout();
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
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tab_cl);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(34, 25);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1190, 582);
			this->tabControl1->TabIndex = 11;
			// 
			// tab_cl
			// 
			this->tab_cl->BackColor = System::Drawing::Color::White;
			this->tab_cl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tab_cl->Controls->Add(this->lbl_dgv_adresse_cl);
			this->tab_cl->Controls->Add(this->ajt_adr_cl);
			this->tab_cl->Controls->Add(this->aff_adr_cl);
			this->tab_cl->Controls->Add(this->dgv_aff_adr_cl);
			this->tab_cl->Controls->Add(this->lbl_console_cl);
			this->tab_cl->Controls->Add(this->lbl_date_premier_achat_cl);
			this->tab_cl->Controls->Add(this->txt_date_premier_achat_cl);
			this->tab_cl->Controls->Add(this->lbl_date_naissance_cl);
			this->tab_cl->Controls->Add(this->txt_date_naissance_cl);
			this->tab_cl->Controls->Add(this->lbl_adr_facturation_cl);
			this->tab_cl->Controls->Add(this->lbl_adr_livraison_cl);
			this->tab_cl->Controls->Add(this->txt_adr_facturation_cl);
			this->tab_cl->Controls->Add(this->txt_adr_livraison_cl);
			this->tab_cl->Controls->Add(this->lbl_genre_cl);
			this->tab_cl->Controls->Add(this->txt_genre_cl);
			this->tab_cl->Controls->Add(this->lbl_type_personne_cl);
			this->tab_cl->Controls->Add(this->txt_type_cl);
			this->tab_cl->Controls->Add(this->list_console_cl);
			this->tab_cl->Controls->Add(this->dgv_cl);
			this->tab_cl->Controls->Add(this->btn_supprimer_cl);
			this->tab_cl->Controls->Add(this->btn_modifier_cl);
			this->tab_cl->Controls->Add(this->lbl_nom_cl);
			this->tab_cl->Controls->Add(this->txt_id_cl);
			this->tab_cl->Controls->Add(this->btn_inserer_cl);
			this->tab_cl->Controls->Add(this->lbl_prenom_cl);
			this->tab_cl->Controls->Add(this->txt_nom_cl);
			this->tab_cl->Controls->Add(this->lbl_id_cl);
			this->tab_cl->Controls->Add(this->txt_prenom_cl);
			this->tab_cl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tab_cl->Location = System::Drawing::Point(4, 25);
			this->tab_cl->Name = L"tab_cl";
			this->tab_cl->Padding = System::Windows::Forms::Padding(3);
			this->tab_cl->Size = System::Drawing::Size(1182, 553);
			this->tab_cl->TabIndex = 0;
			this->tab_cl->Text = L"Clients";
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
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1182, 553);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1182, 553);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Commandes";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->txt_taux_tva_art);
			this->tabPage4->Controls->Add(this->lbl_tva_art);
			this->tabPage4->Controls->Add(this->lbl_prixht_art);
			this->tabPage4->Controls->Add(this->lbl_nom_art);
			this->tabPage4->Controls->Add(this->lbl_ref_art);
			this->tabPage4->Controls->Add(this->txt_prixht_art);
			this->tabPage4->Controls->Add(this->txt_nom_art);
			this->tabPage4->Controls->Add(this->txt_ref_art);
			this->tabPage4->Controls->Add(this->lbl_console_stck);
			this->tabPage4->Controls->Add(this->list_console_stck);
			this->tabPage4->Controls->Add(this->txt_quantite_produit_stck);
			this->tabPage4->Controls->Add(this->txt_id_stck);
			this->tabPage4->Controls->Add(this->lbl_id_stck);
			this->tabPage4->Controls->Add(this->lbl_seuil_reap_stck);
			this->tabPage4->Controls->Add(this->lbl_stock_quantite_stck);
			this->tabPage4->Controls->Add(this->txt_seuil_reap_stck);
			this->tabPage4->Controls->Add(this->btn_modifier_stck);
			this->tabPage4->Controls->Add(this->btn_supprimer_stck);
			this->tabPage4->Controls->Add(this->btn_inserer_stck);
			this->tabPage4->Controls->Add(this->dgv_stck);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1182, 553);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Stock";
			this->tabPage4->UseVisualStyleBackColor = true;
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
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1182, 553);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Statistiques";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(1262, 626);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_cl))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tab_cl->ResumeLayout(false);
			this->tab_cl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_aff_adr_cl))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
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
		double prixht = System::Convert::ToDouble(textprixht);
		String^ texttaux = this->txt_taux_tva_art->Text;
		double taux = System::Convert::ToDouble(texttaux);
		
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
		double prixht = System::Convert::ToDouble(textprixht);
		String^ texttaux = this->txt_taux_tva_art->Text;
		double taux = System::Convert::ToDouble(texttaux);
		String^ txtid = this->txt_ref_art->Text;
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


};
}
