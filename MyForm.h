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
	/// Description r�sum�e de MyForm
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
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_Clients;
	protected:

	private: System::Windows::Forms::Button^ btn_inserer;
	private: System::Windows::Forms::Button^ btn_supprimer;
	protected:




	private: System::Windows::Forms::Button^ btn_modifier;

	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;



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
	private: System::Windows::Forms::ListBox^ list_console;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txt_type_ppl;
	private: System::Windows::Forms::Label^ lbl_date_naissance;

	private: System::Windows::Forms::TextBox^ txt_date_naissance;
	private: System::Windows::Forms::Label^ lbl_adr_facturation;


	private: System::Windows::Forms::Label^ lbl_adr_livraison;

	private: System::Windows::Forms::TextBox^ txt_adr_facturation;

	private: System::Windows::Forms::TextBox^ txt_adr_livraison;
	private: System::Windows::Forms::Label^ lbl_genre;


	private: System::Windows::Forms::TextBox^ txt_genre;
	private: System::Windows::Forms::Label^ lbl_type_personne;


	private: System::Windows::Forms::Label^ lbl_date_premier_achat;


	private: System::Windows::Forms::TextBox^ txt_date_premier_achat;
	private: System::Windows::Forms::Label^ lbl_console;
	private: System::Windows::Forms::DataGridView^ dgv_Stock;
	private: System::Windows::Forms::Button^ btn_Modifier_Stock;



	private: System::Windows::Forms::Button^ btn_Supprimer_Stock;
	private: System::Windows::Forms::Button^ btn_Ins�rer_Stock;
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
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_Clients = (gcnew System::Windows::Forms::DataGridView());
			this->btn_inserer = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id_cl = (gcnew System::Windows::Forms::Label());
			this->lbl_prenom_cl = (gcnew System::Windows::Forms::Label());
			this->lbl_nom_cl = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tab_client = (gcnew System::Windows::Forms::TabPage());
			this->lbl_console = (gcnew System::Windows::Forms::Label());
			this->lbl_date_premier_achat = (gcnew System::Windows::Forms::Label());
			this->txt_date_premier_achat = (gcnew System::Windows::Forms::TextBox());
			this->lbl_date_naissance = (gcnew System::Windows::Forms::Label());
			this->txt_date_naissance = (gcnew System::Windows::Forms::TextBox());
			this->lbl_adr_facturation = (gcnew System::Windows::Forms::Label());
			this->lbl_adr_livraison = (gcnew System::Windows::Forms::Label());
			this->txt_adr_facturation = (gcnew System::Windows::Forms::TextBox());
			this->txt_adr_livraison = (gcnew System::Windows::Forms::TextBox());
			this->lbl_genre = (gcnew System::Windows::Forms::Label());
			this->txt_genre = (gcnew System::Windows::Forms::TextBox());
			this->lbl_type_personne = (gcnew System::Windows::Forms::Label());
			this->txt_type_ppl = (gcnew System::Windows::Forms::TextBox());
			this->list_console = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
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
			this->btn_Modifier_Stock = (gcnew System::Windows::Forms::Button());
			this->btn_Supprimer_Stock = (gcnew System::Windows::Forms::Button());
			this->btn_Ins�rer_Stock = (gcnew System::Windows::Forms::Button());
			this->dgv_Stock = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Clients))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tab_client->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			// btn_inserer
			// 
			this->btn_inserer->BackColor = System::Drawing::Color::Transparent;
			this->btn_inserer->Location = System::Drawing::Point(16, 215);
			this->btn_inserer->Margin = System::Windows::Forms::Padding(4);
			this->btn_inserer->Name = L"btn_inserer";
			this->btn_inserer->Size = System::Drawing::Size(121, 46);
			this->btn_inserer->TabIndex = 2;
			this->btn_inserer->Text = L"INS�RER";
			this->btn_inserer->UseVisualStyleBackColor = false;
			this->btn_inserer->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Clients_Click);
			// 
			// btn_supprimer
			// 
			this->btn_supprimer->Location = System::Drawing::Point(16, 322);
			this->btn_supprimer->Margin = System::Windows::Forms::Padding(4);
			this->btn_supprimer->Name = L"btn_supprimer";
			this->btn_supprimer->Size = System::Drawing::Size(121, 46);
			this->btn_supprimer->TabIndex = 3;
			this->btn_supprimer->Text = L"SUPPRIMER";
			this->btn_supprimer->UseVisualStyleBackColor = true;
			this->btn_supprimer->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Clients_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->Location = System::Drawing::Point(16, 268);
			this->btn_modifier->Margin = System::Windows::Forms::Padding(4);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(121, 46);
			this->btn_modifier->TabIndex = 4;
			this->btn_modifier->Text = L"MODIFIER";
			this->btn_modifier->UseVisualStyleBackColor = true;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Clients_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(166, 239);
			this->txt_id->Margin = System::Windows::Forms::Padding(4);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(42, 22);
			this->txt_id->TabIndex = 5;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(294, 239);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(126, 22);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(449, 239);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(126, 22);
			this->txt_prenom->TabIndex = 7;
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
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1190, 582);
			this->tabControl1->TabIndex = 11;
			// 
			// tab_client
			// 
			this->tab_client->BackColor = System::Drawing::Color::White;
			this->tab_client->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tab_client->Controls->Add(this->lbl_console);
			this->tab_client->Controls->Add(this->lbl_date_premier_achat);
			this->tab_client->Controls->Add(this->txt_date_premier_achat);
			this->tab_client->Controls->Add(this->lbl_date_naissance);
			this->tab_client->Controls->Add(this->txt_date_naissance);
			this->tab_client->Controls->Add(this->lbl_adr_facturation);
			this->tab_client->Controls->Add(this->lbl_adr_livraison);
			this->tab_client->Controls->Add(this->txt_adr_facturation);
			this->tab_client->Controls->Add(this->txt_adr_livraison);
			this->tab_client->Controls->Add(this->lbl_genre);
			this->tab_client->Controls->Add(this->txt_genre);
			this->tab_client->Controls->Add(this->lbl_type_personne);
			this->tab_client->Controls->Add(this->txt_type_ppl);
			this->tab_client->Controls->Add(this->list_console);
			this->tab_client->Controls->Add(this->dgv_Clients);
			this->tab_client->Controls->Add(this->btn_supprimer);
			this->tab_client->Controls->Add(this->btn_modifier);
			this->tab_client->Controls->Add(this->lbl_nom_cl);
			this->tab_client->Controls->Add(this->txt_id);
			this->tab_client->Controls->Add(this->btn_inserer);
			this->tab_client->Controls->Add(this->lbl_prenom_cl);
			this->tab_client->Controls->Add(this->txt_nom);
			this->tab_client->Controls->Add(this->lbl_id_cl);
			this->tab_client->Controls->Add(this->txt_prenom);
			this->tab_client->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tab_client->Location = System::Drawing::Point(4, 25);
			this->tab_client->Name = L"tab_client";
			this->tab_client->Padding = System::Windows::Forms::Padding(3);
			this->tab_client->Size = System::Drawing::Size(1182, 553);
			this->tab_client->TabIndex = 0;
			this->tab_client->Text = L"Clients";
			// 
			// lbl_console
			// 
			this->lbl_console->AutoSize = true;
			this->lbl_console->Location = System::Drawing::Point(13, 457);
			this->lbl_console->Name = L"lbl_console";
			this->lbl_console->Size = System::Drawing::Size(59, 17);
			this->lbl_console->TabIndex = 24;
			this->lbl_console->Text = L"Console";
			// 
			// lbl_date_premier_achat
			// 
			this->lbl_date_premier_achat->AutoSize = true;
			this->lbl_date_premier_achat->Location = System::Drawing::Point(163, 406);
			this->lbl_date_premier_achat->Name = L"lbl_date_premier_achat";
			this->lbl_date_premier_achat->Size = System::Drawing::Size(129, 17);
			this->lbl_date_premier_achat->TabIndex = 23;
			this->lbl_date_premier_achat->Text = L"Date premier achat";
			// 
			// txt_date_premier_achat
			// 
			this->txt_date_premier_achat->Location = System::Drawing::Point(323, 401);
			this->txt_date_premier_achat->Margin = System::Windows::Forms::Padding(4);
			this->txt_date_premier_achat->Name = L"txt_date_premier_achat";
			this->txt_date_premier_achat->Size = System::Drawing::Size(204, 22);
			this->txt_date_premier_achat->TabIndex = 22;
			// 
			// lbl_date_naissance
			// 
			this->lbl_date_naissance->AutoSize = true;
			this->lbl_date_naissance->Location = System::Drawing::Point(163, 378);
			this->lbl_date_naissance->Name = L"lbl_date_naissance";
			this->lbl_date_naissance->Size = System::Drawing::Size(106, 17);
			this->lbl_date_naissance->TabIndex = 21;
			this->lbl_date_naissance->Text = L"Date naissance";
			// 
			// txt_date_naissance
			// 
			this->txt_date_naissance->Location = System::Drawing::Point(323, 373);
			this->txt_date_naissance->Margin = System::Windows::Forms::Padding(4);
			this->txt_date_naissance->Name = L"txt_date_naissance";
			this->txt_date_naissance->Size = System::Drawing::Size(204, 22);
			this->txt_date_naissance->TabIndex = 20;
			// 
			// lbl_adr_facturation
			// 
			this->lbl_adr_facturation->AutoSize = true;
			this->lbl_adr_facturation->Location = System::Drawing::Point(163, 310);
			this->lbl_adr_facturation->Name = L"lbl_adr_facturation";
			this->lbl_adr_facturation->Size = System::Drawing::Size(151, 17);
			this->lbl_adr_facturation->TabIndex = 19;
			this->lbl_adr_facturation->Text = L"Adresse de facturation";
			// 
			// lbl_adr_livraison
			// 
			this->lbl_adr_livraison->AutoSize = true;
			this->lbl_adr_livraison->Location = System::Drawing::Point(163, 284);
			this->lbl_adr_livraison->Name = L"lbl_adr_livraison";
			this->lbl_adr_livraison->Size = System::Drawing::Size(136, 17);
			this->lbl_adr_livraison->TabIndex = 18;
			this->lbl_adr_livraison->Text = L"Adresse de livraison";
			// 
			// txt_adr_facturation
			// 
			this->txt_adr_facturation->Location = System::Drawing::Point(323, 305);
			this->txt_adr_facturation->Margin = System::Windows::Forms::Padding(4);
			this->txt_adr_facturation->Name = L"txt_adr_facturation";
			this->txt_adr_facturation->Size = System::Drawing::Size(204, 22);
			this->txt_adr_facturation->TabIndex = 17;
			// 
			// txt_adr_livraison
			// 
			this->txt_adr_livraison->Location = System::Drawing::Point(323, 279);
			this->txt_adr_livraison->Margin = System::Windows::Forms::Padding(4);
			this->txt_adr_livraison->Name = L"txt_adr_livraison";
			this->txt_adr_livraison->Size = System::Drawing::Size(204, 22);
			this->txt_adr_livraison->TabIndex = 16;
			// 
			// lbl_genre
			// 
			this->lbl_genre->AutoSize = true;
			this->lbl_genre->Location = System::Drawing::Point(597, 218);
			this->lbl_genre->Name = L"lbl_genre";
			this->lbl_genre->Size = System::Drawing::Size(48, 17);
			this->lbl_genre->TabIndex = 15;
			this->lbl_genre->Text = L"Genre";
			// 
			// txt_genre
			// 
			this->txt_genre->Location = System::Drawing::Point(600, 239);
			this->txt_genre->Margin = System::Windows::Forms::Padding(4);
			this->txt_genre->Name = L"txt_genre";
			this->txt_genre->Size = System::Drawing::Size(126, 22);
			this->txt_genre->TabIndex = 14;
			// 
			// lbl_type_personne
			// 
			this->lbl_type_personne->AutoSize = true;
			this->lbl_type_personne->Location = System::Drawing::Point(13, 392);
			this->lbl_type_personne->Name = L"lbl_type_personne";
			this->lbl_type_personne->Size = System::Drawing::Size(124, 17);
			this->lbl_type_personne->TabIndex = 13;
			this->lbl_type_personne->Text = L"Type de personne";
			// 
			// txt_type_ppl
			// 
			this->txt_type_ppl->Location = System::Drawing::Point(16, 413);
			this->txt_type_ppl->Margin = System::Windows::Forms::Padding(4);
			this->txt_type_ppl->Name = L"txt_type_ppl";
			this->txt_type_ppl->Size = System::Drawing::Size(121, 22);
			this->txt_type_ppl->TabIndex = 12;
			this->txt_type_ppl->Text = L"Client";
			this->txt_type_ppl->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// list_console
			// 
			this->list_console->FormattingEnabled = true;
			this->list_console->ItemHeight = 16;
			this->list_console->Location = System::Drawing::Point(16, 477);
			this->list_console->Name = L"list_console";
			this->list_console->Size = System::Drawing::Size(1145, 52);
			this->list_console->TabIndex = 11;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1182, 553);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 214);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"INS";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 18);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(813, 140);
			this->dataGridView1->TabIndex = 0;
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
			this->tabPage4->Controls->Add(this->btn_Modifier_Stock);
			this->tabPage4->Controls->Add(this->btn_Supprimer_Stock);
			this->tabPage4->Controls->Add(this->btn_Ins�rer_Stock);
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
			this->lbl_Stock_reap->Text = L"Seuil r�aprovisionnement";
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
			// btn_Modifier_Stock
			// 
			this->btn_Modifier_Stock->Location = System::Drawing::Point(16, 338);
			this->btn_Modifier_Stock->Name = L"btn_Modifier_Stock";
			this->btn_Modifier_Stock->Size = System::Drawing::Size(110, 50);
			this->btn_Modifier_Stock->TabIndex = 3;
			this->btn_Modifier_Stock->Text = L"MODIFIER";
			this->btn_Modifier_Stock->UseVisualStyleBackColor = true;
			// 
			// btn_Supprimer_Stock
			// 
			this->btn_Supprimer_Stock->Location = System::Drawing::Point(16, 280);
			this->btn_Supprimer_Stock->Name = L"btn_Supprimer_Stock";
			this->btn_Supprimer_Stock->Size = System::Drawing::Size(110, 50);
			this->btn_Supprimer_Stock->TabIndex = 2;
			this->btn_Supprimer_Stock->Text = L"SUPPRIMER";
			this->btn_Supprimer_Stock->UseVisualStyleBackColor = true;
			// 
			// btn_Ins�rer_Stock
			// 
			this->btn_Ins�rer_Stock->Location = System::Drawing::Point(16, 224);
			this->btn_Ins�rer_Stock->Name = L"btn_Ins�rer_Stock";
			this->btn_Ins�rer_Stock->Size = System::Drawing::Size(110, 50);
			this->btn_Ins�rer_Stock->TabIndex = 1;
			this->btn_Ins�rer_Stock->Text = L"INS�RER";
			this->btn_Ins�rer_Stock->UseVisualStyleBackColor = true;
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
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_ppl->Text, "TB_PEOPLE");
		this->dgv_Clients->DataSource = this->oDs;
		this->dgv_Clients->DataMember = "TB_PEOPLE";

		//Load data Stock
		this->oSvc = gcnew NS_Comp_Svc::CLservices();	
		this->dgv_Stock->Refresh();
		this->oDs = this->oSvc->selectionnerTousLeStock("TB_STOCK");
		this->dgv_Stock->DataSource = this->oDs;
		this->dgv_Stock->DataMember = "TB_STOCK";
	}
	//Click sur le boutton Ins�rer de l'onglet Clients
	private: System::Void btn_insert_Clients_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnePersonne(this->txt_adr_livraison->Text, this->txt_adr_facturation->Text, this->txt_date_naissance->Text, this->txt_date_premier_achat->Text, this->txt_genre->Text, this->txt_nom->Text, this->txt_prenom->Text);
		
		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_Clients->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_ppl->Text, "TB_PEOPLE");
		this->dgv_Clients->DataSource = this->oDs;
		this->dgv_Clients->DataMember = "TB_PEOPLE";

		//Affichage de la personne ajouter
		this->list_console->Items->Add("Personne ajouter, Id :" + this->txt_id->Text + ", Nom =" + this->txt_nom->Text + " OK");
	}
	//Click sur le boutton Supprimer de l'onglet Clients
	private: System::Void btn_delete_Clients_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ textVal = this->txt_id->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->suprimerUnePersonne(id_people);

		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_Clients->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_ppl->Text, "TB_PEOPLE");
		this->dgv_Clients->DataSource = this->oDs;
		this->dgv_Clients->DataMember = "TB_PEOPLE";

		//Affichage de la personne supprimer
		this->list_console->Items->Add("Personne suprimer, Id :" + this->txt_id->Text + ", Nom ="+ this->txt_nom->Text +" OK");
	}
	//Click sur le boutton Modifier de l'onglet Clients
	private: System::Void btn_update_Clients_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ textVal = this->txt_id->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->modifierUnePersonne(this->txt_nom->Text, this->txt_prenom->Text, id_people);

		//Load data Client
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_Clients->Refresh();
		this->oDs = this->oSvc->selectionnerTousLesClients(this->txt_type_ppl->Text, "TB_PEOPLE");
		this->dgv_Clients->DataSource = this->oDs;
		this->dgv_Clients->DataMember = "TB_PEOPLE";

		//Affichage de la personne modifier
		this->list_console->Items->Add("Personne modifier, Id :" + this->txt_id->Text + ", Nom ="+ this->txt_nom->Text +" OK");
	}
};
}
