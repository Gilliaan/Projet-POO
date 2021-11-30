#pragma once
#include "CLservice.h"

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
	private: System::Windows::Forms::DataGridView^ dgv_Clients;
	private: System::Windows::Forms::Button^ btn_inserer_clients;
	private: System::Windows::Forms::Button^ btn_supprimer_clients;
	protected:



	private: System::Windows::Forms::Button^ btn_modifier_clients;
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
	private: System::Windows::Forms::TabPage^ tab_client;

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







	private: System::Windows::Forms::DataGridView^ dgv_Stock;
	private: System::Windows::Forms::Button^ btn_modifier_stock;

	private: System::Windows::Forms::Button^ btn_supprimer_stock;




	private: System::Windows::Forms::Button^ btn_insérer_stock;

	private: System::Windows::Forms::TextBox^ txt_quantite_produit;
	private: System::Windows::Forms::TextBox^ txt_stock_id;


	private: System::Windows::Forms::TextBox^ txt_id_article;

	private: System::Windows::Forms::Label^ lbl_Stock_Id;
	private: System::Windows::Forms::Label^ lbl_Art_Id;
	private: System::Windows::Forms::Label^ lbl_Stock_reap;
	private: System::Windows::Forms::Label^ lbl_Stock_Quantite;
	private: System::Windows::Forms::TextBox^ txt_seuil_reap;










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
			this->dgv_Clients = (gcnew System::Windows::Forms::DataGridView());
			this->btn_inserer_clients = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer_clients = (gcnew System::Windows::Forms::Button());
			this->btn_modifier_clients = (gcnew System::Windows::Forms::Button());
			this->txt_id_cl = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_cl = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom_cl = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id_cl = (gcnew System::Windows::Forms::Label());
			this->lbl_prenom_cl = (gcnew System::Windows::Forms::Label());
			this->lbl_nom_cl = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tab_client = (gcnew System::Windows::Forms::TabPage());
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
			this->txt_quantite_produit = (gcnew System::Windows::Forms::TextBox());
			this->txt_stock_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_article = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Stock_Id = (gcnew System::Windows::Forms::Label());
			this->lbl_Art_Id = (gcnew System::Windows::Forms::Label());
			this->lbl_Stock_reap = (gcnew System::Windows::Forms::Label());
			this->lbl_Stock_Quantite = (gcnew System::Windows::Forms::Label());
			this->txt_seuil_reap = (gcnew System::Windows::Forms::TextBox());
			this->btn_modifier_stock = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer_stock = (gcnew System::Windows::Forms::Button());
			this->btn_insérer_stock = (gcnew System::Windows::Forms::Button());
			this->dgv_Stock = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Clients))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tab_client->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Stock))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_Clients
			// 
			this->dgv_Clients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Clients->Location = System::Drawing::Point(16, 18);
			this->dgv_Clients->Margin = System::Windows::Forms::Padding(4);
			this->dgv_Clients->Name = L"dgv_Clients";
			this->dgv_Clients->RowHeadersWidth = 51;
			this->dgv_Clients->Size = System::Drawing::Size(1145, 183);
			this->dgv_Clients->TabIndex = 0;
			// 
			// btn_inserer_clients
			// 
			this->btn_inserer_clients->BackColor = System::Drawing::Color::Transparent;
			this->btn_inserer_clients->Location = System::Drawing::Point(16, 215);
			this->btn_inserer_clients->Margin = System::Windows::Forms::Padding(4);
			this->btn_inserer_clients->Name = L"btn_inserer_clients";
			this->btn_inserer_clients->Size = System::Drawing::Size(121, 46);
			this->btn_inserer_clients->TabIndex = 2;
			this->btn_inserer_clients->Text = L"INSÉRER";
			this->btn_inserer_clients->UseVisualStyleBackColor = false;
			this->btn_inserer_clients->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Clients_Click);
			// 
			// btn_supprimer_clients
			// 
			this->btn_supprimer_clients->Location = System::Drawing::Point(16, 322);
			this->btn_supprimer_clients->Margin = System::Windows::Forms::Padding(4);
			this->btn_supprimer_clients->Name = L"btn_supprimer_clients";
			this->btn_supprimer_clients->Size = System::Drawing::Size(121, 46);
			this->btn_supprimer_clients->TabIndex = 3;
			this->btn_supprimer_clients->Text = L"SUPPRIMER";
			this->btn_supprimer_clients->UseVisualStyleBackColor = true;
			this->btn_supprimer_clients->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Clients_Click);
			// 
			// btn_modifier_clients
			// 
			this->btn_modifier_clients->Location = System::Drawing::Point(16, 268);
			this->btn_modifier_clients->Margin = System::Windows::Forms::Padding(4);
			this->btn_modifier_clients->Name = L"btn_modifier_clients";
			this->btn_modifier_clients->Size = System::Drawing::Size(121, 46);
			this->btn_modifier_clients->TabIndex = 4;
			this->btn_modifier_clients->Text = L"MODIFIER";
			this->btn_modifier_clients->UseVisualStyleBackColor = true;
			this->btn_modifier_clients->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Clients_Click);
			// 
			// txt_id_cl
			// 
			this->txt_id_cl->Location = System::Drawing::Point(166, 239);
			this->txt_id_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_cl->Name = L"txt_id_cl";
			this->txt_id_cl->Size = System::Drawing::Size(42, 22);
			this->txt_id_cl->TabIndex = 5;
			// 
			// txt_nom_cl
			// 
			this->txt_nom_cl->Location = System::Drawing::Point(294, 239);
			this->txt_nom_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom_cl->Name = L"txt_nom_cl";
			this->txt_nom_cl->Size = System::Drawing::Size(126, 22);
			this->txt_nom_cl->TabIndex = 6;
			// 
			// txt_prenom_cl
			// 
			this->txt_prenom_cl->Location = System::Drawing::Point(449, 239);
			this->txt_prenom_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom_cl->Name = L"txt_prenom_cl";
			this->txt_prenom_cl->Size = System::Drawing::Size(126, 22);
			this->txt_prenom_cl->TabIndex = 7;
			// 
			// lbl_id_cl
			// 
			this->lbl_id_cl->AutoSize = true;
			this->lbl_id_cl->Location = System::Drawing::Point(163, 215);
			this->lbl_id_cl->Name = L"lbl_id_cl";
			this->lbl_id_cl->Size = System::Drawing::Size(19, 17);
			this->lbl_id_cl->TabIndex = 8;
			this->lbl_id_cl->Text = L"Id";
			// 
			// lbl_prenom_cl
			// 
			this->lbl_prenom_cl->AutoSize = true;
			this->lbl_prenom_cl->Location = System::Drawing::Point(446, 218);
			this->lbl_prenom_cl->Name = L"lbl_prenom_cl";
			this->lbl_prenom_cl->Size = System::Drawing::Size(57, 17);
			this->lbl_prenom_cl->TabIndex = 9;
			this->lbl_prenom_cl->Text = L"Prenom";
			// 
			// lbl_nom_cl
			// 
			this->lbl_nom_cl->AutoSize = true;
			this->lbl_nom_cl->Location = System::Drawing::Point(291, 218);
			this->lbl_nom_cl->Name = L"lbl_nom_cl";
			this->lbl_nom_cl->Size = System::Drawing::Size(37, 17);
			this->lbl_nom_cl->TabIndex = 10;
			this->lbl_nom_cl->Text = L"Nom";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tab_client);
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
			// tab_client
			// 
			this->tab_client->BackColor = System::Drawing::Color::White;
			this->tab_client->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tab_client->Controls->Add(this->lbl_console_cl);
			this->tab_client->Controls->Add(this->lbl_date_premier_achat_cl);
			this->tab_client->Controls->Add(this->txt_date_premier_achat_cl);
			this->tab_client->Controls->Add(this->lbl_date_naissance_cl);
			this->tab_client->Controls->Add(this->txt_date_naissance_cl);
			this->tab_client->Controls->Add(this->lbl_adr_facturation_cl);
			this->tab_client->Controls->Add(this->lbl_adr_livraison_cl);
			this->tab_client->Controls->Add(this->txt_adr_facturation_cl);
			this->tab_client->Controls->Add(this->txt_adr_livraison_cl);
			this->tab_client->Controls->Add(this->lbl_genre_cl);
			this->tab_client->Controls->Add(this->txt_genre_cl);
			this->tab_client->Controls->Add(this->lbl_type_personne_cl);
			this->tab_client->Controls->Add(this->txt_type_cl);
			this->tab_client->Controls->Add(this->list_console_cl);
			this->tab_client->Controls->Add(this->dgv_Clients);
			this->tab_client->Controls->Add(this->btn_supprimer_clients);
			this->tab_client->Controls->Add(this->btn_modifier_clients);
			this->tab_client->Controls->Add(this->lbl_nom_cl);
			this->tab_client->Controls->Add(this->txt_id_cl);
			this->tab_client->Controls->Add(this->btn_inserer_clients);
			this->tab_client->Controls->Add(this->lbl_prenom_cl);
			this->tab_client->Controls->Add(this->txt_nom_cl);
			this->tab_client->Controls->Add(this->lbl_id_cl);
			this->tab_client->Controls->Add(this->txt_prenom_cl);
			this->tab_client->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tab_client->Location = System::Drawing::Point(4, 25);
			this->tab_client->Name = L"tab_client";
			this->tab_client->Padding = System::Windows::Forms::Padding(3);
			this->tab_client->Size = System::Drawing::Size(1182, 553);
			this->tab_client->TabIndex = 0;
			this->tab_client->Text = L"Clients";
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
			this->lbl_adr_facturation_cl->Location = System::Drawing::Point(163, 310);
			this->lbl_adr_facturation_cl->Name = L"lbl_adr_facturation_cl";
			this->lbl_adr_facturation_cl->Size = System::Drawing::Size(151, 17);
			this->lbl_adr_facturation_cl->TabIndex = 19;
			this->lbl_adr_facturation_cl->Text = L"Adresse de facturation";
			// 
			// lbl_adr_livraison_cl
			// 
			this->lbl_adr_livraison_cl->AutoSize = true;
			this->lbl_adr_livraison_cl->Location = System::Drawing::Point(163, 284);
			this->lbl_adr_livraison_cl->Name = L"lbl_adr_livraison_cl";
			this->lbl_adr_livraison_cl->Size = System::Drawing::Size(136, 17);
			this->lbl_adr_livraison_cl->TabIndex = 18;
			this->lbl_adr_livraison_cl->Text = L"Adresse de livraison";
			// 
			// txt_adr_facturation_cl
			// 
			this->txt_adr_facturation_cl->Location = System::Drawing::Point(323, 305);
			this->txt_adr_facturation_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_adr_facturation_cl->Name = L"txt_adr_facturation_cl";
			this->txt_adr_facturation_cl->Size = System::Drawing::Size(204, 22);
			this->txt_adr_facturation_cl->TabIndex = 17;
			// 
			// txt_adr_livraison_cl
			// 
			this->txt_adr_livraison_cl->Location = System::Drawing::Point(323, 279);
			this->txt_adr_livraison_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_adr_livraison_cl->Name = L"txt_adr_livraison_cl";
			this->txt_adr_livraison_cl->Size = System::Drawing::Size(204, 22);
			this->txt_adr_livraison_cl->TabIndex = 16;
			// 
			// lbl_genre_cl
			// 
			this->lbl_genre_cl->AutoSize = true;
			this->lbl_genre_cl->Location = System::Drawing::Point(597, 218);
			this->lbl_genre_cl->Name = L"lbl_genre_cl";
			this->lbl_genre_cl->Size = System::Drawing::Size(48, 17);
			this->lbl_genre_cl->TabIndex = 15;
			this->lbl_genre_cl->Text = L"Genre";
			// 
			// txt_genre_cl
			// 
			this->txt_genre_cl->Location = System::Drawing::Point(600, 239);
			this->txt_genre_cl->Margin = System::Windows::Forms::Padding(4);
			this->txt_genre_cl->Name = L"txt_genre_cl";
			this->txt_genre_cl->Size = System::Drawing::Size(126, 22);
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
			this->tabPage4->Controls->Add(this->txt_quantite_produit);
			this->tabPage4->Controls->Add(this->txt_stock_id);
			this->tabPage4->Controls->Add(this->txt_id_article);
			this->tabPage4->Controls->Add(this->lbl_Stock_Id);
			this->tabPage4->Controls->Add(this->lbl_Art_Id);
			this->tabPage4->Controls->Add(this->lbl_Stock_reap);
			this->tabPage4->Controls->Add(this->lbl_Stock_Quantite);
			this->tabPage4->Controls->Add(this->txt_seuil_reap);
			this->tabPage4->Controls->Add(this->btn_modifier_stock);
			this->tabPage4->Controls->Add(this->btn_supprimer_stock);
			this->tabPage4->Controls->Add(this->btn_insérer_stock);
			this->tabPage4->Controls->Add(this->dgv_Stock);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1182, 553);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Stock";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// txt_quantite_produit
			// 
			this->txt_quantite_produit->Location = System::Drawing::Point(177, 307);
			this->txt_quantite_produit->Name = L"txt_quantite_produit";
			this->txt_quantite_produit->Size = System::Drawing::Size(302, 22);
			this->txt_quantite_produit->TabIndex = 11;
			// 
			// txt_stock_id
			// 
			this->txt_stock_id->Location = System::Drawing::Point(177, 262);
			this->txt_stock_id->Name = L"txt_stock_id";
			this->txt_stock_id->Size = System::Drawing::Size(302, 22);
			this->txt_stock_id->TabIndex = 10;
			// 
			// txt_id_article
			// 
			this->txt_id_article->Location = System::Drawing::Point(177, 399);
			this->txt_id_article->Name = L"txt_id_article";
			this->txt_id_article->Size = System::Drawing::Size(302, 22);
			this->txt_id_article->TabIndex = 9;
			// 
			// lbl_Stock_Id
			// 
			this->lbl_Stock_Id->AutoSize = true;
			this->lbl_Stock_Id->Location = System::Drawing::Point(174, 241);
			this->lbl_Stock_Id->Name = L"lbl_Stock_Id";
			this->lbl_Stock_Id->Size = System::Drawing::Size(58, 17);
			this->lbl_Stock_Id->TabIndex = 8;
			this->lbl_Stock_Id->Text = L"Stock Id";
			// 
			// lbl_Art_Id
			// 
			this->lbl_Art_Id->AutoSize = true;
			this->lbl_Art_Id->Location = System::Drawing::Point(174, 379);
			this->lbl_Art_Id->Name = L"lbl_Art_Id";
			this->lbl_Art_Id->Size = System::Drawing::Size(62, 17);
			this->lbl_Art_Id->TabIndex = 7;
			this->lbl_Art_Id->Text = L"Article Id";
			// 
			// lbl_Stock_reap
			// 
			this->lbl_Stock_reap->AutoSize = true;
			this->lbl_Stock_reap->Location = System::Drawing::Point(174, 332);
			this->lbl_Stock_reap->Name = L"lbl_Stock_reap";
			this->lbl_Stock_reap->Size = System::Drawing::Size(168, 17);
			this->lbl_Stock_reap->TabIndex = 6;
			this->lbl_Stock_reap->Text = L"Seuil réaprovisionnement";
			// 
			// lbl_Stock_Quantite
			// 
			this->lbl_Stock_Quantite->AutoSize = true;
			this->lbl_Stock_Quantite->Location = System::Drawing::Point(174, 287);
			this->lbl_Stock_Quantite->Name = L"lbl_Stock_Quantite";
			this->lbl_Stock_Quantite->Size = System::Drawing::Size(111, 17);
			this->lbl_Stock_Quantite->TabIndex = 5;
			this->lbl_Stock_Quantite->Text = L"Quantite Produit";
			// 
			// txt_seuil_reap
			// 
			this->txt_seuil_reap->Location = System::Drawing::Point(177, 352);
			this->txt_seuil_reap->Name = L"txt_seuil_reap";
			this->txt_seuil_reap->Size = System::Drawing::Size(302, 22);
			this->txt_seuil_reap->TabIndex = 4;
			// 
			// btn_modifier_stock
			// 
			this->btn_modifier_stock->Location = System::Drawing::Point(16, 338);
			this->btn_modifier_stock->Name = L"btn_modifier_stock";
			this->btn_modifier_stock->Size = System::Drawing::Size(110, 50);
			this->btn_modifier_stock->TabIndex = 3;
			this->btn_modifier_stock->Text = L"MODIFIER";
			this->btn_modifier_stock->UseVisualStyleBackColor = true;
			// 
			// btn_supprimer_stock
			// 
			this->btn_supprimer_stock->Location = System::Drawing::Point(16, 280);
			this->btn_supprimer_stock->Name = L"btn_supprimer_stock";
			this->btn_supprimer_stock->Size = System::Drawing::Size(110, 50);
			this->btn_supprimer_stock->TabIndex = 2;
			this->btn_supprimer_stock->Text = L"SUPPRIMER";
			this->btn_supprimer_stock->UseVisualStyleBackColor = true;
			// 
			// btn_insérer_stock
			// 
			this->btn_insérer_stock->Location = System::Drawing::Point(16, 224);
			this->btn_insérer_stock->Name = L"btn_insérer_stock";
			this->btn_insérer_stock->Size = System::Drawing::Size(110, 50);
			this->btn_insérer_stock->TabIndex = 1;
			this->btn_insérer_stock->Text = L"INSÉRER";
			this->btn_insérer_stock->UseVisualStyleBackColor = true;
			// 
			// dgv_Stock
			// 
			this->dgv_Stock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Stock->Location = System::Drawing::Point(16, 20);
			this->dgv_Stock->Name = L"dgv_Stock";
			this->dgv_Stock->RowHeadersWidth = 51;
			this->dgv_Stock->RowTemplate->Height = 24;
			this->dgv_Stock->Size = System::Drawing::Size(1147, 184);
			this->dgv_Stock->TabIndex = 0;
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
			this->ClientSize = System::Drawing::Size(1262, 610);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Clients))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tab_client->ResumeLayout(false);
			this->tab_client->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Stock))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Initialisation du myform
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_Clients->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_cl->Text, "TB_PEOPLE");
		this->dgv_Clients->DataSource = this->oDs;
		this->dgv_Clients->DataMember = "TB_PEOPLE";

		//Load data Stock
		this->oSvc = gcnew NS_Comp_Svc::CLservices();	
		this->dgv_Stock->Refresh();
		this->oDs = this->oSvc->selectionnerTousLeStock("TB_STOCK");
		this->dgv_Stock->DataSource = this->oDs;
		this->dgv_Stock->DataMember = "TB_STOCK";
	}
	//Click sur le boutton Insérer de l'onglet Clients
	private: System::Void btn_insert_Clients_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnePersonne(this->txt_adr_livraison_cl->Text, this->txt_adr_facturation_cl->Text, this->txt_date_naissance_cl->Text, this->txt_date_premier_achat_cl->Text, this->txt_genre_cl->Text, this->txt_nom_cl->Text, this->txt_prenom_cl->Text);
		
		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_Clients->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_cl->Text, "TB_PEOPLE");
		this->dgv_Clients->DataSource = this->oDs;
		this->dgv_Clients->DataMember = "TB_PEOPLE";

		//Affichage de la personne ajouter
		this->list_console_cl->Items->Add("Personne ajouter, Id :" + this->txt_id_cl->Text + ", Nom =" + this->txt_nom_cl->Text + " OK");
	}
	//Click sur le boutton Supprimer de l'onglet Clients
	private: System::Void btn_delete_Clients_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ textVal = this->txt_id_cl->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->suprimerUnePersonne(id_people);

		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_Clients->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_cl->Text, "TB_PEOPLE");
		this->dgv_Clients->DataSource = this->oDs;
		this->dgv_Clients->DataMember = "TB_PEOPLE";

		//Affichage de la personne supprimer
		this->list_console_cl->Items->Add("Personne suprimer, Id :" + this->txt_id_cl->Text + ", Nom ="+ this->txt_nom_cl->Text +" OK");
	}
	//Click sur le boutton Modifier de l'onglet Clients
	private: System::Void btn_update_Clients_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ textVal = this->txt_id_cl->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->modifierUnePersonne(this->txt_nom_cl->Text, this->txt_prenom_cl->Text, id_people);

		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_Clients->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_cl->Text, "TB_PEOPLE");
		this->dgv_Clients->DataSource = this->oDs;
		this->dgv_Clients->DataMember = "TB_PEOPLE";

		//Affichage de la personne modifier
		this->list_console_cl->Items->Add("Personne modifier, Id :" + this->txt_id_cl->Text + ", Nom ="+ this->txt_nom_cl->Text +" OK");
	}
};
}
