#pragma once
#include <chrono>
#include <cstdlib>

namespace Laboratorywork5 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace Collections;
	using namespace Windows::Forms;
	using namespace Data;
	using namespace Drawing;

	public ref class MyForm : public Form {
	public:
		int N, M = 10;
		int* arr;

		bool table_characteristics_formed = false;
		bool table_forward_include = false;
		bool table_forward_selection = false;
		bool table_forward_exchange = false;
		bool table_linear = false;
		bool table_shell = false;
		MyForm(void) {
			InitializeComponent();
			numericUpDown1->Minimum = 100;
			numericUpDown1->Maximum = 30000;
		}

	protected:
		~MyForm() {
			if (components)
				delete components;
		}

	TabControl^ tabControl1;
	TabPage^ tabPage1,^ tabPage2,^ tabPage3,^ tabPage4,^ tabPage5,^ tabPage6;
	Button^ button1,^ button2,^ button3,^ button4,^ button5,^ button6;
	Windows::Forms::Label^ label1;
	NumericUpDown^ numericUpDown1;
	DataGridView^ dataGridView1,^ dataGridView2,^ dataGridView3;
	DataGridView^ dataGridView4,^ dataGridView5,^ dataGridView6;
	DataGridViewTextBoxColumn^ Column1, ^ Column2, ^ Column3, ^ Column4, ^ Column5, ^ Column6, ^ Column7, ^ Column8;
	DataGridViewTextBoxColumn^ Column9, ^ Column10, ^ Column11, ^ Column12, ^ Column13, ^ Column14,^ Column15;
	DataGridViewTextBoxColumn^ Column16,^ Column17,^ Column18,^ Column19,^ Column20,^ Column21,^ Column22,^ Column23;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2,^ dataGridViewTextBoxColumn3,^ dataGridViewTextBoxColumn4;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5,^ dataGridViewTextBoxColumn6,^ dataGridViewTextBoxColumn7;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8,^ dataGridViewTextBoxColumn9,^ dataGridViewTextBoxColumn10;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11,^ dataGridViewTextBoxColumn12,^ dataGridViewTextBoxColumn13;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14,^ dataGridViewTextBoxColumn15,^ dataGridViewTextBoxColumn16;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17,^ dataGridViewTextBoxColumn18,^ dataGridViewTextBoxColumn19;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20,^ dataGridViewTextBoxColumn21,^ dataGridViewTextBoxColumn22;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23,^ dataGridViewTextBoxColumn24,^ dataGridViewTextBoxColumn25;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn26,^ dataGridViewTextBoxColumn27,^ dataGridViewTextBoxColumn28;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn29,^ dataGridViewTextBoxColumn30,^ dataGridViewTextBoxColumn31;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn32,^ dataGridViewTextBoxColumn33,^ dataGridViewTextBoxColumn34;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn35,^ dataGridViewTextBoxColumn36,^ dataGridViewTextBoxColumn37;
	DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn38,^ dataGridViewTextBoxColumn39,^ dataGridViewTextBoxColumn40;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	void InitializeComponent(void) {
		this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
		this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
		this->button4 = (gcnew System::Windows::Forms::Button());
		this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
		this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
		this->button5 = (gcnew System::Windows::Forms::Button());
		this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
		this->button6 = (gcnew System::Windows::Forms::Button());
		this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
		this->dataGridViewTextBoxColumn31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->dataGridViewTextBoxColumn40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
		this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
		this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->tabControl1->SuspendLayout();
		this->tabPage1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
		this->tabPage2->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
		this->tabPage3->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
		this->tabPage4->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
		this->tabPage5->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
		this->tabPage6->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
		this->SuspendLayout();
		// 
		// tabControl1
		// 
		this->tabControl1->Controls->Add(this->tabPage6);
		this->tabControl1->Controls->Add(this->tabPage1);
		this->tabControl1->Controls->Add(this->tabPage2);
		this->tabControl1->Controls->Add(this->tabPage3);
		this->tabControl1->Controls->Add(this->tabPage4);
		this->tabControl1->Controls->Add(this->tabPage5);
		this->tabControl1->Location = System::Drawing::Point(1, 1);
		this->tabControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->tabControl1->Name = L"tabControl1";
		this->tabControl1->SelectedIndex = 0;
		this->tabControl1->Size = System::Drawing::Size(679, 393);
		this->tabControl1->TabIndex = 0;
		// 
		// tabPage1
		// 
		this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->tabPage1->Controls->Add(this->button4);
		this->tabPage1->Controls->Add(this->dataGridView4);
		this->tabPage1->Location = System::Drawing::Point(4, 27);
		this->tabPage1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->tabPage1->Name = L"tabPage1";
		this->tabPage1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->tabPage1->Size = System::Drawing::Size(671, 362);
		this->tabPage1->TabIndex = 0;
		this->tabPage1->Text = L"�����";
		// 
		// button4
		// 
		this->button4->Location = System::Drawing::Point(3, 279);
		this->button4->Name = L"button4";
		this->button4->Size = System::Drawing::Size(663, 74);
		this->button4->TabIndex = 3;
		this->button4->Text = L"�����������";
		this->button4->UseVisualStyleBackColor = true;
		this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
		// 
		// dataGridView4
		// 
		this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
			this->dataGridViewTextBoxColumn11,
				this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15,
				this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19,
				this->dataGridViewTextBoxColumn20
		});
		this->dataGridView4->Location = System::Drawing::Point(3, 3);
		this->dataGridView4->Name = L"dataGridView4";
		this->dataGridView4->RowHeadersWidth = 60;
		this->dataGridView4->Size = System::Drawing::Size(663, 271);
		this->dataGridView4->TabIndex = 2;
		// 
		// dataGridViewTextBoxColumn11
		// 
		this->dataGridViewTextBoxColumn11->HeaderText = L"Column4";
		this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
		this->dataGridViewTextBoxColumn11->Width = 60;
		// 
		// dataGridViewTextBoxColumn12
		// 
		this->dataGridViewTextBoxColumn12->HeaderText = L"Column5";
		this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
		this->dataGridViewTextBoxColumn12->Width = 60;
		// 
		// dataGridViewTextBoxColumn13
		// 
		this->dataGridViewTextBoxColumn13->HeaderText = L"Column6";
		this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
		this->dataGridViewTextBoxColumn13->Width = 60;
		// 
		// dataGridViewTextBoxColumn14
		// 
		this->dataGridViewTextBoxColumn14->HeaderText = L"Column7";
		this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
		this->dataGridViewTextBoxColumn14->Width = 60;
		// 
		// dataGridViewTextBoxColumn15
		// 
		this->dataGridViewTextBoxColumn15->HeaderText = L"Column8";
		this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
		this->dataGridViewTextBoxColumn15->Width = 60;
		// 
		// dataGridViewTextBoxColumn16
		// 
		this->dataGridViewTextBoxColumn16->HeaderText = L"Column9";
		this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
		this->dataGridViewTextBoxColumn16->Width = 60;
		// 
		// dataGridViewTextBoxColumn17
		// 
		this->dataGridViewTextBoxColumn17->HeaderText = L"Column10";
		this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
		this->dataGridViewTextBoxColumn17->Width = 60;
		// 
		// dataGridViewTextBoxColumn18
		// 
		this->dataGridViewTextBoxColumn18->HeaderText = L"Column11";
		this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
		this->dataGridViewTextBoxColumn18->Width = 60;
		// 
		// dataGridViewTextBoxColumn19
		// 
		this->dataGridViewTextBoxColumn19->HeaderText = L"Column12";
		this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
		this->dataGridViewTextBoxColumn19->Width = 60;
		// 
		// dataGridViewTextBoxColumn20
		// 
		this->dataGridViewTextBoxColumn20->HeaderText = L"Column13";
		this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
		this->dataGridViewTextBoxColumn20->Width = 60;
		// 
		// tabPage2
		// 
		this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->tabPage2->Controls->Add(this->button3);
		this->tabPage2->Controls->Add(this->dataGridView3);
		this->tabPage2->Location = System::Drawing::Point(4, 27);
		this->tabPage2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->tabPage2->Name = L"tabPage2";
		this->tabPage2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->tabPage2->Size = System::Drawing::Size(671, 362);
		this->tabPage2->TabIndex = 1;
		this->tabPage2->Text = L"�����";
		// 
		// button3
		// 
		this->button3->Location = System::Drawing::Point(3, 279);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(663, 74);
		this->button3->TabIndex = 2;
		this->button3->Text = L"�����������";
		this->button3->UseVisualStyleBackColor = true;
		this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
		// 
		// dataGridView3
		// 
		this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
			this->dataGridViewTextBoxColumn1,
				this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
				this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9,
				this->dataGridViewTextBoxColumn10
		});
		this->dataGridView3->Location = System::Drawing::Point(3, 3);
		this->dataGridView3->Name = L"dataGridView3";
		this->dataGridView3->RowHeadersWidth = 60;
		this->dataGridView3->Size = System::Drawing::Size(663, 271);
		this->dataGridView3->TabIndex = 1;
		// 
		// dataGridViewTextBoxColumn1
		// 
		this->dataGridViewTextBoxColumn1->HeaderText = L"Column4";
		this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
		this->dataGridViewTextBoxColumn1->Width = 60;
		// 
		// dataGridViewTextBoxColumn2
		// 
		this->dataGridViewTextBoxColumn2->HeaderText = L"Column5";
		this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
		this->dataGridViewTextBoxColumn2->Width = 60;
		// 
		// dataGridViewTextBoxColumn3
		// 
		this->dataGridViewTextBoxColumn3->HeaderText = L"Column6";
		this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
		this->dataGridViewTextBoxColumn3->Width = 60;
		// 
		// dataGridViewTextBoxColumn4
		// 
		this->dataGridViewTextBoxColumn4->HeaderText = L"Column7";
		this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
		this->dataGridViewTextBoxColumn4->Width = 60;
		// 
		// dataGridViewTextBoxColumn5
		// 
		this->dataGridViewTextBoxColumn5->HeaderText = L"Column8";
		this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
		this->dataGridViewTextBoxColumn5->Width = 60;
		// 
		// dataGridViewTextBoxColumn6
		// 
		this->dataGridViewTextBoxColumn6->HeaderText = L"Column9";
		this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
		this->dataGridViewTextBoxColumn6->Width = 60;
		// 
		// dataGridViewTextBoxColumn7
		// 
		this->dataGridViewTextBoxColumn7->HeaderText = L"Column10";
		this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
		this->dataGridViewTextBoxColumn7->Width = 60;
		// 
		// dataGridViewTextBoxColumn8
		// 
		this->dataGridViewTextBoxColumn8->HeaderText = L"Column11";
		this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
		this->dataGridViewTextBoxColumn8->Width = 60;
		// 
		// dataGridViewTextBoxColumn9
		// 
		this->dataGridViewTextBoxColumn9->HeaderText = L"Column12";
		this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
		this->dataGridViewTextBoxColumn9->Width = 60;
		// 
		// dataGridViewTextBoxColumn10
		// 
		this->dataGridViewTextBoxColumn10->HeaderText = L"Column13";
		this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
		this->dataGridViewTextBoxColumn10->Width = 60;
		// 
		// tabPage3
		// 
		this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->tabPage3->Controls->Add(this->button2);
		this->tabPage3->Controls->Add(this->dataGridView2);
		this->tabPage3->Location = System::Drawing::Point(4, 27);
		this->tabPage3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->tabPage3->Name = L"tabPage3";
		this->tabPage3->Size = System::Drawing::Size(671, 362);
		this->tabPage3->TabIndex = 2;
		this->tabPage3->Text = L"���������";
		// 
		// button2
		// 
		this->button2->Location = System::Drawing::Point(3, 279);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(663, 74);
		this->button2->TabIndex = 1;
		this->button2->Text = L"�����������";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
		// 
		// dataGridView2
		// 
		this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
			this->Column4,
				this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10, this->Column11, this->Column12, this->Column13
		});
		this->dataGridView2->Location = System::Drawing::Point(3, 3);
		this->dataGridView2->Name = L"dataGridView2";
		this->dataGridView2->RowHeadersWidth = 60;
		this->dataGridView2->Size = System::Drawing::Size(663, 271);
		this->dataGridView2->TabIndex = 0;
		// 
		// Column4
		// 
		this->Column4->HeaderText = L"Column4";
		this->Column4->Name = L"Column4";
		this->Column4->Width = 60;
		// 
		// Column5
		// 
		this->Column5->HeaderText = L"Column5";
		this->Column5->Name = L"Column5";
		this->Column5->Width = 60;
		// 
		// Column6
		// 
		this->Column6->HeaderText = L"Column6";
		this->Column6->Name = L"Column6";
		this->Column6->Width = 60;
		// 
		// Column7
		// 
		this->Column7->HeaderText = L"Column7";
		this->Column7->Name = L"Column7";
		this->Column7->Width = 60;
		// 
		// Column8
		// 
		this->Column8->HeaderText = L"Column8";
		this->Column8->Name = L"Column8";
		this->Column8->Width = 60;
		// 
		// Column9
		// 
		this->Column9->HeaderText = L"Column9";
		this->Column9->Name = L"Column9";
		this->Column9->Width = 60;
		// 
		// Column10
		// 
		this->Column10->HeaderText = L"Column10";
		this->Column10->Name = L"Column10";
		this->Column10->Width = 60;
		// 
		// Column11
		// 
		this->Column11->HeaderText = L"Column11";
		this->Column11->Name = L"Column11";
		this->Column11->Width = 60;
		// 
		// Column12
		// 
		this->Column12->HeaderText = L"Column12";
		this->Column12->Name = L"Column12";
		this->Column12->Width = 60;
		// 
		// Column13
		// 
		this->Column13->HeaderText = L"Column13";
		this->Column13->Name = L"Column13";
		this->Column13->Width = 60;
		// 
		// tabPage4
		// 
		this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->tabPage4->Controls->Add(this->button5);
		this->tabPage4->Controls->Add(this->dataGridView5);
		this->tabPage4->Location = System::Drawing::Point(4, 27);
		this->tabPage4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->tabPage4->Name = L"tabPage4";
		this->tabPage4->Size = System::Drawing::Size(671, 362);
		this->tabPage4->TabIndex = 3;
		this->tabPage4->Text = L"�����";
		// 
		// button5
		// 
		this->button5->Location = System::Drawing::Point(3, 279);
		this->button5->Name = L"button5";
		this->button5->Size = System::Drawing::Size(663, 74);
		this->button5->TabIndex = 2;
		this->button5->Text = L"�����������";
		this->button5->UseVisualStyleBackColor = true;
		this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
		// 
		// dataGridView5
		// 
		this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(20) {
			this->dataGridViewTextBoxColumn21,
				this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24, this->dataGridViewTextBoxColumn25,
				this->dataGridViewTextBoxColumn26, this->dataGridViewTextBoxColumn27, this->dataGridViewTextBoxColumn28, this->dataGridViewTextBoxColumn29,
				this->dataGridViewTextBoxColumn30, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18, this->Column19,
				this->Column20, this->Column21, this->Column22, this->Column23
		});
		this->dataGridView5->Location = System::Drawing::Point(3, 3);
		this->dataGridView5->Name = L"dataGridView5";
		this->dataGridView5->RowHeadersWidth = 60;
		this->dataGridView5->Size = System::Drawing::Size(663, 271);
		this->dataGridView5->TabIndex = 1;
		// 
		// dataGridViewTextBoxColumn21
		// 
		this->dataGridViewTextBoxColumn21->HeaderText = L"Column4";
		this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
		this->dataGridViewTextBoxColumn21->Width = 30;
		// 
		// dataGridViewTextBoxColumn22
		// 
		this->dataGridViewTextBoxColumn22->HeaderText = L"Column5";
		this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
		this->dataGridViewTextBoxColumn22->Width = 30;
		// 
		// dataGridViewTextBoxColumn23
		// 
		this->dataGridViewTextBoxColumn23->HeaderText = L"Column6";
		this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
		this->dataGridViewTextBoxColumn23->Width = 30;
		// 
		// dataGridViewTextBoxColumn24
		// 
		this->dataGridViewTextBoxColumn24->HeaderText = L"Column7";
		this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
		this->dataGridViewTextBoxColumn24->Width = 30;
		// 
		// dataGridViewTextBoxColumn25
		// 
		this->dataGridViewTextBoxColumn25->HeaderText = L"Column8";
		this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
		this->dataGridViewTextBoxColumn25->Width = 30;
		// 
		// dataGridViewTextBoxColumn26
		// 
		this->dataGridViewTextBoxColumn26->HeaderText = L"Column9";
		this->dataGridViewTextBoxColumn26->Name = L"dataGridViewTextBoxColumn26";
		this->dataGridViewTextBoxColumn26->Width = 30;
		// 
		// dataGridViewTextBoxColumn27
		// 
		this->dataGridViewTextBoxColumn27->HeaderText = L"Column10";
		this->dataGridViewTextBoxColumn27->Name = L"dataGridViewTextBoxColumn27";
		this->dataGridViewTextBoxColumn27->Width = 30;
		// 
		// dataGridViewTextBoxColumn28
		// 
		this->dataGridViewTextBoxColumn28->HeaderText = L"Column11";
		this->dataGridViewTextBoxColumn28->Name = L"dataGridViewTextBoxColumn28";
		this->dataGridViewTextBoxColumn28->Width = 30;
		// 
		// dataGridViewTextBoxColumn29
		// 
		this->dataGridViewTextBoxColumn29->HeaderText = L"Column12";
		this->dataGridViewTextBoxColumn29->Name = L"dataGridViewTextBoxColumn29";
		this->dataGridViewTextBoxColumn29->Width = 30;
		// 
		// dataGridViewTextBoxColumn30
		// 
		this->dataGridViewTextBoxColumn30->HeaderText = L"Column13";
		this->dataGridViewTextBoxColumn30->Name = L"dataGridViewTextBoxColumn30";
		this->dataGridViewTextBoxColumn30->Width = 30;
		// 
		// Column14
		// 
		this->Column14->HeaderText = L"Column14";
		this->Column14->Name = L"Column14";
		this->Column14->Width = 30;
		// 
		// Column15
		// 
		this->Column15->HeaderText = L"Column15";
		this->Column15->Name = L"Column15";
		this->Column15->Width = 30;
		// 
		// Column16
		// 
		this->Column16->HeaderText = L"Column16";
		this->Column16->Name = L"Column16";
		this->Column16->Width = 30;
		// 
		// Column17
		// 
		this->Column17->HeaderText = L"Column17";
		this->Column17->Name = L"Column17";
		this->Column17->Width = 30;
		// 
		// Column18
		// 
		this->Column18->HeaderText = L"Column18";
		this->Column18->Name = L"Column18";
		this->Column18->Width = 30;
		// 
		// Column19
		// 
		this->Column19->HeaderText = L"Column19";
		this->Column19->Name = L"Column19";
		this->Column19->Width = 30;
		// 
		// Column20
		// 
		this->Column20->HeaderText = L"Column20";
		this->Column20->Name = L"Column20";
		this->Column20->Width = 30;
		// 
		// Column21
		// 
		this->Column21->HeaderText = L"Column21";
		this->Column21->Name = L"Column21";
		this->Column21->Width = 30;
		// 
		// Column22
		// 
		this->Column22->HeaderText = L"Column22";
		this->Column22->Name = L"Column22";
		this->Column22->Width = 30;
		// 
		// Column23
		// 
		this->Column23->HeaderText = L"Column23";
		this->Column23->Name = L"Column23";
		this->Column23->Width = 30;
		// 
		// tabPage5
		// 
		this->tabPage5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->tabPage5->Controls->Add(this->button6);
		this->tabPage5->Controls->Add(this->dataGridView6);
		this->tabPage5->Location = System::Drawing::Point(4, 27);
		this->tabPage5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->tabPage5->Name = L"tabPage5";
		this->tabPage5->Size = System::Drawing::Size(671, 362);
		this->tabPage5->TabIndex = 4;
		this->tabPage5->Text = L"��������";
		// 
		// button6
		// 
		this->button6->Location = System::Drawing::Point(3, 279);
		this->button6->Name = L"button6";
		this->button6->Size = System::Drawing::Size(666, 74);
		this->button6->TabIndex = 2;
		this->button6->Text = L"�����������";
		this->button6->UseVisualStyleBackColor = true;
		this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
		// 
		// dataGridView6
		// 
		this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
			this->dataGridViewTextBoxColumn31,
				this->dataGridViewTextBoxColumn32, this->dataGridViewTextBoxColumn33, this->dataGridViewTextBoxColumn34, this->dataGridViewTextBoxColumn35,
				this->dataGridViewTextBoxColumn36, this->dataGridViewTextBoxColumn37, this->dataGridViewTextBoxColumn38, this->dataGridViewTextBoxColumn39,
				this->dataGridViewTextBoxColumn40
		});
		this->dataGridView6->Location = System::Drawing::Point(3, 3);
		this->dataGridView6->Name = L"dataGridView6";
		this->dataGridView6->RowHeadersWidth = 60;
		this->dataGridView6->Size = System::Drawing::Size(663, 271);
		this->dataGridView6->TabIndex = 1;
		// 
		// dataGridViewTextBoxColumn31
		// 
		this->dataGridViewTextBoxColumn31->HeaderText = L"Column4";
		this->dataGridViewTextBoxColumn31->Name = L"dataGridViewTextBoxColumn31";
		this->dataGridViewTextBoxColumn31->Width = 60;
		// 
		// dataGridViewTextBoxColumn32
		// 
		this->dataGridViewTextBoxColumn32->HeaderText = L"Column5";
		this->dataGridViewTextBoxColumn32->Name = L"dataGridViewTextBoxColumn32";
		this->dataGridViewTextBoxColumn32->Width = 60;
		// 
		// dataGridViewTextBoxColumn33
		// 
		this->dataGridViewTextBoxColumn33->HeaderText = L"Column6";
		this->dataGridViewTextBoxColumn33->Name = L"dataGridViewTextBoxColumn33";
		this->dataGridViewTextBoxColumn33->Width = 60;
		// 
		// dataGridViewTextBoxColumn34
		// 
		this->dataGridViewTextBoxColumn34->HeaderText = L"Column7";
		this->dataGridViewTextBoxColumn34->Name = L"dataGridViewTextBoxColumn34";
		this->dataGridViewTextBoxColumn34->Width = 60;
		// 
		// dataGridViewTextBoxColumn35
		// 
		this->dataGridViewTextBoxColumn35->HeaderText = L"Column8";
		this->dataGridViewTextBoxColumn35->Name = L"dataGridViewTextBoxColumn35";
		this->dataGridViewTextBoxColumn35->Width = 60;
		// 
		// dataGridViewTextBoxColumn36
		// 
		this->dataGridViewTextBoxColumn36->HeaderText = L"Column9";
		this->dataGridViewTextBoxColumn36->Name = L"dataGridViewTextBoxColumn36";
		this->dataGridViewTextBoxColumn36->Width = 60;
		// 
		// dataGridViewTextBoxColumn37
		// 
		this->dataGridViewTextBoxColumn37->HeaderText = L"Column10";
		this->dataGridViewTextBoxColumn37->Name = L"dataGridViewTextBoxColumn37";
		this->dataGridViewTextBoxColumn37->Width = 60;
		// 
		// dataGridViewTextBoxColumn38
		// 
		this->dataGridViewTextBoxColumn38->HeaderText = L"Column11";
		this->dataGridViewTextBoxColumn38->Name = L"dataGridViewTextBoxColumn38";
		this->dataGridViewTextBoxColumn38->Width = 60;
		// 
		// dataGridViewTextBoxColumn39
		// 
		this->dataGridViewTextBoxColumn39->HeaderText = L"Column12";
		this->dataGridViewTextBoxColumn39->Name = L"dataGridViewTextBoxColumn39";
		this->dataGridViewTextBoxColumn39->Width = 60;
		// 
		// dataGridViewTextBoxColumn40
		// 
		this->dataGridViewTextBoxColumn40->HeaderText = L"Column13";
		this->dataGridViewTextBoxColumn40->Name = L"dataGridViewTextBoxColumn40";
		this->dataGridViewTextBoxColumn40->Width = 60;
		// 
		// tabPage6
		// 
		this->tabPage6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->tabPage6->Controls->Add(this->button1);
		this->tabPage6->Controls->Add(this->label1);
		this->tabPage6->Controls->Add(this->numericUpDown1);
		this->tabPage6->Controls->Add(this->dataGridView1);
		this->tabPage6->Location = System::Drawing::Point(4, 27);
		this->tabPage6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->tabPage6->Name = L"tabPage6";
		this->tabPage6->Size = System::Drawing::Size(671, 362);
		this->tabPage6->TabIndex = 5;
		this->tabPage6->Text = L"��������������";
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(114, 205);
		this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(204, 56);
		this->button1->TabIndex = 3;
		this->button1->Text = L"�����������";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(4, 179);
		this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(172, 18);
		this->label1->TabIndex = 2;
		this->label1->Text = L"���������� ���������";
		// 
		// numericUpDown1
		// 
		this->numericUpDown1->Location = System::Drawing::Point(278, 173);
		this->numericUpDown1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->numericUpDown1->Name = L"numericUpDown1";
		this->numericUpDown1->Size = System::Drawing::Size(145, 24);
		this->numericUpDown1->TabIndex = 1;
		// 
		// dataGridView1
		// 
		this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
			this->Column1,
				this->Column2, this->Column3
		});
		this->dataGridView1->Location = System::Drawing::Point(4, 4);
		this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->dataGridView1->Name = L"dataGridView1";
		this->dataGridView1->RowHeadersWidth = 120;
		this->dataGridView1->Size = System::Drawing::Size(423, 161);
		this->dataGridView1->TabIndex = 0;
		// 
		// Column1
		// 
		this->Column1->HeaderText = L"���������";
		this->Column1->Name = L"Column1";
		// 
		// Column2
		// 
		this->Column2->HeaderText = L"������������";
		this->Column2->Name = L"Column2";
		this->Column2->Width = 120;
		// 
		// Column3
		// 
		this->Column3->HeaderText = L"�����";
		this->Column3->Name = L"Column3";
		this->Column3->Width = 80;
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ClientSize = System::Drawing::Size(679, 393);
		this->Controls->Add(this->tabControl1);
		this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
		this->Name = L"MyForm";
		this->Text = L"��������� ���������� ����������";
		this->tabControl1->ResumeLayout(false);
		this->tabPage1->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
		this->tabPage2->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
		this->tabPage3->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
		this->tabPage4->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
		this->tabPage5->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
		this->tabPage6->ResumeLayout(false);
		this->tabPage6->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
		this->ResumeLayout(false);

	}
#pragma endregion
	// ---------------------------------------------
	// �������������� ����������
	// ---------------------------------------------
	Void button1_Click(Object^ sender, EventArgs^ e) {
		if (!table_characteristics_formed) {
			for (int i = 0; i < 5; ++i)
				dataGridView1->Rows->Add();
			dataGridView1->Rows[0]->HeaderCell->Value = "�����";
			dataGridView1->Rows[1]->HeaderCell->Value = "�����";
			dataGridView1->Rows[2]->HeaderCell->Value = "���������";
			dataGridView1->Rows[3]->HeaderCell->Value = "�����";
			dataGridView1->Rows[4]->HeaderCell->Value = "��������";
			table_characteristics_formed = true;
		}
		N = Convert::ToInt32(numericUpDown1->Value);
		arr = new int[N];
		for (int i = 0; i < N; ++i)
			arr[i] = rand() % 100;
		// -----------------------------------
		// ���������� ������ ����������
		// -----------------------------------
		#pragma region Forward include sorting
		int* arr_forward_include = new int[N];
		for (int i = 0; i < N; ++i)
			arr_forward_include[i] = arr[i];
		// ����� ������ ������ ���������
		const auto begin_forward_include = chrono::high_resolution_clock::now();
		// ����� ������������ � ���������
		int permutations_forward_include = 0, comparisons_forward_include = 0;
		// ���������� ������ ����������
		forward_include(arr_forward_include, N, permutations_forward_include, comparisons_forward_include);
		// ����� ���������� ������ ���������
		const auto end_forward_include = chrono::high_resolution_clock::now();
		const auto time_forward_include = chrono::duration_cast<chrono::duration < double>>(end_forward_include - begin_forward_include);
		// ����� ����������� � �������
		dataGridView1->Rows[2]->Cells[0]->Value = comparisons_forward_include;
		dataGridView1->Rows[2]->Cells[1]->Value = permutations_forward_include;
		dataGridView1->Rows[2]->Cells[2]->Value = Convert::ToString(time_forward_include.count() * 10000);
		delete arr_forward_include;
		#pragma endregion
		// -----------------------------------
		// ���������� ������ �������
		// -----------------------------------
		#pragma region Forward selection sorting
		int* arr_forward_selection = new int[N];
		for (int i = 0; i < N; ++i)
			arr_forward_selection[i] = arr[i];
		// ����� ������ ������ ���������
		const auto begin_forward_selection = chrono::high_resolution_clock::now();
		// ����� ������������ � ���������
		int permutations_forward_selection = 0, comparisons_forward_selection = 0;
		// ���������� ������ ����������
		forward_selection(arr_forward_selection, N, permutations_forward_selection, comparisons_forward_selection);
		// ����� ���������� ������ ���������
		const auto end_forward_selection = chrono::high_resolution_clock::now();
		const auto time_forward_selection = chrono::duration_cast<chrono::duration < double>>(end_forward_selection - begin_forward_selection);
		// ����� ����������� � �������
		dataGridView1->Rows[1]->Cells[0]->Value = comparisons_forward_selection;
		dataGridView1->Rows[1]->Cells[1]->Value = permutations_forward_selection;
		dataGridView1->Rows[1]->Cells[2]->Value = Convert::ToString(time_forward_selection.count() * 10000);
		delete arr_forward_selection;
#pragma endregion
		// -----------------------------------
		// ���������� ������ �������
		// -----------------------------------
		#pragma region Forward exchange sorting
		int* arr_forward_exchange = new int[N];
		for (int i = 0; i < N; ++i)
			arr_forward_exchange[i] = arr[i];
		// ����� ������ ������ ���������
		const auto begin_forward_exchange = chrono::high_resolution_clock::now();
		// ����� ������������ � ���������
		int permutations_forward_exchange = 0, comparisons_forward_exchange = 0;
		// ���������� ������ ����������
		forward_exchange(arr_forward_exchange, N, permutations_forward_exchange, comparisons_forward_exchange);
		// ����� ���������� ������ ���������
		const auto end_forward_exchange = chrono::high_resolution_clock::now();
		const auto time_forward_exchange = chrono::duration_cast<chrono::duration < double>>(end_forward_exchange - begin_forward_exchange);
		// ����� ����������� � �������
		dataGridView1->Rows[0]->Cells[0]->Value = comparisons_forward_exchange;
		dataGridView1->Rows[0]->Cells[1]->Value = permutations_forward_exchange;
		dataGridView1->Rows[0]->Cells[2]->Value = Convert::ToString(time_forward_exchange.count() * 10000);
		delete arr_forward_exchange;
		#pragma endregion
		// -----------------------------------
		// ���������� ������� �����
		// -----------------------------------
		#pragma region Shell sorting
		int* arr_shell = new int[N];
		for (int i = 0; i < N; ++i)
			arr_shell[i] = arr[i];
		// ����� ������ ������ ���������
		const auto begin_shell = chrono::high_resolution_clock::now();
		// ����� ������������ � ���������
		int permutations_shell = 0, comparisons_shell = 0;
		// ���������� ������ ����������
		shell(arr_shell, N, permutations_shell, comparisons_shell);
		// ����� ���������� ������ ���������
		const auto end_shell = chrono::high_resolution_clock::now();
		const auto time_shell = chrono::duration_cast<chrono::duration < double>>(end_shell - begin_shell);
		// ����� ����������� � �������
		dataGridView1->Rows[3]->Cells[0]->Value = comparisons_shell;
		dataGridView1->Rows[3]->Cells[1]->Value = permutations_shell;
		dataGridView1->Rows[3]->Cells[2]->Value = Convert::ToString(time_shell.count() * 10000);
		delete[] arr_shell;
		#pragma endregion
		// -----------------------------------
		// �������� ����������
		// -----------------------------------
		#pragma region Linear sorting
		int* arr_linear = new int[N];
		for (int i = 0; i < N; ++i)
			arr_linear[i] = arr[i];
		// ����� ������ ������ ���������
		const auto begin_linear = chrono::high_resolution_clock::now();
		// ����� ������������ � ���������
		int permutations_linear = 0, comparisons_linear = 0;
		// ���������� ������ ����������
		linear(arr_linear, N);
		// ����� ���������� ������ ���������
		const auto end_linear = chrono::high_resolution_clock::now();
		const auto time_linear = chrono::duration_cast<chrono::duration < double>>(end_linear - begin_linear);
		// ����� ����������� � �������
		dataGridView1->Rows[4]->Cells[0]->Value = "No";
		dataGridView1->Rows[4]->Cells[1]->Value = "No";
		dataGridView1->Rows[4]->Cells[2]->Value = Convert::ToString(time_linear.count() * 10000);
		delete[] arr_linear;
		#pragma endregion
		delete[] arr;
	}
	// ---------------------------------------------
	// ���������� ������ ���������� � �������������
	// ---------------------------------------------
	Void button2_Click(Object^ sender, EventArgs^ e) {
		int* arr_forward_include = new int[M];
		for (int i = 0; i < M; ++i)
			arr_forward_include[i] = rand() % 100;

		if (!table_forward_include) {
			for (int i = 0; i < M; ++i) {
				dataGridView2->Rows->Add();
				dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
			table_forward_include = true;
		}

		for (int i = 0; i < M; ++i)
			dataGridView2->Columns[i]->HeaderCell->Value = Convert::ToString(arr_forward_include[i]);

		forward_include(arr_forward_include, M, dataGridView2);
	}
	// ---------------------------------------------
	// ���������� ������ ������� � �������������
	// ---------------------------------------------
	Void button3_Click(Object^ sender, EventArgs^ e) {
		int* arr_forward_selection = new int[M];
		for (int i = 0; i < M; ++i)
			arr_forward_selection[i] = rand() % 100;

		if (!table_forward_selection) {
			for (int i = 0; i < M; ++i) {
				dataGridView3->Rows->Add();
				dataGridView3->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
			table_forward_selection = true;
		}

		for (int i = 0; i < M; ++i)
			dataGridView3->Columns[i]->HeaderCell->Value = Convert::ToString(arr_forward_selection[i]);

		forward_selection(arr_forward_selection, M, dataGridView3);
	}
	// ---------------------------------------------
	// ���������� ������ ������� � �������������
	// ---------------------------------------------
	Void button4_Click(Object^ sender, EventArgs^ e) {
		int* arr_forward_exchange = new int[M];
		for (int i = 0; i < M; ++i)
			arr_forward_exchange[i] = rand() % 100;

		if (!table_forward_exchange) {
			for (int i = 0; i < M; ++i) {
				dataGridView4->Rows->Add();
				dataGridView4->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

			}
			table_forward_exchange = true;
		}

		for (int i = 0; i < M; ++i) {
			dataGridView4->Columns[i]->HeaderCell->Value = Convert::ToString(arr_forward_exchange[i]);
			for (int j = 0; j < M; ++j)
				dataGridView4->Rows[i]->Cells[j]->Value = "";
		}

		forward_exchange(arr_forward_exchange, M, dataGridView4);
	}
	// ---------------------------------------------
	// ���������� �����
	// ---------------------------------------------
	Void button5_Click(Object^ sender, EventArgs^ e) {
		int* arr_shell = new int[M*2];
		for (int i = 0; i < M*2; ++i)
			arr_shell[i] = rand() % 100;

		if (!table_shell) {
			for (int i = 0; i < M; ++i) {
				dataGridView5->Rows->Add();
				dataGridView5->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
			table_shell = true;
		}

		for (int i = 0; i < M; ++i) 
			for (int j = 0; j < M*2; ++j)
				dataGridView5->Rows[i]->Cells[j]->Value = "";
		
		for (int i = 0; i < M*2; ++i) 
			dataGridView5->Columns[i]->HeaderCell->Value = Convert::ToString(arr_shell[i]);
		shell(arr_shell, M*2, dataGridView5);
	}
	// ---------------------------------------------
	// �������� ����������
	// ---------------------------------------------
	Void button6_Click(Object^ sender, EventArgs^ e) {
		int* arr_linear = new int[M];
		for (int i = 0; i < M; ++i)
			arr_linear[i] = rand() % M;

		if (!table_linear) {
			for (int i = 0; i < M; ++i) {
				dataGridView6->Rows->Add();
				dataGridView6->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
			table_linear = true;
		}

		for (int i = 0; i < M; ++i)
			dataGridView6->Columns[i]->HeaderCell->Value = Convert::ToString(arr_linear[i]);

		linear(arr_linear, M, dataGridView6);
		delete[] arr_linear;
	}
	// ---------------------------------------------
	// ���������� ������� ����������
	// ---------------------------------------------
	// ���������� ������ ���������� � ������� �������������
	static void forward_include(int num[], const int size, int& permutations, int& comparisons) {
		// ��� ���� ��������� ����� ����������
		for (int i = 1; i < size; i++) {
			const int data = num[i];	// P��������� �������� ��������
			int index = i;				// � ��� ������
			while (index > 0 && num[index - 1] >= data) { // C������ ������ �������� � ����� ������� ���� ��� ������ index
				num[index] = num[index - 1];
				index--;	// C������ �������� � ������ �������
				comparisons++; // ���������
			}
				permutations++; // �����������
			num[index] = data;	// H�������������� ������� �������� �� �������������� �����
		}
	}
	// ���������� ������ ���������� � ������� �������
	static void forward_include(int num[], const int size, DataGridView^ dataGridView) {
		// ��� ���� ��������� ����� ����������
		for (int i = 1; i < size; i++) {
			const int data = num[i];	// P��������� �������� ��������
			int index = i;				// � ��� ������
			while (index > 0 && num[index - 1] >= data) { // C������ ������ �������� � ����� ������� ���� ��� ������ index
				num[index] = num[index - 1];
				index--;	// C������ �������� � ������ �������
			}
			num[index] = data;	// H�������������� ������� �������� �� �������������� �����
			for (int j = 0; j < size; ++j)
				dataGridView->Rows[i - 1]->Cells[j]->Value = Convert::ToString(num[j]);
		}
	}

	// ���������� ������ ������� � ������� �������������
	static void forward_selection(int* num, int size, int& permutations, int& comparisons) {
		int min, temp; // ��� ������ ������������ �������� � ��� ������
		for (int i = 0; i < size - 1; i++) {
			min = i; // ���������� ������ �������� ��������
			// ����� ������������ ��������, ����� ��������� �� ����� i-���
			for (int j = i + 1; j < size; j++) {  // ��� ��������� ��������� ����� i-���
				if (num[j] < num[min]) // ���� ������� ������ ������������,
					min = j;       // ���������� ��� ������ � min
				comparisons++;
			}
			temp = num[i];      // ������ ������� i-�� � ����������� ��������
			num[i] = num[min];
			num[min] = temp;
			permutations++;
		}
	}
	// ���������� ������ ������� � ������� �������
	static void forward_selection(int* num, int size, DataGridView^ dataGridView) {
		int min, temp; // ��� ������ ������������ �������� � ��� ������
		for (int i = 0; i < size - 1; i++) {
			min = i; // ���������� ������ �������� ��������
			// ����� ������������ ��������, ����� ��������� �� ����� i-���
			for (int j = i + 1; j < size; j++)  // ��� ��������� ��������� ����� i-���
				if (num[j] < num[min]) // ���� ������� ������ ������������,
					min = j;       // ���������� ��� ������ � min
			temp = num[i];      // ������ ������� i-�� � ����������� ��������
			num[i] = num[min];
			num[min] = temp;
			for (int j = 0; j < size; ++j)
				dataGridView->Rows[i]->Cells[j]->Value = Convert::ToString(num[j]);
		}
	}

	// ���������� ������ ������� (����� "��������") � ������� �������������
	static void forward_exchange(int* num, int size, int& permutations, int& comparisons) {
		// ��� ���� ���������
		for (int i = 0; i < size - 1; i++) {
			int perm = 0;
			for (int j = (size - 1); j > i; j--) { // ��� ���� ��������� ����� i-���
				if (num[j - 1] > num[j]) { // ���� ������� ������� ������ �����������
					int temp = num[j - 1]; // ������ �� �������
					num[j - 1] = num[j];
					num[j] = temp;
					perm++;
					permutations++;
				}
				comparisons++;
			}
			if (perm == 0) break;
		}
	}
	// ���������� ������ ������� (����� "��������") � ������� �������
	static void forward_exchange(int* num, int size, DataGridView^ dataGridView) {
		// ��� ���� ���������
		for (int i = 0; i < size - 1; i++) {
			int permutations = 0;
			for (int j = (size - 1); j > i; j--) { // ��� ���� ��������� ����� i-���
				if (num[j - 1] > num[j]) { // ���� ������� ������� ������ �����������
					int temp = num[j - 1]; // ������ �� �������
					num[j - 1] = num[j];
					num[j] = temp;
					permutations++;
				}
			}
			if (permutations == 0) break;
			for (int j = 0; j < size; ++j)
				dataGridView->Rows[i]->Cells[j]->Value = Convert::ToString(num[j]);
		}
	}

	// C��������� ����� � ������� �������������
	static void shell(int* num, int size, int& permutations, int& comparisons) {
		int increment = log2(size) - 1;    // ��������� ���������� ����������
		while (increment > 0) {  // ���� ���������� ����������
			for (int i = 0; i < size; i++) {  // ��� ���� ��������� �������
				int j = i;          // ��������� ������ � �������
				int temp = num[i];
				// ������������� ��������� �������� �������, ��������� �� j-���
				// �� �������� ����������
				while ((j >= increment) && (num[j - increment] > temp)) { 
				  // ���� ��������� ������� ������ ��������
					num[j] = num[j - increment];	// ���������� ��� �� ������� �������
					j = j - increment;				// ��������� � ���������� ���������� ��������
					comparisons++;
				}
				permutations++;
				num[j] = temp; // �� ���������� ����� �������� ����������� �������
			}
			increment = increment / 2;// ����� ���������� �� 2

		}
	}
	// C��������� ����� � ������� �������
	static void shell(int* num, int size, DataGridView^ dataGridView) {
		int increment = log2(size) - 1;    // ��������� ���������� ����������
		int number_show = 0;
		while (increment > 0) {  // ���� ���������� ����������
			for (int i = 0; i < size; i++) {  // ��� ���� ��������� �������
				int j = i;          // ��������� ������ � �������
				int temp = num[i];
				// ������������� ��������� �������� �������, ��������� �� j-���
				// �� �������� ����������
				while ((j >= increment) && (num[j - increment] > temp)) {
					// ���� ��������� ������� ������ ��������
					num[j] = num[j - increment];	// ���������� ��� �� ������� �������
					j = j - increment;				// ��������� � ���������� ���������� ��������
				}
				num[j] = temp; // �� ���������� ����� �������� ����������� �������
			}
			increment = increment / 2;	// ����� ���������� �� 2

			for (int j = 0; j < size; ++j)
				dataGridView->Rows[number_show]->Cells[j]->Value = Convert::ToString(num[j]);
			number_show++;
		}
	}

	// �������� ���������� � ������� �������������
	static void linear(int* num, int size) {
		// ��������������� ������
		int* help_arr = new int[size];
		// ��������� ���������������� �������
		for (int i = 0; i < size; i++)
			help_arr[i] = 0;
		// ���������� ���������������� �������
		for (int i = 0; i < size; i++)
			help_arr[num[i]]++;
		int j = 0;
		// ������ �� ����� ���������������� �������
		for (int i = 0; i < size; i++)
			// ������ � ������ k ���������� i-�� ��������� �� ���������������� �������
			for (int k = 0; k < help_arr[i]; ++k)
				num[j++] = i;
		delete[] help_arr;
	}
	// �������� ���������� � ������� �������
	static void linear(int* num, int size, DataGridView^ dataGridView) {
		// ��������������� ������
		int* help_arr = new int[size];
		// ��������� ���������������� �������
		for (int i = 0; i < size; i++)
			help_arr[i] = 0;
		// ���������� ���������������� �������
		for (int i = 0; i < size; i++)
			help_arr[num[i]]++;
		int j = 0;
		// ������ �� ����� ���������������� �������
		for (int i = 0; i < size; i++)
			// ������ � ������ k ���������� i-�� ��������� �� ���������������� �������
			for (int k = 0; k < help_arr[i]; ++k)
				num[j++] = i;
		// ����� ��������
		for (int i = 0; i < size; i++) {
			dataGridView->Rows[0]->Cells[i]->Value = Convert::ToString(help_arr[i]);
			dataGridView->Rows[1]->Cells[i]->Value = Convert::ToString(num[i]);
		}
		delete[] help_arr;
	}
};
}