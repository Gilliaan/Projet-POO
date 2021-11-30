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
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:


	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;



	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dgv_PER;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ genre_personnel;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ prenom_personnel;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ nom_personnel;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Id_personnel;
	private: System::Windows::Forms::TextBox^ txt_type_pers;


	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ date_embauche_supérieur;

	private: System::Windows::Forms::TextBox^ nom_supérieur;
	private: System::Windows::Forms::TextBox^ date_embauche_personnel;


	private: System::Windows::Forms::TextBox^ adresse_personnel;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label20;



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
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txt_type_pers = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->date_embauche_supérieur = (gcnew System::Windows::Forms::TextBox());
			this->nom_supérieur = (gcnew System::Windows::Forms::TextBox());
			this->date_embauche_personnel = (gcnew System::Windows::Forms::TextBox());
			this->adresse_personnel = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->genre_personnel = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->prenom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->nom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Id_personnel = (gcnew System::Windows::Forms::TextBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dgv_PER = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_PER))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(18, 22);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(916, 229);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_enr_CellContentClick);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(18, 269);
			this->btn_insert->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(112, 58);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INSÉRER";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(18, 402);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(112, 58);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(18, 335);
			this->btn_update->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(112, 58);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"MODIFIER";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(187, 299);
			this->txt_id->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(47, 26);
			this->txt_id->TabIndex = 5;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(331, 299);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(141, 26);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(505, 299);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(141, 26);
			this->txt_prenom->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(183, 269);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(502, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Prenom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(327, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Nom";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(119, 15);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(966, 728);
			this->tabControl1->TabIndex = 11;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->dgv_enr);
			this->tabPage1->Controls->Add(this->btn_delete);
			this->tabPage1->Controls->Add(this->btn_update);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->txt_id);
			this->tabPage1->Controls->Add(this->btn_insert);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->txt_nom);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->txt_prenom);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage1->Size = System::Drawing::Size(958, 695);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Clients";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 571);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 20);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Console";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(183, 508);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Date premier achat";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(363, 501);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(229, 26);
			this->textBox6->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(183, 472);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Date naissance";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(363, 466);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(229, 26);
			this->textBox5->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(183, 388);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(170, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Adresse de facturation";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(183, 355);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 20);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Adresse de livraison";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(363, 381);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(229, 26);
			this->textBox4->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(363, 349);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(229, 26);
			this->textBox3->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(672, 272);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Genre";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(675, 299);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(141, 26);
			this->textBox2->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 490);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Type de personne";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 516);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 26);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"Client";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(18, 596);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(915, 64);
			this->listBox1->TabIndex = 11;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->txt_type_pers);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->date_embauche_supérieur);
			this->tabPage2->Controls->Add(this->nom_supérieur);
			this->tabPage2->Controls->Add(this->date_embauche_personnel);
			this->tabPage2->Controls->Add(this->adresse_personnel);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->genre_personnel);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->prenom_personnel);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->nom_personnel);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->Id_personnel);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dgv_PER);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage2->Size = System::Drawing::Size(958, 695);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(14, 589);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(67, 20);
			this->label20->TabIndex = 29;
			this->label20->Text = L"Console";
			// 
			// txt_type_pers
			// 
			this->txt_type_pers->Location = System::Drawing::Point(18, 519);
			this->txt_type_pers->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txt_type_pers->Name = L"txt_type_pers";
			this->txt_type_pers->Size = System::Drawing::Size(141, 26);
			this->txt_type_pers->TabIndex = 28;
			this->txt_type_pers->Text = L"Personnel";
			this->txt_type_pers->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(14, 494);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(136, 20);
			this->label19->TabIndex = 27;
			this->label19->Text = L"Type de personne";
			// 
			// date_embauche_supérieur
			// 
			this->date_embauche_supérieur->Location = System::Drawing::Point(464, 448);
			this->date_embauche_supérieur->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->date_embauche_supérieur->Name = L"date_embauche_supérieur";
			this->date_embauche_supérieur->Size = System::Drawing::Size(141, 26);
			this->date_embauche_supérieur->TabIndex = 26;
			// 
			// nom_supérieur
			// 
			this->nom_supérieur->Location = System::Drawing::Point(464, 380);
			this->nom_supérieur->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->nom_supérieur->Name = L"nom_supérieur";
			this->nom_supérieur->Size = System::Drawing::Size(141, 26);
			this->nom_supérieur->TabIndex = 25;
			// 
			// date_embauche_personnel
			// 
			this->date_embauche_personnel->Location = System::Drawing::Point(189, 448);
			this->date_embauche_personnel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->date_embauche_personnel->Name = L"date_embauche_personnel";
			this->date_embauche_personnel->Size = System::Drawing::Size(141, 26);
			this->date_embauche_personnel->TabIndex = 24;
			// 
			// adresse_personnel
			// 
			this->adresse_personnel->Location = System::Drawing::Point(189, 380);
			this->adresse_personnel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->adresse_personnel->Name = L"adresse_personnel";
			this->adresse_personnel->Size = System::Drawing::Size(141, 26);
			this->adresse_personnel->TabIndex = 23;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(460, 423);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(205, 20);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Date d\'embauche supérieur";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(460, 355);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(134, 20);
			this->label17->TabIndex = 21;
			this->label17->Text = L"Nom du supérieur";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(185, 423);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(135, 20);
			this->label16->TabIndex = 20;
			this->label16->Text = L"Date d\'embauche";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(185, 355);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(68, 20);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Adresse";
			// 
			// genre_personnel
			// 
			this->genre_personnel->Location = System::Drawing::Point(701, 284);
			this->genre_personnel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->genre_personnel->Name = L"genre_personnel";
			this->genre_personnel->Size = System::Drawing::Size(141, 26);
			this->genre_personnel->TabIndex = 15;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(697, 259);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 20);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Genre";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(496, 259);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 20);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Prenom";
			// 
			// prenom_personnel
			// 
			this->prenom_personnel->Location = System::Drawing::Point(500, 284);
			this->prenom_personnel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->prenom_personnel->Name = L"prenom_personnel";
			this->prenom_personnel->Size = System::Drawing::Size(141, 26);
			this->prenom_personnel->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(318, 259);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 20);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Nom";
			// 
			// nom_personnel
			// 
			this->nom_personnel->Location = System::Drawing::Point(322, 284);
			this->nom_personnel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->nom_personnel->Name = L"nom_personnel";
			this->nom_personnel->Size = System::Drawing::Size(141, 26);
			this->nom_personnel->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(185, 259);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 20);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Id";
			// 
			// Id_personnel
			// 
			this->Id_personnel->Location = System::Drawing::Point(189, 284);
			this->Id_personnel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Id_personnel->Name = L"Id_personnel";
			this->Id_personnel->Size = System::Drawing::Size(47, 26);
			this->Id_personnel->TabIndex = 12;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(18, 613);
			this->listBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(915, 64);
			this->listBox2->TabIndex = 12;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(18, 404);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 58);
			this->button3->TabIndex = 4;
			this->button3->Text = L"DEL";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_delete2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 336);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 58);
			this->button1->TabIndex = 3;
			this->button1->Text = L"MODIFIER";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_update2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 268);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 58);
			this->button2->TabIndex = 2;
			this->button2->Text = L"INSÉRER";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_insert2_Click);
			// 
			// dgv_PER
			// 
			this->dgv_PER->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_PER->Location = System::Drawing::Point(18, 22);
			this->dgv_PER->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dgv_PER->Name = L"dgv_PER";
			this->dgv_PER->RowHeadersWidth = 51;
			this->dgv_PER->RowTemplate->Height = 24;
			this->dgv_PER->Size = System::Drawing::Size(915, 222);
			this->dgv_PER->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage3->Size = System::Drawing::Size(958, 695);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Commandes";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage4->Size = System::Drawing::Size(958, 695);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Stock";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tabPage5->Size = System::Drawing::Size(958, 695);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Statistiques";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1424, 801);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_PER))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("TB_PEOPLE");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "TB_PEOPLE";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();

		//Load data


		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_PER->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel(this->txt_type_pers->Text, "TB_PEOPLE");
		this->dgv_PER->DataSource = this->oDs;
		this->dgv_PER->DataMember = "TB_PEOPLE";
	}

	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnPersonnel(this->txt_nom->Text, this->txt_prenom->Text);

		//Load data
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("TB_PEOPLE");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "TB_PEOPLE";

		//Affichage de la personne ajouter
		this->listBox1->Items->Add("Personne ajouter, Id :" + this->txt_id->Text + ", Nom =" + this->txt_nom->Text + " OK");
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ textVal = this->txt_id->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->suprimerUnPersonnel(id_people);

		//Load data
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("TB_PEOPLE");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "TB_PEOPLE";

		//Affichage de la personne supprimer
		this->listBox1->Items->Add("Personne suprimer, Id :" + this->txt_id->Text + ", Nom =" + this->txt_nom->Text + " OK");
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ textVal = this->txt_id->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->modifierUnPersonnel(this->txt_nom->Text, this->txt_prenom->Text, id_people);

		//Load data
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("TB_PEOPLE");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "TB_PEOPLE";

		//Affichage de la personne modifier
		this->listBox1->Items->Add("Personne modifier, Id :" + this->txt_id->Text + ", Nom =" + this->txt_nom->Text + " OK");
	}
	private: System::Void button_update2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ textVal = this->Id_personnel->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->modifierUnPersonnel(this->nom_personnel->Text, this->prenom_personnel->Text, id_people);

		//Load data
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_PER->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel(this->txt_type_pers->Text, "TB_PEOPLE");
		this->dgv_PER->DataSource = this->oDs;
		this->dgv_PER->DataMember = "TB_PEOPLE";

		//Affichage de la personne modifier
		this->listBox1->Items->Add("Personne modifier, Id :" + this->Id_personnel->Text + ", Nom =" + this->nom_personnel->Text + " OK");
	}
	private: System::Void button_insert2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterUnPersonnel(this->nom_personnel->Text, this->prenom_personnel->Text);
		//Load data
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_PER->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel(this->txt_type_pers->Text, "TB_PEOPLE");
		this->dgv_PER->DataSource = this->oDs;
		this->dgv_PER->DataMember = "TB_PEOPLE";

		//Affichage de la personne ajouter
		this->listBox2->Items->Add("Personne ajouter, Id :" + this->Id_personnel->Text + ", Nom =" + this->nom_personnel->Text + " OK");

	}
	private: System::Void button_delete2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ textVal = this->Id_personnel->Text;
		int id_people = System::Convert::ToInt32(textVal);
		this->oSvc->suprimerUnPersonnel(id_people);

		//Load data
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_PER->Refresh();
		this->oDs = this->oSvc->selectionnerToutLePersonnel(this->txt_type_pers->Text, "TB_PEOPLE");
		this->dgv_PER->DataSource = this->oDs;
		this->dgv_PER->DataMember = "TB_PEOPLE";

		//Affichage de la personne supprimer
		this->listBox2->Items->Add("Personne suprimer, Id :" + this->Id_personnel->Text + ", Nom =" + this->nom_personnel->Text + " OK");
	}

	};
}
