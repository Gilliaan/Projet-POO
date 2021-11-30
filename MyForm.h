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
	private: System::Windows::Forms::TabControl^ btn_;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3_comm;

	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
	private: System::Windows::Forms::DataGridView^ dataGridView_comm;
	private: System::Windows::Forms::TextBox^ textBox_ht_comm;
	private: System::Windows::Forms::TextBox^ textBox_ref_comm;











	private: System::Windows::Forms::TextBox^ textBox_date_em_comm;

	private: System::Windows::Forms::TextBox^ textBox_date_prevu_comm;


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
	private: System::Windows::Forms::TextBox^ textBox_article_comm;




	private: System::Windows::Forms::TextBox^ textBox_tva_comm;
private: System::Windows::Forms::TextBox^ textBox_id_paiement_comm;


private: System::Windows::Forms::TextBox^ textBox_ttc_comm;
private: System::Windows::Forms::Label^ label_id_comm;
private: System::Windows::Forms::TextBox^ textBox_id_comm;
private: System::Windows::Forms::Label^ label_console_comm;
private: System::Windows::Forms::ListBox^ listBox_console_comm;






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
			this->btn_ = (gcnew System::Windows::Forms::TabControl());
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3_comm = (gcnew System::Windows::Forms::TabPage());
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
			this->textBox_article_comm = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ht_comm = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tva_comm = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ref_comm = (gcnew System::Windows::Forms::TextBox());
			this->textBox_date_em_comm = (gcnew System::Windows::Forms::TextBox());
			this->textBox_id_comm = (gcnew System::Windows::Forms::TextBox());
			this->textBox_id_paiement_comm = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ttc_comm = (gcnew System::Windows::Forms::TextBox());
			this->textBox_date_prevu_comm = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView_comm = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->btn_->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3_comm->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_comm))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(12, 15);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(610, 149);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_enr_CellContentClick);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(12, 175);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 37);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INSÉRER";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(12, 262);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 37);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(12, 218);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 37);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"MODIFIER";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(124, 194);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(32, 20);
			this->txt_id->TabIndex = 5;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(220, 194);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(96, 20);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(337, 194);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(96, 20);
			this->txt_prenom->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(122, 175);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(334, 177);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Prenom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(218, 177);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Nom";
			// 
			// btn_
			// 
			this->btn_->Controls->Add(this->tabPage1);
			this->btn_->Controls->Add(this->tabPage2);
			this->btn_->Controls->Add(this->tabPage3_comm);
			this->btn_->Controls->Add(this->tabPage4);
			this->btn_->Controls->Add(this->tabPage5);
			this->btn_->Location = System::Drawing::Point(80, 10);
			this->btn_->Margin = System::Windows::Forms::Padding(2);
			this->btn_->Name = L"btn_";
			this->btn_->SelectedIndex = 0;
			this->btn_->Size = System::Drawing::Size(644, 473);
			this->btn_->TabIndex = 11;
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
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(636, 447);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Clients";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(10, 371);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Console";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(122, 330);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Date premier achat";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(242, 326);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(154, 20);
			this->textBox6->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(122, 307);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Date naissance";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(242, 303);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(154, 20);
			this->textBox5->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(122, 252);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Adresse de facturation";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(122, 231);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Adresse de livraison";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(242, 248);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(154, 20);
			this->textBox4->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(242, 227);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(154, 20);
			this->textBox3->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(448, 177);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Genre";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(450, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(96, 20);
			this->textBox2->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 318);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Type de personne";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 336);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(92, 20);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"Client";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 388);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(612, 43);
			this->listBox1->TabIndex = 11;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(636, 447);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"INS";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(610, 114);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage3_comm
			// 
			this->tabPage3_comm->Controls->Add(this->label_console_comm);
			this->tabPage3_comm->Controls->Add(this->listBox_console_comm);
			this->tabPage3_comm->Controls->Add(this->label_date_prevu_comm);
			this->tabPage3_comm->Controls->Add(this->label_id_comm);
			this->tabPage3_comm->Controls->Add(this->label_id_paiement_comm);
			this->tabPage3_comm->Controls->Add(this->label_ttc_comm);
			this->tabPage3_comm->Controls->Add(this->label_tva_comm);
			this->tabPage3_comm->Controls->Add(this->label_ref_comm);
			this->tabPage3_comm->Controls->Add(this->label_ht_comm);
			this->tabPage3_comm->Controls->Add(this->label_article_comm);
			this->tabPage3_comm->Controls->Add(this->label_date_em_comm);
			this->tabPage3_comm->Controls->Add(this->btn_del_comm);
			this->tabPage3_comm->Controls->Add(this->btn_modif_comm);
			this->tabPage3_comm->Controls->Add(this->btn_inser_comm);
			this->tabPage3_comm->Controls->Add(this->textBox_article_comm);
			this->tabPage3_comm->Controls->Add(this->textBox_ht_comm);
			this->tabPage3_comm->Controls->Add(this->textBox_tva_comm);
			this->tabPage3_comm->Controls->Add(this->textBox_ref_comm);
			this->tabPage3_comm->Controls->Add(this->textBox_date_em_comm);
			this->tabPage3_comm->Controls->Add(this->textBox_id_comm);
			this->tabPage3_comm->Controls->Add(this->textBox_id_paiement_comm);
			this->tabPage3_comm->Controls->Add(this->textBox_ttc_comm);
			this->tabPage3_comm->Controls->Add(this->textBox_date_prevu_comm);
			this->tabPage3_comm->Controls->Add(this->dataGridView_comm);
			this->tabPage3_comm->Location = System::Drawing::Point(4, 22);
			this->tabPage3_comm->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3_comm->Name = L"tabPage3_comm";
			this->tabPage3_comm->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3_comm->Size = System::Drawing::Size(636, 447);
			this->tabPage3_comm->TabIndex = 2;
			this->tabPage3_comm->Text = L"Commandes";
			this->tabPage3_comm->UseVisualStyleBackColor = true;
			this->tabPage3_comm->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// label_console_comm
			// 
			this->label_console_comm->AutoSize = true;
			this->label_console_comm->Location = System::Drawing::Point(23, 358);
			this->label_console_comm->Name = L"label_console_comm";
			this->label_console_comm->Size = System::Drawing::Size(45, 13);
			this->label_console_comm->TabIndex = 6;
			this->label_console_comm->Text = L"Console";
			// 
			// listBox_console_comm
			// 
			this->listBox_console_comm->FormattingEnabled = true;
			this->listBox_console_comm->Location = System::Drawing::Point(23, 377);
			this->listBox_console_comm->Name = L"listBox_console_comm";
			this->listBox_console_comm->Size = System::Drawing::Size(592, 56);
			this->listBox_console_comm->TabIndex = 5;
			// 
			// label_date_prevu_comm
			// 
			this->label_date_prevu_comm->AutoSize = true;
			this->label_date_prevu_comm->Location = System::Drawing::Point(117, 221);
			this->label_date_prevu_comm->Name = L"label_date_prevu_comm";
			this->label_date_prevu_comm->Size = System::Drawing::Size(64, 13);
			this->label_date_prevu_comm->TabIndex = 4;
			this->label_date_prevu_comm->Text = L"date prevue";
			// 
			// label_id_comm
			// 
			this->label_id_comm->AutoSize = true;
			this->label_id_comm->Location = System::Drawing::Point(79, 341);
			this->label_id_comm->Name = L"label_id_comm";
			this->label_id_comm->Size = System::Drawing::Size(73, 13);
			this->label_id_comm->TabIndex = 4;
			this->label_id_comm->Text = L"ID commande";
			// 
			// label_id_paiement_comm
			// 
			this->label_id_paiement_comm->AutoSize = true;
			this->label_id_paiement_comm->Location = System::Drawing::Point(354, 342);
			this->label_id_paiement_comm->Name = L"label_id_paiement_comm";
			this->label_id_paiement_comm->Size = System::Drawing::Size(64, 13);
			this->label_id_paiement_comm->TabIndex = 4;
			this->label_id_paiement_comm->Text = L"ID paiement";
			// 
			// label_ttc_comm
			// 
			this->label_ttc_comm->AutoSize = true;
			this->label_ttc_comm->Location = System::Drawing::Point(376, 243);
			this->label_ttc_comm->Name = L"label_ttc_comm";
			this->label_ttc_comm->Size = System::Drawing::Size(51, 13);
			this->label_ttc_comm->TabIndex = 4;
			this->label_ttc_comm->Text = L"total TTC";
			// 
			// label_tva_comm
			// 
			this->label_tva_comm->AutoSize = true;
			this->label_tva_comm->Location = System::Drawing::Point(376, 191);
			this->label_tva_comm->Name = L"label_tva_comm";
			this->label_tva_comm->Size = System::Drawing::Size(51, 13);
			this->label_tva_comm->TabIndex = 4;
			this->label_tva_comm->Text = L"total TVA";
			// 
			// label_ref_comm
			// 
			this->label_ref_comm->AutoSize = true;
			this->label_ref_comm->Location = System::Drawing::Point(117, 183);
			this->label_ref_comm->Name = L"label_ref_comm";
			this->label_ref_comm->Size = System::Drawing::Size(52, 13);
			this->label_ref_comm->TabIndex = 4;
			this->label_ref_comm->Text = L"reference";
			// 
			// label_ht_comm
			// 
			this->label_ht_comm->AutoSize = true;
			this->label_ht_comm->Location = System::Drawing::Point(123, 257);
			this->label_ht_comm->Name = L"label_ht_comm";
			this->label_ht_comm->Size = System::Drawing::Size(45, 13);
			this->label_ht_comm->TabIndex = 4;
			this->label_ht_comm->Text = L"total HT";
			// 
			// label_article_comm
			// 
			this->label_article_comm->AutoSize = true;
			this->label_article_comm->Location = System::Drawing::Point(94, 305);
			this->label_article_comm->Name = L"label_article_comm";
			this->label_article_comm->Size = System::Drawing::Size(58, 13);
			this->label_article_comm->TabIndex = 4;
			this->label_article_comm->Text = L"total article";
			this->label_article_comm->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label_date_em_comm
			// 
			this->label_date_em_comm->AutoSize = true;
			this->label_date_em_comm->Location = System::Drawing::Point(348, 308);
			this->label_date_em_comm->Name = L"label_date_em_comm";
			this->label_date_em_comm->Size = System::Drawing::Size(79, 13);
			this->label_date_em_comm->TabIndex = 4;
			this->label_date_em_comm->Text = L"date d\'emission";
			// 
			// btn_del_comm
			// 
			this->btn_del_comm->Location = System::Drawing::Point(23, 257);
			this->btn_del_comm->Name = L"btn_del_comm";
			this->btn_del_comm->Size = System::Drawing::Size(75, 37);
			this->btn_del_comm->TabIndex = 3;
			this->btn_del_comm->Text = L"DEL";
			this->btn_del_comm->UseVisualStyleBackColor = true;
			// 
			// btn_modif_comm
			// 
			this->btn_modif_comm->Location = System::Drawing::Point(23, 214);
			this->btn_modif_comm->Name = L"btn_modif_comm";
			this->btn_modif_comm->Size = System::Drawing::Size(75, 37);
			this->btn_modif_comm->TabIndex = 3;
			this->btn_modif_comm->Text = L"MODIFIER";
			this->btn_modif_comm->UseVisualStyleBackColor = true;
			// 
			// btn_inser_comm
			// 
			this->btn_inser_comm->Location = System::Drawing::Point(23, 171);
			this->btn_inser_comm->Name = L"btn_inser_comm";
			this->btn_inser_comm->Size = System::Drawing::Size(75, 37);
			this->btn_inser_comm->TabIndex = 3;
			this->btn_inser_comm->Text = L"INSERER";
			this->btn_inser_comm->UseVisualStyleBackColor = true;
			this->btn_inser_comm->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox_article_comm
			// 
			this->textBox_article_comm->Location = System::Drawing::Point(158, 302);
			this->textBox_article_comm->Name = L"textBox_article_comm";
			this->textBox_article_comm->Size = System::Drawing::Size(183, 20);
			this->textBox_article_comm->TabIndex = 2;
			// 
			// textBox_ht_comm
			// 
			this->textBox_ht_comm->Location = System::Drawing::Point(187, 254);
			this->textBox_ht_comm->Name = L"textBox_ht_comm";
			this->textBox_ht_comm->Size = System::Drawing::Size(183, 20);
			this->textBox_ht_comm->TabIndex = 2;
			// 
			// textBox_tva_comm
			// 
			this->textBox_tva_comm->Location = System::Drawing::Point(432, 188);
			this->textBox_tva_comm->Name = L"textBox_tva_comm";
			this->textBox_tva_comm->Size = System::Drawing::Size(183, 20);
			this->textBox_tva_comm->TabIndex = 2;
			// 
			// textBox_ref_comm
			// 
			this->textBox_ref_comm->Location = System::Drawing::Point(187, 180);
			this->textBox_ref_comm->Name = L"textBox_ref_comm";
			this->textBox_ref_comm->Size = System::Drawing::Size(183, 20);
			this->textBox_ref_comm->TabIndex = 2;
			// 
			// textBox_date_em_comm
			// 
			this->textBox_date_em_comm->Location = System::Drawing::Point(432, 305);
			this->textBox_date_em_comm->Name = L"textBox_date_em_comm";
			this->textBox_date_em_comm->Size = System::Drawing::Size(183, 20);
			this->textBox_date_em_comm->TabIndex = 2;
			this->textBox_date_em_comm->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_date_em_comm_TextChanged);
			// 
			// textBox_id_comm
			// 
			this->textBox_id_comm->Location = System::Drawing::Point(158, 338);
			this->textBox_id_comm->Name = L"textBox_id_comm";
			this->textBox_id_comm->Size = System::Drawing::Size(183, 20);
			this->textBox_id_comm->TabIndex = 2;
			this->textBox_id_comm->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox_id_paiement_comm
			// 
			this->textBox_id_paiement_comm->Location = System::Drawing::Point(432, 342);
			this->textBox_id_paiement_comm->Name = L"textBox_id_paiement_comm";
			this->textBox_id_paiement_comm->Size = System::Drawing::Size(183, 20);
			this->textBox_id_paiement_comm->TabIndex = 2;
			this->textBox_id_paiement_comm->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox_ttc_comm
			// 
			this->textBox_ttc_comm->Location = System::Drawing::Point(432, 240);
			this->textBox_ttc_comm->Name = L"textBox_ttc_comm";
			this->textBox_ttc_comm->Size = System::Drawing::Size(183, 20);
			this->textBox_ttc_comm->TabIndex = 2;
			this->textBox_ttc_comm->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox_date_prevu_comm
			// 
			this->textBox_date_prevu_comm->Location = System::Drawing::Point(187, 218);
			this->textBox_date_prevu_comm->Name = L"textBox_date_prevu_comm";
			this->textBox_date_prevu_comm->Size = System::Drawing::Size(183, 20);
			this->textBox_date_prevu_comm->TabIndex = 2;
			this->textBox_date_prevu_comm->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// dataGridView_comm
			// 
			this->dataGridView_comm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_comm->Location = System::Drawing::Point(23, 15);
			this->dataGridView_comm->Name = L"dataGridView_comm";
			this->dataGridView_comm->Size = System::Drawing::Size(592, 150);
			this->dataGridView_comm->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(2);
			this->tabPage4->Size = System::Drawing::Size(636, 447);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Stock";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Margin = System::Windows::Forms::Padding(2);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(2);
			this->tabPage5->Size = System::Drawing::Size(636, 447);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Statistiques";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(950, 521);
			this->Controls->Add(this->btn_);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->btn_->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3_comm->ResumeLayout(false);
			this->tabPage3_comm->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_comm))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("TB_COMMANDE");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "TB_COMMANDE";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();

		//Load data
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("TB_COMMANDE");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "TB_COMMANDE";
	}

	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btn_insert_Click_Comm(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->selectionnerToutesLesCommandes(this->textBox_ref_comm->Text, this->textBox_date_prevu_comm->Text, this->textBox_date_em_comm->Text, this->textBox_article_comm->Text, this->textBox_ht_comm->Text, this->textBox_tva_comm->Text, this->textBox_ttc_comm->Text, this->textBox_id_paiement_comm->Text, this->textBox_id_comm->Text);// chek git a gab puis modifier 

		//Load data
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("TB_COMMANDE");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "TB_COMMANDE";

		//Affichage de la commande ajouter
		this->listBox1->Items->Add("Commande ajouter, Id :" + this->textBox_id_comm->Text + ", Reference =" + this->textBox_ref_comm->Text + " OK"); // a modifier
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ textVal = this->textBox_id_comm->Text;
		int id_com = System::Convert::ToInt32(textVal);
		this->oSvc->suprimerUneCommande(id_com);

		
		//Load data
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("TB_COMMANDE");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "TB_COMMANDE";

		//Affichage de la commande supprimer
		this->listBox1->Items->Add("Commande suprimer, Id :" + this->textBox_id_comm->Text + ", reference ="+ this->textBox_ref_comm->Text +" OK");// modif<---------------
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ textVal = this->textBox_id_comm->Text;
		int id_com = System::Convert::ToInt32(textVal);
		this->oSvc->modifierUneCommande(this->textBox_ref_comm->Text, this->textBox_date_prevu_comm->Text, this->textBox_date_em_comm->Text, this->textBox_article_comm->Text, this->textBox_ht_comm->Text, this->textBox_tva_comm->Text, this->textBox_ttc_comm->Text, this->textBox_id_paiement_comm->Text, this->textBox_id_comm->Text);

		//Load data
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesCommandes("TB_COMMANDE");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "TB_COMMANDE";

		//Affichage de la commande modifier
		this->listBox1->Items->Add("Commande modifier, Id :" + this->textBox_id_comm->Text + ", Reference ="+ this->textBox_ref_comm->Text +" OK");
	}

};
}
