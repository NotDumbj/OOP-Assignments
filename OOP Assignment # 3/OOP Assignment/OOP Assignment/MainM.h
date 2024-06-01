#ifndef MAINM_H
#define MAINM_H

#include<iostream> // for console testing purpose

#include "Rebuild.h"
#include "ShowWin.h"



namespace OOPAssignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;



	void run();

	/// <summary>
	/// Summary for MainM
	/// </summary>
	/// 
	/// 
	
	public ref class MainM : public System::Windows::Forms::Form
	{
	public:

		TimeTableManager^ tt;
		MainM(void)
		{
			run();
			tt = gcnew TimeTableManager();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void connecttodatabase() {
			String^ constring = "Data Source=TECHNOMANCER;Initial Catalog=dbTest;Integrated Security=True";

			SqlConnection sqlcon(constring);
			sqlcon.Open();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmain;
	private: System::Windows::Forms::Button^ buttonadmin;
	private: System::Windows::Forms::Button^ buttonguest;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ guestpanel;
	private: System::Windows::Forms::Button^ backbtnmainmenu;
	private: System::Windows::Forms::Button^ sectiontimetablebtn;
	private: System::Windows::Forms::Panel^ sectionpanel;
	private: System::Windows::Forms::ListBox^ SectionListBox;
	private: System::Windows::Forms::Button^ gobackguestpanel;
	private: System::Windows::Forms::Button^ showtimetable;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Panel^ adminpanel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ gobacktomainmenu;
	private: System::Windows::Forms::Button^ swapbtn;
	private: System::Windows::Forms::Button^ showttbtn;
	private: System::Windows::Forms::Button^ addremovebtn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ mainpanelar;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ removebtn;
	private: System::Windows::Forms::Panel^ addpanl;
	private: System::Windows::Forms::ListBox^ comboBox2;
	private: System::Windows::Forms::Button^ dadadaadd;
	private: System::Windows::Forms::Button^ gobacktomenu;
	private: System::Windows::Forms::Label^ var;
	private: System::Windows::Forms::Label^ addnamelabel;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ namet;
	private: System::Windows::Forms::Panel^ removepl;
	private: System::Windows::Forms::ListBox^ comboBox4;

	private: System::Windows::Forms::Button^ removeitbtn;
	private: System::Windows::Forms::Button^ gobacktoadminpanel;
	private: System::Windows::Forms::Label^ var2;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Panel^ mainpaneltt;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ roompanel;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Panel^ coursepanel;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Panel^ teacherpanel;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Panel^ relationpanel;

	private: System::Windows::Forms::ListBox^ listBoxr1;
	private: System::Windows::Forms::Button^ buttonchangerelation;
	private: System::Windows::Forms::Button^ gobacktoadminpn;



	private: System::Windows::Forms::Label^ labelr1;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ comboBoxrelations;
	private: System::Windows::Forms::ListBox^ listBoxr2;
	private: System::Windows::Forms::Label^ labelr2;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Button^ deletetimetablebtn;

private: System::Windows::Forms::Button^ changetimetablebtn;

private: System::Windows::Forms::Button^ addtimetablebtn;
private: System::Windows::Forms::Panel^ addtimetablepanel;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::ComboBox^ coursecomboBoxadd;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ addtimetableworkbtn;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::ComboBox^ timeslotcomboBoxadd;

private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::ComboBox^ sectioncomboBoxadd;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::ComboBox^ roomcomboBoxadd;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::ComboBox^ daytimetableadd;
private: System::Windows::Forms::Panel^ deletetimetablepanel;


private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::ComboBox^ daytimetableremove;
private: System::Windows::Forms::Button^ removetimetableworkbtn;


private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::ComboBox^ timeslotcomboBoxremove;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::ComboBox^ sectioncomboBoxremove;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::ComboBox^ roomcomboBoxremove;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::ComboBox^ coursecomboBoxremove;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Panel^ changetimetablepanel;

private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::ComboBox^ daytimetablech2;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::ComboBox^ timeslotcomboBoxch2;

private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::ComboBox^ sectioncomboBoxch2;

private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::ComboBox^ roomcomboBoxch2;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::ComboBox^ coursecomboBoxch2;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::ComboBox^ daytimetablech1;
private: System::Windows::Forms::Button^ changetimetableworkbtn;


private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::ComboBox^ timeslotcomboBoxch1;

private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::ComboBox^ sectioncomboBoxch1;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::ComboBox^ roomcomboBoxch1;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::ComboBox^ coursecomboBoxch1;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::ComboBox^ comboBoxaddad;
private: System::Windows::Forms::Button^ gbttchbtn;
private: System::Windows::Forms::Button^ gbttrbtn;
private: System::Windows::Forms::Button^ gbttabtn;










	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainM::typeid));
			this->panelmain = (gcnew System::Windows::Forms::Panel());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonadmin = (gcnew System::Windows::Forms::Button());
			this->buttonguest = (gcnew System::Windows::Forms::Button());
			this->guestpanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->backbtnmainmenu = (gcnew System::Windows::Forms::Button());
			this->sectiontimetablebtn = (gcnew System::Windows::Forms::Button());
			this->sectionpanel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->gobackguestpanel = (gcnew System::Windows::Forms::Button());
			this->showtimetable = (gcnew System::Windows::Forms::Button());
			this->SectionListBox = (gcnew System::Windows::Forms::ListBox());
			this->adminpanel = (gcnew System::Windows::Forms::Panel());
			this->gobacktomainmenu = (gcnew System::Windows::Forms::Button());
			this->swapbtn = (gcnew System::Windows::Forms::Button());
			this->showttbtn = (gcnew System::Windows::Forms::Button());
			this->addremovebtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->mainpanelar = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->removebtn = (gcnew System::Windows::Forms::Button());
			this->addpanl = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBoxaddad = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ListBox());
			this->dadadaadd = (gcnew System::Windows::Forms::Button());
			this->gobacktomenu = (gcnew System::Windows::Forms::Button());
			this->var = (gcnew System::Windows::Forms::Label());
			this->addnamelabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->namet = (gcnew System::Windows::Forms::TextBox());
			this->removepl = (gcnew System::Windows::Forms::Panel());
			this->comboBox4 = (gcnew System::Windows::Forms::ListBox());
			this->removeitbtn = (gcnew System::Windows::Forms::Button());
			this->gobacktoadminpanel = (gcnew System::Windows::Forms::Button());
			this->var2 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->mainpaneltt = (gcnew System::Windows::Forms::Panel());
			this->deletetimetablebtn = (gcnew System::Windows::Forms::Button());
			this->changetimetablebtn = (gcnew System::Windows::Forms::Button());
			this->addtimetablebtn = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->roompanel = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->coursepanel = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->teacherpanel = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->relationpanel = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->listBoxr2 = (gcnew System::Windows::Forms::ListBox());
			this->labelr2 = (gcnew System::Windows::Forms::Label());
			this->listBoxr1 = (gcnew System::Windows::Forms::ListBox());
			this->buttonchangerelation = (gcnew System::Windows::Forms::Button());
			this->gobacktoadminpn = (gcnew System::Windows::Forms::Button());
			this->labelr1 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBoxrelations = (gcnew System::Windows::Forms::ComboBox());
			this->addtimetablepanel = (gcnew System::Windows::Forms::Panel());
			this->gbttabtn = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->daytimetableadd = (gcnew System::Windows::Forms::ComboBox());
			this->addtimetableworkbtn = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->timeslotcomboBoxadd = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->sectioncomboBoxadd = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->roomcomboBoxadd = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->coursecomboBoxadd = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->deletetimetablepanel = (gcnew System::Windows::Forms::Panel());
			this->gbttrbtn = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->daytimetableremove = (gcnew System::Windows::Forms::ComboBox());
			this->removetimetableworkbtn = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->timeslotcomboBoxremove = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->sectioncomboBoxremove = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->roomcomboBoxremove = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->coursecomboBoxremove = (gcnew System::Windows::Forms::ComboBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->changetimetablepanel = (gcnew System::Windows::Forms::Panel());
			this->gbttchbtn = (gcnew System::Windows::Forms::Button());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->daytimetablech2 = (gcnew System::Windows::Forms::ComboBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->timeslotcomboBoxch2 = (gcnew System::Windows::Forms::ComboBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->sectioncomboBoxch2 = (gcnew System::Windows::Forms::ComboBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->roomcomboBoxch2 = (gcnew System::Windows::Forms::ComboBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->coursecomboBoxch2 = (gcnew System::Windows::Forms::ComboBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->daytimetablech1 = (gcnew System::Windows::Forms::ComboBox());
			this->changetimetableworkbtn = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->timeslotcomboBoxch1 = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->sectioncomboBoxch1 = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->roomcomboBoxch1 = (gcnew System::Windows::Forms::ComboBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->coursecomboBoxch1 = (gcnew System::Windows::Forms::ComboBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panelmain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->guestpanel->SuspendLayout();
			this->sectionpanel->SuspendLayout();
			this->adminpanel->SuspendLayout();
			this->mainpanelar->SuspendLayout();
			this->addpanl->SuspendLayout();
			this->removepl->SuspendLayout();
			this->mainpaneltt->SuspendLayout();
			this->roompanel->SuspendLayout();
			this->coursepanel->SuspendLayout();
			this->teacherpanel->SuspendLayout();
			this->relationpanel->SuspendLayout();
			this->addtimetablepanel->SuspendLayout();
			this->deletetimetablepanel->SuspendLayout();
			this->changetimetablepanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelmain
			// 
			this->panelmain->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panelmain->Controls->Add(this->exit);
			this->panelmain->Controls->Add(this->label1);
			this->panelmain->Controls->Add(this->pictureBox1);
			this->panelmain->Controls->Add(this->buttonadmin);
			this->panelmain->Controls->Add(this->buttonguest);
			this->panelmain->Location = System::Drawing::Point(282, 152);
			this->panelmain->Name = L"panelmain";
			this->panelmain->Size = System::Drawing::Size(623, 438);
			this->panelmain->TabIndex = 0;
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::Brown;
			this->exit->ForeColor = System::Drawing::Color::MintCream;
			this->exit->Location = System::Drawing::Point(205, 376);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(233, 35);
			this->exit->TabIndex = 4;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MainM::exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua", 39.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(110, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(405, 60);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Bahria University";
			this->label1->Click += gcnew System::EventHandler(this, &MainM::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(270, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(97, 86);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// buttonadmin
			// 
			this->buttonadmin->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonadmin->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->buttonadmin->Location = System::Drawing::Point(205, 324);
			this->buttonadmin->Name = L"buttonadmin";
			this->buttonadmin->Size = System::Drawing::Size(233, 35);
			this->buttonadmin->TabIndex = 1;
			this->buttonadmin->Text = L"Admin";
			this->buttonadmin->UseVisualStyleBackColor = false;
			this->buttonadmin->Click += gcnew System::EventHandler(this, &MainM::buttonadmin_Click);
			// 
			// buttonguest
			// 
			this->buttonguest->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonguest->ForeColor = System::Drawing::SystemColors::InfoText;
			this->buttonguest->Location = System::Drawing::Point(205, 271);
			this->buttonguest->Name = L"buttonguest";
			this->buttonguest->Size = System::Drawing::Size(233, 35);
			this->buttonguest->TabIndex = 0;
			this->buttonguest->Text = L"Guest";
			this->buttonguest->UseVisualStyleBackColor = false;
			this->buttonguest->Click += gcnew System::EventHandler(this, &MainM::buttonguest_Click);
			// 
			// guestpanel
			// 
			this->guestpanel->Controls->Add(this->label3);
			this->guestpanel->Controls->Add(this->backbtnmainmenu);
			this->guestpanel->Controls->Add(this->sectiontimetablebtn);
			this->guestpanel->Location = System::Drawing::Point(262, 129);
			this->guestpanel->Name = L"guestpanel";
			this->guestpanel->Size = System::Drawing::Size(689, 487);
			this->guestpanel->TabIndex = 1;
			this->guestpanel->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(295, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Guest";
			// 
			// backbtnmainmenu
			// 
			this->backbtnmainmenu->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->backbtnmainmenu->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->backbtnmainmenu->Location = System::Drawing::Point(228, 275);
			this->backbtnmainmenu->Name = L"backbtnmainmenu";
			this->backbtnmainmenu->Size = System::Drawing::Size(233, 35);
			this->backbtnmainmenu->TabIndex = 3;
			this->backbtnmainmenu->Text = L"Go Back";
			this->backbtnmainmenu->UseVisualStyleBackColor = false;
			this->backbtnmainmenu->Click += gcnew System::EventHandler(this, &MainM::backbtnmainmenu_Click);
			// 
			// sectiontimetablebtn
			// 
			this->sectiontimetablebtn->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->sectiontimetablebtn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->sectiontimetablebtn->Location = System::Drawing::Point(228, 181);
			this->sectiontimetablebtn->Name = L"sectiontimetablebtn";
			this->sectiontimetablebtn->Size = System::Drawing::Size(233, 35);
			this->sectiontimetablebtn->TabIndex = 2;
			this->sectiontimetablebtn->Text = L"Show Timetable By Section";
			this->sectiontimetablebtn->UseVisualStyleBackColor = false;
			this->sectiontimetablebtn->Click += gcnew System::EventHandler(this, &MainM::sectiontimetablebtn_Click);
			// 
			// sectionpanel
			// 
			this->sectionpanel->Controls->Add(this->label2);
			this->sectionpanel->Controls->Add(this->gobackguestpanel);
			this->sectionpanel->Controls->Add(this->showtimetable);
			this->sectionpanel->Controls->Add(this->SectionListBox);
			this->sectionpanel->Location = System::Drawing::Point(239, 99);
			this->sectionpanel->Name = L"sectionpanel";
			this->sectionpanel->Size = System::Drawing::Size(722, 526);
			this->sectionpanel->TabIndex = 2;
			this->sectionpanel->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Info;
			this->label2->Location = System::Drawing::Point(286, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 32);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Sections";
			// 
			// gobackguestpanel
			// 
			this->gobackguestpanel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->gobackguestpanel->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->gobackguestpanel->Location = System::Drawing::Point(245, 364);
			this->gobackguestpanel->Name = L"gobackguestpanel";
			this->gobackguestpanel->Size = System::Drawing::Size(233, 35);
			this->gobackguestpanel->TabIndex = 5;
			this->gobackguestpanel->Text = L"Go Back";
			this->gobackguestpanel->UseVisualStyleBackColor = false;
			this->gobackguestpanel->Click += gcnew System::EventHandler(this, &MainM::gobackguestpanel_Click);
			// 
			// showtimetable
			// 
			this->showtimetable->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->showtimetable->ForeColor = System::Drawing::SystemColors::InfoText;
			this->showtimetable->Location = System::Drawing::Point(245, 311);
			this->showtimetable->Name = L"showtimetable";
			this->showtimetable->Size = System::Drawing::Size(233, 35);
			this->showtimetable->TabIndex = 4;
			this->showtimetable->Text = L"Show Timetable";
			this->showtimetable->UseVisualStyleBackColor = false;
			this->showtimetable->Click += gcnew System::EventHandler(this, &MainM::showtimetable_Click);
			// 
			// SectionListBox
			// 
			this->SectionListBox->FormattingEnabled = true;
			this->SectionListBox->Location = System::Drawing::Point(200, 105);
			this->SectionListBox->Name = L"SectionListBox";
			this->SectionListBox->Size = System::Drawing::Size(311, 186);
			this->SectionListBox->TabIndex = 0;
			this->SectionListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::listBox1_SelectedIndexChanged);
			// 
			// adminpanel
			// 
			this->adminpanel->Controls->Add(this->gobacktomainmenu);
			this->adminpanel->Controls->Add(this->swapbtn);
			this->adminpanel->Controls->Add(this->showttbtn);
			this->adminpanel->Controls->Add(this->addremovebtn);
			this->adminpanel->Controls->Add(this->label4);
			this->adminpanel->Location = System::Drawing::Point(203, 82);
			this->adminpanel->Name = L"adminpanel";
			this->adminpanel->Size = System::Drawing::Size(799, 564);
			this->adminpanel->TabIndex = 3;
			this->adminpanel->Visible = false;
			// 
			// gobacktomainmenu
			// 
			this->gobacktomainmenu->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->gobacktomainmenu->ForeColor = System::Drawing::SystemColors::InfoText;
			this->gobacktomainmenu->Location = System::Drawing::Point(291, 382);
			this->gobacktomainmenu->Name = L"gobacktomainmenu";
			this->gobacktomainmenu->Size = System::Drawing::Size(233, 35);
			this->gobacktomainmenu->TabIndex = 11;
			this->gobacktomainmenu->Text = L"Go Back";
			this->gobacktomainmenu->UseVisualStyleBackColor = false;
			this->gobacktomainmenu->Click += gcnew System::EventHandler(this, &MainM::gobacktomainmenu_Click);
			// 
			// swapbtn
			// 
			this->swapbtn->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->swapbtn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->swapbtn->Location = System::Drawing::Point(291, 281);
			this->swapbtn->Name = L"swapbtn";
			this->swapbtn->Size = System::Drawing::Size(233, 35);
			this->swapbtn->TabIndex = 10;
			this->swapbtn->Text = L"Swap Relations";
			this->swapbtn->UseVisualStyleBackColor = false;
			this->swapbtn->Click += gcnew System::EventHandler(this, &MainM::swapbtn_Click);
			// 
			// showttbtn
			// 
			this->showttbtn->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->showttbtn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->showttbtn->Location = System::Drawing::Point(291, 232);
			this->showttbtn->Name = L"showttbtn";
			this->showttbtn->Size = System::Drawing::Size(233, 35);
			this->showttbtn->TabIndex = 9;
			this->showttbtn->Text = L"Show TimeTable";
			this->showttbtn->UseVisualStyleBackColor = false;
			this->showttbtn->Click += gcnew System::EventHandler(this, &MainM::showttbtn_Click);
			// 
			// addremovebtn
			// 
			this->addremovebtn->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->addremovebtn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->addremovebtn->Location = System::Drawing::Point(291, 187);
			this->addremovebtn->Name = L"addremovebtn";
			this->addremovebtn->Size = System::Drawing::Size(233, 35);
			this->addremovebtn->TabIndex = 8;
			this->addremovebtn->Text = L"Add / Remove";
			this->addremovebtn->UseVisualStyleBackColor = false;
			this->addremovebtn->Click += gcnew System::EventHandler(this, &MainM::addremovebtn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightSteelBlue;
			this->label4->Location = System::Drawing::Point(344, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 32);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Admin";
			// 
			// mainpanelar
			// 
			this->mainpanelar->Controls->Add(this->button1);
			this->mainpanelar->Controls->Add(this->add);
			this->mainpanelar->Controls->Add(this->label5);
			this->mainpanelar->Controls->Add(this->removebtn);
			this->mainpanelar->Location = System::Drawing::Point(178, 65);
			this->mainpanelar->Name = L"mainpanelar";
			this->mainpanelar->Size = System::Drawing::Size(859, 604);
			this->mainpanelar->TabIndex = 7;
			this->mainpanelar->Visible = false;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button1->Location = System::Drawing::Point(332, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Go Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainM::button1_Click);
			// 
			// add
			// 
			this->add->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->add->Location = System::Drawing::Point(157, 262);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(186, 33);
			this->add->TabIndex = 4;
			this->add->Text = L"Add";
			this->add->UseVisualStyleBackColor = true;
			this->add->Click += gcnew System::EventHandler(this, &MainM::adds_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(304, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(258, 45);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Add / Remove";
			// 
			// removebtn
			// 
			this->removebtn->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->removebtn->Location = System::Drawing::Point(493, 262);
			this->removebtn->Name = L"removebtn";
			this->removebtn->Size = System::Drawing::Size(186, 33);
			this->removebtn->TabIndex = 0;
			this->removebtn->Text = L"Remove";
			this->removebtn->UseVisualStyleBackColor = true;
			this->removebtn->Click += gcnew System::EventHandler(this, &MainM::removebtn_Click);
			// 
			// addpanl
			// 
			this->addpanl->Controls->Add(this->label6);
			this->addpanl->Controls->Add(this->comboBoxaddad);
			this->addpanl->Controls->Add(this->comboBox2);
			this->addpanl->Controls->Add(this->dadadaadd);
			this->addpanl->Controls->Add(this->gobacktomenu);
			this->addpanl->Controls->Add(this->var);
			this->addpanl->Controls->Add(this->addnamelabel);
			this->addpanl->Controls->Add(this->label7);
			this->addpanl->Controls->Add(this->comboBox1);
			this->addpanl->Controls->Add(this->namet);
			this->addpanl->Location = System::Drawing::Point(161, 51);
			this->addpanl->Name = L"addpanl";
			this->addpanl->Size = System::Drawing::Size(890, 633);
			this->addpanl->TabIndex = 8;
			this->addpanl->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(538, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Days";
			// 
			// comboBoxaddad
			// 
			this->comboBoxaddad->FormattingEnabled = true;
			this->comboBoxaddad->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->comboBoxaddad->Location = System::Drawing::Point(595, 259);
			this->comboBoxaddad->Name = L"comboBoxaddad";
			this->comboBoxaddad->Size = System::Drawing::Size(121, 21);
			this->comboBoxaddad->TabIndex = 11;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(386, 259);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(120, 95);
			this->comboBox2->TabIndex = 10;
			// 
			// dadadaadd
			// 
			this->dadadaadd->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->dadadaadd->Location = System::Drawing::Point(384, 445);
			this->dadadaadd->Name = L"dadadaadd";
			this->dadadaadd->Size = System::Drawing::Size(121, 41);
			this->dadadaadd->TabIndex = 9;
			this->dadadaadd->Text = L"Add";
			this->dadadaadd->UseVisualStyleBackColor = true;
			this->dadadaadd->Click += gcnew System::EventHandler(this, &MainM::dadadaadd_Click);
			// 
			// gobacktomenu
			// 
			this->gobacktomenu->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->gobacktomenu->Location = System::Drawing::Point(384, 504);
			this->gobacktomenu->Name = L"gobacktomenu";
			this->gobacktomenu->Size = System::Drawing::Size(121, 26);
			this->gobacktomenu->TabIndex = 8;
			this->gobacktomenu->Text = L"Go Back";
			this->gobacktomenu->UseVisualStyleBackColor = true;
			this->gobacktomenu->Click += gcnew System::EventHandler(this, &MainM::gobacktomenu_Click);
			// 
			// var
			// 
			this->var->AutoSize = true;
			this->var->ForeColor = System::Drawing::SystemColors::Control;
			this->var->Location = System::Drawing::Point(277, 259);
			this->var->Name = L"var";
			this->var->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->var->Size = System::Drawing::Size(27, 13);
			this->var->TabIndex = 5;
			this->var->Text = L"N/A";
			// 
			// addnamelabel
			// 
			this->addnamelabel->AutoSize = true;
			this->addnamelabel->ForeColor = System::Drawing::SystemColors::Control;
			this->addnamelabel->Location = System::Drawing::Point(274, 221);
			this->addnamelabel->Name = L"addnamelabel";
			this->addnamelabel->Size = System::Drawing::Size(35, 13);
			this->addnamelabel->TabIndex = 3;
			this->addnamelabel->Text = L"Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(225, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"What you want to add \?";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Student", L"Teacher", L"Course", L"Room", L"Section",
					L"TimeSlot"
			});
			this->comboBox1->Location = System::Drawing::Point(385, 175);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::comboBox1_SelectedIndexChanged);
			// 
			// namet
			// 
			this->namet->Location = System::Drawing::Point(385, 218);
			this->namet->Name = L"namet";
			this->namet->Size = System::Drawing::Size(268, 20);
			this->namet->TabIndex = 0;
			// 
			// removepl
			// 
			this->removepl->Controls->Add(this->comboBox4);
			this->removepl->Controls->Add(this->removeitbtn);
			this->removepl->Controls->Add(this->gobacktoadminpanel);
			this->removepl->Controls->Add(this->var2);
			this->removepl->Controls->Add(this->label10);
			this->removepl->Controls->Add(this->comboBox3);
			this->removepl->Location = System::Drawing::Point(147, 39);
			this->removepl->Name = L"removepl";
			this->removepl->Size = System::Drawing::Size(936, 645);
			this->removepl->TabIndex = 11;
			this->removepl->Visible = false;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(417, 253);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(120, 95);
			this->comboBox4->TabIndex = 10;
			// 
			// removeitbtn
			// 
			this->removeitbtn->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->removeitbtn->Location = System::Drawing::Point(415, 439);
			this->removeitbtn->Name = L"removeitbtn";
			this->removeitbtn->Size = System::Drawing::Size(121, 41);
			this->removeitbtn->TabIndex = 9;
			this->removeitbtn->Text = L"Remove";
			this->removeitbtn->UseVisualStyleBackColor = true;
			this->removeitbtn->Click += gcnew System::EventHandler(this, &MainM::removeitbtn_Click);
			// 
			// gobacktoadminpanel
			// 
			this->gobacktoadminpanel->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->gobacktoadminpanel->Location = System::Drawing::Point(415, 498);
			this->gobacktoadminpanel->Name = L"gobacktoadminpanel";
			this->gobacktoadminpanel->Size = System::Drawing::Size(121, 26);
			this->gobacktoadminpanel->TabIndex = 8;
			this->gobacktoadminpanel->Text = L"Go Back";
			this->gobacktoadminpanel->UseVisualStyleBackColor = true;
			this->gobacktoadminpanel->Click += gcnew System::EventHandler(this, &MainM::gobacktoadminpanel_Click);
			// 
			// var2
			// 
			this->var2->AutoSize = true;
			this->var2->ForeColor = System::Drawing::SystemColors::Control;
			this->var2->Location = System::Drawing::Point(308, 253);
			this->var2->Name = L"var2";
			this->var2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->var2->Size = System::Drawing::Size(27, 13);
			this->var2->TabIndex = 5;
			this->var2->Text = L"N/A";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(256, 172);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(138, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"What you want to remove \?";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Student", L"Teacher", L"Course", L"Room", L"Section" });
			this->comboBox3->Location = System::Drawing::Point(416, 169);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 1;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::comboBox3_SelectedIndexChanged);
			// 
			// mainpaneltt
			// 
			this->mainpaneltt->Controls->Add(this->deletetimetablebtn);
			this->mainpaneltt->Controls->Add(this->changetimetablebtn);
			this->mainpaneltt->Controls->Add(this->addtimetablebtn);
			this->mainpaneltt->Controls->Add(this->button12);
			this->mainpaneltt->Controls->Add(this->button5);
			this->mainpaneltt->Controls->Add(this->button4);
			this->mainpaneltt->Controls->Add(this->button3);
			this->mainpaneltt->Controls->Add(this->button2);
			this->mainpaneltt->Location = System::Drawing::Point(125, 23);
			this->mainpaneltt->Name = L"mainpaneltt";
			this->mainpaneltt->Size = System::Drawing::Size(989, 684);
			this->mainpaneltt->TabIndex = 12;
			this->mainpaneltt->Visible = false;
			this->mainpaneltt->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainM::mainpaneltt_Paint);
			// 
			// deletetimetablebtn
			// 
			this->deletetimetablebtn->BackColor = System::Drawing::SystemColors::Info;
			this->deletetimetablebtn->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->deletetimetablebtn->Location = System::Drawing::Point(638, 347);
			this->deletetimetablebtn->Name = L"deletetimetablebtn";
			this->deletetimetablebtn->Size = System::Drawing::Size(165, 32);
			this->deletetimetablebtn->TabIndex = 7;
			this->deletetimetablebtn->Text = L"Delete Timetable";
			this->deletetimetablebtn->UseVisualStyleBackColor = false;
			this->deletetimetablebtn->Click += gcnew System::EventHandler(this, &MainM::deletetimetablebtn_Click);
			// 
			// changetimetablebtn
			// 
			this->changetimetablebtn->BackColor = System::Drawing::SystemColors::Info;
			this->changetimetablebtn->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->changetimetablebtn->Location = System::Drawing::Point(444, 348);
			this->changetimetablebtn->Name = L"changetimetablebtn";
			this->changetimetablebtn->Size = System::Drawing::Size(165, 32);
			this->changetimetablebtn->TabIndex = 6;
			this->changetimetablebtn->Text = L"Change Timetable";
			this->changetimetablebtn->UseVisualStyleBackColor = false;
			this->changetimetablebtn->Click += gcnew System::EventHandler(this, &MainM::changetimetablebtn_Click);
			// 
			// addtimetablebtn
			// 
			this->addtimetablebtn->BackColor = System::Drawing::SystemColors::Info;
			this->addtimetablebtn->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->addtimetablebtn->Location = System::Drawing::Point(251, 348);
			this->addtimetablebtn->Name = L"addtimetablebtn";
			this->addtimetablebtn->Size = System::Drawing::Size(165, 32);
			this->addtimetablebtn->TabIndex = 5;
			this->addtimetablebtn->Text = L"Add Timetable";
			this->addtimetablebtn->UseVisualStyleBackColor = false;
			this->addtimetablebtn->Click += gcnew System::EventHandler(this, &MainM::addtimetablebtn_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Info;
			this->button12->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button12->Location = System::Drawing::Point(444, 451);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(165, 32);
			this->button12->TabIndex = 4;
			this->button12->Text = L"Go Back";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainM::button12_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Info;
			this->button5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button5->Location = System::Drawing::Point(608, 211);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(165, 32);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Show By Section / Student";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainM::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button4->Location = System::Drawing::Point(271, 206);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(165, 32);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Show By Teacher";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainM::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Info;
			this->button3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button3->Location = System::Drawing::Point(608, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 32);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Show By Course";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainM::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Info;
			this->button2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button2->Location = System::Drawing::Point(271, 154);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 32);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Show By Room";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainM::button2_Click);
			// 
			// roompanel
			// 
			this->roompanel->Controls->Add(this->label8);
			this->roompanel->Controls->Add(this->button6);
			this->roompanel->Controls->Add(this->button7);
			this->roompanel->Controls->Add(this->listBox1);
			this->roompanel->Location = System::Drawing::Point(100, 12);
			this->roompanel->Name = L"roompanel";
			this->roompanel->Size = System::Drawing::Size(1034, 711);
			this->roompanel->TabIndex = 13;
			this->roompanel->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Info;
			this->label8->Location = System::Drawing::Point(442, 170);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 32);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Rooms";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button6->Location = System::Drawing::Point(401, 474);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(233, 35);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Go Back";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainM::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button7->Location = System::Drawing::Point(401, 421);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(233, 35);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Show Timetable";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainM::button7_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(356, 215);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(311, 186);
			this->listBox1->TabIndex = 0;
			// 
			// coursepanel
			// 
			this->coursepanel->Controls->Add(this->label9);
			this->coursepanel->Controls->Add(this->button8);
			this->coursepanel->Controls->Add(this->button9);
			this->coursepanel->Controls->Add(this->listBox2);
			this->coursepanel->Location = System::Drawing::Point(80, 9);
			this->coursepanel->Name = L"coursepanel";
			this->coursepanel->Size = System::Drawing::Size(1066, 714);
			this->coursepanel->TabIndex = 14;
			this->coursepanel->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Info;
			this->label9->Location = System::Drawing::Point(442, 170);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(135, 32);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Courses";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button8->Location = System::Drawing::Point(401, 474);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(233, 35);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Go Back";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainM::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button9->Location = System::Drawing::Point(401, 421);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(233, 35);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Show Timetable";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainM::button9_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(356, 215);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(311, 186);
			this->listBox2->TabIndex = 0;
			// 
			// teacherpanel
			// 
			this->teacherpanel->Controls->Add(this->label11);
			this->teacherpanel->Controls->Add(this->button10);
			this->teacherpanel->Controls->Add(this->button11);
			this->teacherpanel->Controls->Add(this->listBox3);
			this->teacherpanel->Location = System::Drawing::Point(68, 6);
			this->teacherpanel->Name = L"teacherpanel";
			this->teacherpanel->Size = System::Drawing::Size(1094, 728);
			this->teacherpanel->TabIndex = 15;
			this->teacherpanel->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Info;
			this->label11->Location = System::Drawing::Point(455, 167);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(150, 32);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Teachers";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button10->Location = System::Drawing::Point(414, 471);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(233, 35);
			this->button10->TabIndex = 5;
			this->button10->Text = L"Go Back";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainM::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button11->Location = System::Drawing::Point(414, 418);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(233, 35);
			this->button11->TabIndex = 4;
			this->button11->Text = L"Show Timetable";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainM::button11_Click);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(369, 212);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(311, 186);
			this->listBox3->TabIndex = 0;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::listBox3_SelectedIndexChanged);
			// 
			// relationpanel
			// 
			this->relationpanel->Controls->Add(this->label12);
			this->relationpanel->Controls->Add(this->listBoxr2);
			this->relationpanel->Controls->Add(this->labelr2);
			this->relationpanel->Controls->Add(this->listBoxr1);
			this->relationpanel->Controls->Add(this->buttonchangerelation);
			this->relationpanel->Controls->Add(this->gobacktoadminpn);
			this->relationpanel->Controls->Add(this->labelr1);
			this->relationpanel->Controls->Add(this->label13);
			this->relationpanel->Controls->Add(this->comboBoxrelations);
			this->relationpanel->Location = System::Drawing::Point(51, 1);
			this->relationpanel->Name = L"relationpanel";
			this->relationpanel->Size = System::Drawing::Size(1130, 758);
			this->relationpanel->TabIndex = 16;
			this->relationpanel->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::Info;
			this->label12->Location = System::Drawing::Point(480, 258);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 13);
			this->label12->TabIndex = 13;
			this->label12->Text = L"assign to";
			// 
			// listBoxr2
			// 
			this->listBoxr2->FormattingEnabled = true;
			this->listBoxr2->Location = System::Drawing::Point(683, 258);
			this->listBoxr2->Name = L"listBoxr2";
			this->listBoxr2->Size = System::Drawing::Size(120, 95);
			this->listBoxr2->TabIndex = 12;
			// 
			// labelr2
			// 
			this->labelr2->AutoSize = true;
			this->labelr2->ForeColor = System::Drawing::SystemColors::Control;
			this->labelr2->Location = System::Drawing::Point(574, 258);
			this->labelr2->Name = L"labelr2";
			this->labelr2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->labelr2->Size = System::Drawing::Size(27, 13);
			this->labelr2->TabIndex = 11;
			this->labelr2->Text = L"N/A";
			// 
			// listBoxr1
			// 
			this->listBoxr1->FormattingEnabled = true;
			this->listBoxr1->Location = System::Drawing::Point(340, 258);
			this->listBoxr1->Name = L"listBoxr1";
			this->listBoxr1->Size = System::Drawing::Size(120, 95);
			this->listBoxr1->TabIndex = 10;
			// 
			// buttonchangerelation
			// 
			this->buttonchangerelation->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->buttonchangerelation->Location = System::Drawing::Point(502, 475);
			this->buttonchangerelation->Name = L"buttonchangerelation";
			this->buttonchangerelation->Size = System::Drawing::Size(121, 41);
			this->buttonchangerelation->TabIndex = 9;
			this->buttonchangerelation->Text = L"Change Relation";
			this->buttonchangerelation->UseVisualStyleBackColor = true;
			this->buttonchangerelation->Click += gcnew System::EventHandler(this, &MainM::buttonchangerelation_Click);
			// 
			// gobacktoadminpn
			// 
			this->gobacktoadminpn->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->gobacktoadminpn->Location = System::Drawing::Point(502, 548);
			this->gobacktoadminpn->Name = L"gobacktoadminpn";
			this->gobacktoadminpn->Size = System::Drawing::Size(121, 26);
			this->gobacktoadminpn->TabIndex = 8;
			this->gobacktoadminpn->Text = L"Go Back";
			this->gobacktoadminpn->UseVisualStyleBackColor = true;
			this->gobacktoadminpn->Click += gcnew System::EventHandler(this, &MainM::gobacktoadminpn_Click);
			// 
			// labelr1
			// 
			this->labelr1->AutoSize = true;
			this->labelr1->ForeColor = System::Drawing::SystemColors::Control;
			this->labelr1->Location = System::Drawing::Point(231, 258);
			this->labelr1->Name = L"labelr1";
			this->labelr1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->labelr1->Size = System::Drawing::Size(27, 13);
			this->labelr1->TabIndex = 5;
			this->labelr1->Text = L"N/A";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::Control;
			this->label13->Location = System::Drawing::Point(372, 159);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(182, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"What Relation you want to Change \?";
			this->label13->Click += gcnew System::EventHandler(this, &MainM::label13_Click);
			// 
			// comboBoxrelations
			// 
			this->comboBoxrelations->FormattingEnabled = true;
			this->comboBoxrelations->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Teacher and Course", L"Student and Section",
					L"Course and Section", L"Course and Room"
			});
			this->comboBoxrelations->Location = System::Drawing::Point(574, 154);
			this->comboBoxrelations->Name = L"comboBoxrelations";
			this->comboBoxrelations->Size = System::Drawing::Size(121, 21);
			this->comboBoxrelations->TabIndex = 1;
			this->comboBoxrelations->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::comboBoxrelations_SelectedIndexChanged);
			// 
			// addtimetablepanel
			// 
			this->addtimetablepanel->Controls->Add(this->gbttabtn);
			this->addtimetablepanel->Controls->Add(this->label19);
			this->addtimetablepanel->Controls->Add(this->daytimetableadd);
			this->addtimetablepanel->Controls->Add(this->addtimetableworkbtn);
			this->addtimetablepanel->Controls->Add(this->label18);
			this->addtimetablepanel->Controls->Add(this->timeslotcomboBoxadd);
			this->addtimetablepanel->Controls->Add(this->label17);
			this->addtimetablepanel->Controls->Add(this->sectioncomboBoxadd);
			this->addtimetablepanel->Controls->Add(this->label16);
			this->addtimetablepanel->Controls->Add(this->roomcomboBoxadd);
			this->addtimetablepanel->Controls->Add(this->label15);
			this->addtimetablepanel->Controls->Add(this->coursecomboBoxadd);
			this->addtimetablepanel->Controls->Add(this->label14);
			this->addtimetablepanel->Location = System::Drawing::Point(0, 0);
			this->addtimetablepanel->Name = L"addtimetablepanel";
			this->addtimetablepanel->Size = System::Drawing::Size(1145, 766);
			this->addtimetablepanel->TabIndex = 17;
			this->addtimetablepanel->Visible = false;
			// 
			// gbttabtn
			// 
			this->gbttabtn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->gbttabtn->Location = System::Drawing::Point(496, 519);
			this->gbttabtn->Name = L"gbttabtn";
			this->gbttabtn->Size = System::Drawing::Size(103, 25);
			this->gbttabtn->TabIndex = 12;
			this->gbttabtn->Text = L"Go Back";
			this->gbttabtn->UseVisualStyleBackColor = true;
			this->gbttabtn->Click += gcnew System::EventHandler(this, &MainM::gbttabtn_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label19->Location = System::Drawing::Point(429, 406);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(26, 13);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Day";
			// 
			// daytimetableadd
			// 
			this->daytimetableadd->FormattingEnabled = true;
			this->daytimetableadd->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->daytimetableadd->Location = System::Drawing::Point(513, 403);
			this->daytimetableadd->Name = L"daytimetableadd";
			this->daytimetableadd->Size = System::Drawing::Size(121, 21);
			this->daytimetableadd->TabIndex = 10;
			// 
			// addtimetableworkbtn
			// 
			this->addtimetableworkbtn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->addtimetableworkbtn->Location = System::Drawing::Point(496, 477);
			this->addtimetableworkbtn->Name = L"addtimetableworkbtn";
			this->addtimetableworkbtn->Size = System::Drawing::Size(103, 25);
			this->addtimetableworkbtn->TabIndex = 9;
			this->addtimetableworkbtn->Text = L"Add Entry";
			this->addtimetableworkbtn->UseVisualStyleBackColor = true;
			this->addtimetableworkbtn->Click += gcnew System::EventHandler(this, &MainM::addtimetableworkbtn_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label18->Location = System::Drawing::Point(429, 354);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(48, 13);
			this->label18->TabIndex = 8;
			this->label18->Text = L"TimeSlot";
			// 
			// timeslotcomboBoxadd
			// 
			this->timeslotcomboBoxadd->FormattingEnabled = true;
			this->timeslotcomboBoxadd->Location = System::Drawing::Point(513, 351);
			this->timeslotcomboBoxadd->Name = L"timeslotcomboBoxadd";
			this->timeslotcomboBoxadd->Size = System::Drawing::Size(121, 21);
			this->timeslotcomboBoxadd->TabIndex = 7;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label17->Location = System::Drawing::Point(431, 299);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(43, 13);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Section";
			// 
			// sectioncomboBoxadd
			// 
			this->sectioncomboBoxadd->FormattingEnabled = true;
			this->sectioncomboBoxadd->Location = System::Drawing::Point(515, 296);
			this->sectioncomboBoxadd->Name = L"sectioncomboBoxadd";
			this->sectioncomboBoxadd->Size = System::Drawing::Size(121, 21);
			this->sectioncomboBoxadd->TabIndex = 5;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label16->Location = System::Drawing::Point(430, 241);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(35, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Room";
			// 
			// roomcomboBoxadd
			// 
			this->roomcomboBoxadd->FormattingEnabled = true;
			this->roomcomboBoxadd->Location = System::Drawing::Point(514, 238);
			this->roomcomboBoxadd->Name = L"roomcomboBoxadd";
			this->roomcomboBoxadd->Size = System::Drawing::Size(121, 21);
			this->roomcomboBoxadd->TabIndex = 3;
			this->roomcomboBoxadd->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::roomcomboBoxadd_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label15->Location = System::Drawing::Point(431, 187);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Course";
			// 
			// coursecomboBoxadd
			// 
			this->coursecomboBoxadd->FormattingEnabled = true;
			this->coursecomboBoxadd->Location = System::Drawing::Point(515, 184);
			this->coursecomboBoxadd->Name = L"coursecomboBoxadd";
			this->coursecomboBoxadd->Size = System::Drawing::Size(121, 21);
			this->coursecomboBoxadd->TabIndex = 1;
			this->coursecomboBoxadd->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::coursecomboBoxadd_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::Info;
			this->label14->Location = System::Drawing::Point(471, 112);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(146, 24);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Timetable Add";
			// 
			// deletetimetablepanel
			// 
			this->deletetimetablepanel->Controls->Add(this->gbttrbtn);
			this->deletetimetablepanel->Controls->Add(this->label20);
			this->deletetimetablepanel->Controls->Add(this->daytimetableremove);
			this->deletetimetablepanel->Controls->Add(this->removetimetableworkbtn);
			this->deletetimetablepanel->Controls->Add(this->label21);
			this->deletetimetablepanel->Controls->Add(this->timeslotcomboBoxremove);
			this->deletetimetablepanel->Controls->Add(this->label22);
			this->deletetimetablepanel->Controls->Add(this->sectioncomboBoxremove);
			this->deletetimetablepanel->Controls->Add(this->label23);
			this->deletetimetablepanel->Controls->Add(this->roomcomboBoxremove);
			this->deletetimetablepanel->Controls->Add(this->label24);
			this->deletetimetablepanel->Controls->Add(this->coursecomboBoxremove);
			this->deletetimetablepanel->Controls->Add(this->label25);
			this->deletetimetablepanel->Location = System::Drawing::Point(0, 0);
			this->deletetimetablepanel->Name = L"deletetimetablepanel";
			this->deletetimetablepanel->Size = System::Drawing::Size(1145, 766);
			this->deletetimetablepanel->TabIndex = 18;
			this->deletetimetablepanel->Visible = false;
			// 
			// gbttrbtn
			// 
			this->gbttrbtn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->gbttrbtn->Location = System::Drawing::Point(496, 518);
			this->gbttrbtn->Name = L"gbttrbtn";
			this->gbttrbtn->Size = System::Drawing::Size(103, 25);
			this->gbttrbtn->TabIndex = 12;
			this->gbttrbtn->Text = L"Go Back";
			this->gbttrbtn->UseVisualStyleBackColor = true;
			this->gbttrbtn->Click += gcnew System::EventHandler(this, &MainM::gbttrbtn_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label20->Location = System::Drawing::Point(429, 406);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(26, 13);
			this->label20->TabIndex = 11;
			this->label20->Text = L"Day";
			// 
			// daytimetableremove
			// 
			this->daytimetableremove->FormattingEnabled = true;
			this->daytimetableremove->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->daytimetableremove->Location = System::Drawing::Point(513, 403);
			this->daytimetableremove->Name = L"daytimetableremove";
			this->daytimetableremove->Size = System::Drawing::Size(121, 21);
			this->daytimetableremove->TabIndex = 10;
			// 
			// removetimetableworkbtn
			// 
			this->removetimetableworkbtn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->removetimetableworkbtn->Location = System::Drawing::Point(496, 477);
			this->removetimetableworkbtn->Name = L"removetimetableworkbtn";
			this->removetimetableworkbtn->Size = System::Drawing::Size(103, 25);
			this->removetimetableworkbtn->TabIndex = 9;
			this->removetimetableworkbtn->Text = L"Remove Entry";
			this->removetimetableworkbtn->UseVisualStyleBackColor = true;
			this->removetimetableworkbtn->Click += gcnew System::EventHandler(this, &MainM::removetimetableworkbtn_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label21->Location = System::Drawing::Point(429, 354);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(48, 13);
			this->label21->TabIndex = 8;
			this->label21->Text = L"TimeSlot";
			// 
			// timeslotcomboBoxremove
			// 
			this->timeslotcomboBoxremove->FormattingEnabled = true;
			this->timeslotcomboBoxremove->Location = System::Drawing::Point(513, 351);
			this->timeslotcomboBoxremove->Name = L"timeslotcomboBoxremove";
			this->timeslotcomboBoxremove->Size = System::Drawing::Size(121, 21);
			this->timeslotcomboBoxremove->TabIndex = 7;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label22->Location = System::Drawing::Point(431, 299);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(43, 13);
			this->label22->TabIndex = 6;
			this->label22->Text = L"Section";
			// 
			// sectioncomboBoxremove
			// 
			this->sectioncomboBoxremove->FormattingEnabled = true;
			this->sectioncomboBoxremove->Location = System::Drawing::Point(515, 296);
			this->sectioncomboBoxremove->Name = L"sectioncomboBoxremove";
			this->sectioncomboBoxremove->Size = System::Drawing::Size(121, 21);
			this->sectioncomboBoxremove->TabIndex = 5;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label23->Location = System::Drawing::Point(430, 241);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(35, 13);
			this->label23->TabIndex = 4;
			this->label23->Text = L"Room";
			// 
			// roomcomboBoxremove
			// 
			this->roomcomboBoxremove->FormattingEnabled = true;
			this->roomcomboBoxremove->Location = System::Drawing::Point(514, 238);
			this->roomcomboBoxremove->Name = L"roomcomboBoxremove";
			this->roomcomboBoxremove->Size = System::Drawing::Size(121, 21);
			this->roomcomboBoxremove->TabIndex = 3;
			this->roomcomboBoxremove->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::roomcomboBoxremove_SelectedIndexChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label24->Location = System::Drawing::Point(431, 187);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(40, 13);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Course";
			// 
			// coursecomboBoxremove
			// 
			this->coursecomboBoxremove->FormattingEnabled = true;
			this->coursecomboBoxremove->Location = System::Drawing::Point(515, 184);
			this->coursecomboBoxremove->Name = L"coursecomboBoxremove";
			this->coursecomboBoxremove->Size = System::Drawing::Size(121, 21);
			this->coursecomboBoxremove->TabIndex = 1;
			this->coursecomboBoxremove->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::coursecomboBoxremove_SelectedIndexChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::Info;
			this->label25->Location = System::Drawing::Point(471, 112);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(185, 24);
			this->label25->TabIndex = 0;
			this->label25->Text = L"Timetable Remove";
			// 
			// changetimetablepanel
			// 
			this->changetimetablepanel->Controls->Add(this->gbttchbtn);
			this->changetimetablepanel->Controls->Add(this->label41);
			this->changetimetablepanel->Controls->Add(this->label40);
			this->changetimetablepanel->Controls->Add(this->label39);
			this->changetimetablepanel->Controls->Add(this->label38);
			this->changetimetablepanel->Controls->Add(this->label37);
			this->changetimetablepanel->Controls->Add(this->label32);
			this->changetimetablepanel->Controls->Add(this->daytimetablech2);
			this->changetimetablepanel->Controls->Add(this->label33);
			this->changetimetablepanel->Controls->Add(this->timeslotcomboBoxch2);
			this->changetimetablepanel->Controls->Add(this->label34);
			this->changetimetablepanel->Controls->Add(this->sectioncomboBoxch2);
			this->changetimetablepanel->Controls->Add(this->label35);
			this->changetimetablepanel->Controls->Add(this->roomcomboBoxch2);
			this->changetimetablepanel->Controls->Add(this->label36);
			this->changetimetablepanel->Controls->Add(this->coursecomboBoxch2);
			this->changetimetablepanel->Controls->Add(this->label26);
			this->changetimetablepanel->Controls->Add(this->daytimetablech1);
			this->changetimetablepanel->Controls->Add(this->changetimetableworkbtn);
			this->changetimetablepanel->Controls->Add(this->label27);
			this->changetimetablepanel->Controls->Add(this->timeslotcomboBoxch1);
			this->changetimetablepanel->Controls->Add(this->label28);
			this->changetimetablepanel->Controls->Add(this->sectioncomboBoxch1);
			this->changetimetablepanel->Controls->Add(this->label29);
			this->changetimetablepanel->Controls->Add(this->roomcomboBoxch1);
			this->changetimetablepanel->Controls->Add(this->label30);
			this->changetimetablepanel->Controls->Add(this->coursecomboBoxch1);
			this->changetimetablepanel->Controls->Add(this->label31);
			this->changetimetablepanel->Location = System::Drawing::Point(0, 0);
			this->changetimetablepanel->Name = L"changetimetablepanel";
			this->changetimetablepanel->Size = System::Drawing::Size(1145, 766);
			this->changetimetablepanel->TabIndex = 19;
			this->changetimetablepanel->Visible = false;
			// 
			// gbttchbtn
			// 
			this->gbttchbtn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->gbttchbtn->Location = System::Drawing::Point(498, 517);
			this->gbttchbtn->Name = L"gbttchbtn";
			this->gbttchbtn->Size = System::Drawing::Size(142, 27);
			this->gbttchbtn->TabIndex = 27;
			this->gbttchbtn->Text = L"Go Back";
			this->gbttchbtn->UseVisualStyleBackColor = true;
			this->gbttchbtn->Click += gcnew System::EventHandler(this, &MainM::gbttchbtn_Click);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->ForeColor = System::Drawing::SystemColors::Info;
			this->label41->Location = System::Drawing::Point(549, 409);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(22, 13);
			this->label41->TabIndex = 26;
			this->label41->Text = L"TO";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->ForeColor = System::Drawing::SystemColors::Info;
			this->label40->Location = System::Drawing::Point(549, 362);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(22, 13);
			this->label40->TabIndex = 25;
			this->label40->Text = L"TO";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->ForeColor = System::Drawing::SystemColors::Info;
			this->label39->Location = System::Drawing::Point(549, 307);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(22, 13);
			this->label39->TabIndex = 24;
			this->label39->Text = L"TO";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->ForeColor = System::Drawing::SystemColors::Info;
			this->label38->Location = System::Drawing::Point(549, 246);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(22, 13);
			this->label38->TabIndex = 23;
			this->label38->Text = L"TO";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->ForeColor = System::Drawing::SystemColors::Info;
			this->label37->Location = System::Drawing::Point(550, 190);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(22, 13);
			this->label37->TabIndex = 22;
			this->label37->Text = L"TO";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label32->Location = System::Drawing::Point(593, 409);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(26, 13);
			this->label32->TabIndex = 21;
			this->label32->Text = L"Day";
			// 
			// daytimetablech2
			// 
			this->daytimetablech2->FormattingEnabled = true;
			this->daytimetablech2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->daytimetablech2->Location = System::Drawing::Point(677, 406);
			this->daytimetablech2->Name = L"daytimetablech2";
			this->daytimetablech2->Size = System::Drawing::Size(121, 21);
			this->daytimetablech2->TabIndex = 20;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label33->Location = System::Drawing::Point(593, 357);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(48, 13);
			this->label33->TabIndex = 19;
			this->label33->Text = L"TimeSlot";
			// 
			// timeslotcomboBoxch2
			// 
			this->timeslotcomboBoxch2->FormattingEnabled = true;
			this->timeslotcomboBoxch2->Location = System::Drawing::Point(677, 354);
			this->timeslotcomboBoxch2->Name = L"timeslotcomboBoxch2";
			this->timeslotcomboBoxch2->Size = System::Drawing::Size(121, 21);
			this->timeslotcomboBoxch2->TabIndex = 18;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label34->Location = System::Drawing::Point(595, 302);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(43, 13);
			this->label34->TabIndex = 17;
			this->label34->Text = L"Section";
			// 
			// sectioncomboBoxch2
			// 
			this->sectioncomboBoxch2->FormattingEnabled = true;
			this->sectioncomboBoxch2->Location = System::Drawing::Point(679, 299);
			this->sectioncomboBoxch2->Name = L"sectioncomboBoxch2";
			this->sectioncomboBoxch2->Size = System::Drawing::Size(121, 21);
			this->sectioncomboBoxch2->TabIndex = 16;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label35->Location = System::Drawing::Point(594, 244);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(35, 13);
			this->label35->TabIndex = 15;
			this->label35->Text = L"Room";
			// 
			// roomcomboBoxch2
			// 
			this->roomcomboBoxch2->FormattingEnabled = true;
			this->roomcomboBoxch2->Location = System::Drawing::Point(678, 241);
			this->roomcomboBoxch2->Name = L"roomcomboBoxch2";
			this->roomcomboBoxch2->Size = System::Drawing::Size(121, 21);
			this->roomcomboBoxch2->TabIndex = 14;
			this->roomcomboBoxch2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::roomcomboBoxch2_SelectedIndexChanged);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label36->Location = System::Drawing::Point(595, 190);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(40, 13);
			this->label36->TabIndex = 13;
			this->label36->Text = L"Course";
			// 
			// coursecomboBoxch2
			// 
			this->coursecomboBoxch2->FormattingEnabled = true;
			this->coursecomboBoxch2->Location = System::Drawing::Point(679, 187);
			this->coursecomboBoxch2->Name = L"coursecomboBoxch2";
			this->coursecomboBoxch2->Size = System::Drawing::Size(121, 21);
			this->coursecomboBoxch2->TabIndex = 12;
			this->coursecomboBoxch2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::coursecomboBoxch2_SelectedIndexChanged);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label26->Location = System::Drawing::Point(322, 406);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(26, 13);
			this->label26->TabIndex = 11;
			this->label26->Text = L"Day";
			// 
			// daytimetablech1
			// 
			this->daytimetablech1->FormattingEnabled = true;
			this->daytimetablech1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->daytimetablech1->Location = System::Drawing::Point(406, 403);
			this->daytimetablech1->Name = L"daytimetablech1";
			this->daytimetablech1->Size = System::Drawing::Size(121, 21);
			this->daytimetablech1->TabIndex = 10;
			// 
			// changetimetableworkbtn
			// 
			this->changetimetableworkbtn->ForeColor = System::Drawing::SystemColors::InfoText;
			this->changetimetableworkbtn->Location = System::Drawing::Point(499, 480);
			this->changetimetableworkbtn->Name = L"changetimetableworkbtn";
			this->changetimetableworkbtn->Size = System::Drawing::Size(142, 27);
			this->changetimetableworkbtn->TabIndex = 9;
			this->changetimetableworkbtn->Text = L"Change Entry";
			this->changetimetableworkbtn->UseVisualStyleBackColor = true;
			this->changetimetableworkbtn->Click += gcnew System::EventHandler(this, &MainM::changetimetableworkbtn_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label27->Location = System::Drawing::Point(322, 354);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(48, 13);
			this->label27->TabIndex = 8;
			this->label27->Text = L"TimeSlot";
			// 
			// timeslotcomboBoxch1
			// 
			this->timeslotcomboBoxch1->FormattingEnabled = true;
			this->timeslotcomboBoxch1->Location = System::Drawing::Point(406, 351);
			this->timeslotcomboBoxch1->Name = L"timeslotcomboBoxch1";
			this->timeslotcomboBoxch1->Size = System::Drawing::Size(121, 21);
			this->timeslotcomboBoxch1->TabIndex = 7;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label28->Location = System::Drawing::Point(324, 299);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(43, 13);
			this->label28->TabIndex = 6;
			this->label28->Text = L"Section";
			// 
			// sectioncomboBoxch1
			// 
			this->sectioncomboBoxch1->FormattingEnabled = true;
			this->sectioncomboBoxch1->Location = System::Drawing::Point(408, 296);
			this->sectioncomboBoxch1->Name = L"sectioncomboBoxch1";
			this->sectioncomboBoxch1->Size = System::Drawing::Size(121, 21);
			this->sectioncomboBoxch1->TabIndex = 5;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label29->Location = System::Drawing::Point(323, 241);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(35, 13);
			this->label29->TabIndex = 4;
			this->label29->Text = L"Room";
			// 
			// roomcomboBoxch1
			// 
			this->roomcomboBoxch1->FormattingEnabled = true;
			this->roomcomboBoxch1->Location = System::Drawing::Point(407, 238);
			this->roomcomboBoxch1->Name = L"roomcomboBoxch1";
			this->roomcomboBoxch1->Size = System::Drawing::Size(121, 21);
			this->roomcomboBoxch1->TabIndex = 3;
			this->roomcomboBoxch1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::roomcomboBoxch1_SelectedIndexChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label30->Location = System::Drawing::Point(324, 187);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(40, 13);
			this->label30->TabIndex = 2;
			this->label30->Text = L"Course";
			// 
			// coursecomboBoxch1
			// 
			this->coursecomboBoxch1->FormattingEnabled = true;
			this->coursecomboBoxch1->Location = System::Drawing::Point(408, 184);
			this->coursecomboBoxch1->Name = L"coursecomboBoxch1";
			this->coursecomboBoxch1->Size = System::Drawing::Size(121, 21);
			this->coursecomboBoxch1->TabIndex = 1;
			this->coursecomboBoxch1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainM::coursecomboBoxch1_SelectedIndexChanged);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::Info;
			this->label31->Location = System::Drawing::Point(471, 112);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(181, 24);
			this->label31->TabIndex = 0;
			this->label31->Text = L"Timetable Change";
			// 
			// MainM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(1193, 771);
			this->Controls->Add(this->addtimetablepanel);
			this->Controls->Add(this->deletetimetablepanel);
			this->Controls->Add(this->changetimetablepanel);
			this->Controls->Add(this->addpanl);
			this->Controls->Add(this->mainpaneltt);
			this->Controls->Add(this->adminpanel);
			this->Controls->Add(this->mainpanelar);
			this->Controls->Add(this->relationpanel);
			this->Controls->Add(this->teacherpanel);
			this->Controls->Add(this->coursepanel);
			this->Controls->Add(this->roompanel);
			this->Controls->Add(this->panelmain);
			this->Controls->Add(this->removepl);
			this->Controls->Add(this->sectionpanel);
			this->Controls->Add(this->guestpanel);
			this->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Name = L"MainM";
			this->Text = L"Timetable Manager";
			this->TransparencyKey = System::Drawing::Color::Blue;
			this->Load += gcnew System::EventHandler(this, &MainM::MainM_Load);
			this->panelmain->ResumeLayout(false);
			this->panelmain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->guestpanel->ResumeLayout(false);
			this->guestpanel->PerformLayout();
			this->sectionpanel->ResumeLayout(false);
			this->sectionpanel->PerformLayout();
			this->adminpanel->ResumeLayout(false);
			this->adminpanel->PerformLayout();
			this->mainpanelar->ResumeLayout(false);
			this->mainpanelar->PerformLayout();
			this->addpanl->ResumeLayout(false);
			this->addpanl->PerformLayout();
			this->removepl->ResumeLayout(false);
			this->removepl->PerformLayout();
			this->mainpaneltt->ResumeLayout(false);
			this->roompanel->ResumeLayout(false);
			this->roompanel->PerformLayout();
			this->coursepanel->ResumeLayout(false);
			this->coursepanel->PerformLayout();
			this->teacherpanel->ResumeLayout(false);
			this->teacherpanel->PerformLayout();
			this->relationpanel->ResumeLayout(false);
			this->relationpanel->PerformLayout();
			this->addtimetablepanel->ResumeLayout(false);
			this->addtimetablepanel->PerformLayout();
			this->deletetimetablepanel->ResumeLayout(false);
			this->deletetimetablepanel->PerformLayout();
			this->changetimetablepanel->ResumeLayout(false);
			this->changetimetablepanel->PerformLayout();
			this->ResumeLayout(false);

		}
#endif
	private: System::Void MainM_Load(System::Object^ sender, System::EventArgs^ e) {
		connecttodatabase();
	}
	private: System::Void buttonguest_Click(System::Object^ sender, System::EventArgs^ e) {
		guestpanel->Visible = true;
		panelmain->Visible = false;

	}
	private: System::Void buttonadmin_Click(System::Object^ sender, System::EventArgs^ e) {
		adminpanel->Visible = true;
		panelmain->Visible = false;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) { //fazool
	}
	private: System::Void backbtnmainmenu_Click(System::Object^ sender, System::EventArgs^ e) {
			guestpanel->Visible = false;
			panelmain->Visible = true;
	}
	private: System::Void sectiontimetablebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		sectionpanel->Visible = true;
		guestpanel->Visible = false;

		SectionListBox->Items->Clear();

		for each (Section ^ sec in tt->sections) {
			SectionListBox->Items->Add(sec->getName());

		}

	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sectionpanel_Load(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void gobackguestpanel_Click(System::Object^ sender, System::EventArgs^ e) {
		sectionpanel->Visible = false;
		guestpanel->Visible = true;
	}

	private: System::Void showtimetable_Click(System::Object^ sender, System::EventArgs^ e) {
		if (SectionListBox->SelectedItem != nullptr) {
			String^ sectionname = SectionListBox->SelectedItem->ToString();
			Section^ section = nullptr;

			for each (Section ^ sec in tt->sections) {
				if (sec->getName() == sectionname) {
					section = sec;
					break;
				}
			}
			if (section == nullptr) {
				MessageBox::Show("Details not Found. Operation Not Done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;

			}


			List<Timetable^>^ time_table = tt->timetableBySection(section);
	
			OOPAssignment::ShowWin^ showin = gcnew OOPAssignment::ShowWin();
	
			showin->showbox->DataSource = time_table;

			showin->Show();

		}
		else {
			std::cerr << "Select Something!" << std::endl;
			MessageBox::Show("Select Something!!!!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	   void run() {}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to exit?", "TimeTable Manager", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	private: System::Void gobacktomainmenu_Click(System::Object^ sender, System::EventArgs^ e) {
		adminpanel->Visible = false;
		panelmain->Visible = true;
	}
	private: System::Void addremovebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		mainpanelar->Visible = true;
		adminpanel->Visible = false;
	}
	private: System::Void showttbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		mainpaneltt->Visible = true;
		adminpanel->Visible = false;
	}
	private: System::Void swapbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		relationpanel->Visible = true;
		adminpanel->Visible = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		mainpanelar->Visible = false;
		adminpanel->Visible = true;
	}
	private: System::Void adds_Click(System::Object^ sender, System::EventArgs^ e) {
		mainpanelar->Visible = false;
		addpanl->Visible = true;

		addnamelabel->Text = "Name";
		label6->Visible = false;
		comboBoxaddad->Visible = false;

	}
	private: System::Void removebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		mainpanelar->Visible = false;
		removepl->Visible = true;
	}
	private: System::Void gobacktomenu_Click(System::Object^ sender, System::EventArgs^ e) {
		mainpanelar->Visible = true;
		addpanl->Visible = false;
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		var->Visible = true;
		comboBox2->Visible = true;
		if (comboBox1->Text == "Section") {

			comboBox2->Items->Clear();

			for each (Course ^ c in tt->courses) {
				comboBox2->Items->Add(c->getName());
			}

			comboBox2->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;

			var->Text = "Course (Multi-Select)";

			addnamelabel->Text = "Name";
			label6->Visible = false;
			comboBoxaddad->Visible = false;

		}
		else if (comboBox1->Text == "Teacher") {

			comboBox2->Items->Clear();

			for each (Course ^ c in tt->courses) {
				comboBox2->Items->Add(c->getName());

			}

			var->Text = "Course";
			comboBox2->SelectionMode = System::Windows::Forms::SelectionMode::One;

			addnamelabel->Text = "Name";
			label6->Visible = false;
			comboBoxaddad->Visible = false;


		}
		else if (comboBox1->Text == "Course") {

			comboBox2->Items->Clear();


			var->Visible = false;
			comboBox2->Visible = false;

			addnamelabel->Text = "Name";
			label6->Visible = false;
			comboBoxaddad->Visible = false;

		}
		else if (comboBox1->Text == "Room") {

			comboBox2->Items->Clear();


			var->Visible = false;
			comboBox2->Visible = false;

			addnamelabel->Text = "Name";
			label6->Visible = false;
			comboBoxaddad->Visible = false;


		}
		else if (comboBox1->Text == "Student") {
			

			comboBox2->Items->Clear();

			for each (Section^ s in tt->sections) {
				comboBox2->Items->Add(s->getName());
			}

			var->Text = "Section";

			comboBox2->SelectionMode = System::Windows::Forms::SelectionMode::One;

			addnamelabel->Text = "Name";
			label6->Visible = false;
			comboBoxaddad->Visible = false;


		}
		else if (comboBox1->Text == "TimeSlot") {

			comboBox2->Items->Clear();

			for each (Room ^ r in tt->rooms) {
				comboBox2->Items->Add(r->getName());
			}
			var->Text = "Room";

			comboBox2->SelectionMode = System::Windows::Forms::SelectionMode::One;

			addnamelabel->Text = "Time";
			label6->Visible = true;
			comboBoxaddad->Visible = true;


		}


	}

	private: System::Void dadadaadd_Click(System::Object^ sender, System::EventArgs^ e) {
		if (namet->Text != "") {
			if (comboBox1->Text == "Room") {
				String^ r = namet->Text;

				Room^ ro = gcnew Room(r);

				tt->addRoom(ro);

				MessageBox::Show("Sucessfull :)", "Process Complete");
			}
			else if (comboBox1->Text == "Course") {
				String^ co = namet->Text;

				Course^ course = gcnew Course(co);

				tt->addCourse(course);

				MessageBox::Show("Sucessfull :)", "Process Complete");
			}

			if (comboBox2->SelectedItem != nullptr) {


				if (var->Text == "Section") {
					String^ s = namet->Text;
					Student^ lastStudent = tt->students[tt->students->Count - 1];

					int newRegNo = lastStudent->getRegno() + 1;

					String^ sectionname = comboBox2->SelectedItem->ToString();
					Section^ sec = nullptr;

					for each (Section^ s in tt->sections) {
						if (s->getName() == sectionname) {
							sec = s;
							break;
						}
					}
					if (sec == nullptr) {
						MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;

					}


					Student^ student = gcnew Student(newRegNo, s, sec);
					tt->addStudent(student);

					MessageBox::Show("Sucessfull :)", "Process Complete");
				}
				else if (comboBox1->Text == "Section") {
					String^ se = namet->Text;

					Section^ section = gcnew Section(se);

					for each (Object ^ obj in comboBox2->SelectedItems) {
						for each (Course ^ cou in tt->courses) {
							if (cou->getName() == obj->ToString()) {
								section->addCourse(cou);
							}
						}
					}

					tt->addSection(section);

					MessageBox::Show("Sucessfull :)", "Process Complete");
				}

				else if (comboBox1->Text == "Teacher") {
					String^ t = namet->Text;
					Teacher^ lastTeacher = tt->teachers[tt->teachers->Count - 1];

					int newID = lastTeacher->getId() + 1;

					String^ coursename = comboBox2->SelectedItem->ToString();
					
					Course^ co = nullptr;

					for each (Course^ c in tt->courses) {
						if (c->getName() == coursename) {
							co = c;
							break;
						}
					}

					if (co == nullptr) {
						MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;

					}


					Teacher^ teacher = gcnew Teacher(t, newID, co);

					tt->addTeacher(teacher);

					MessageBox::Show("Sucessfull :)", "Process Complete");
				}

				else {
					MessageBox::Show("Input Full Details..", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}

				if (comboBoxaddad->SelectedItem != nullptr) {
					if (comboBox1->Text == "TimeSlot") {
						String^ time = namet->Text;
						String^ day = comboBoxaddad->SelectedItem->ToString();

						String^ roomname = comboBox2->SelectedItem->ToString();

						Room^ ro = nullptr;

						for each (Room ^ r in tt->rooms) {
							if (r->getName() == roomname) {
								ro = r;
								break;
							}
						}

						if (ro == nullptr) {
							MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;

						}


						TimeSlot^ ts = gcnew TimeSlot(day, time);

						tt->addTimeslot(ro, ts);

						MessageBox::Show("Sucessfull :)", "Process Complete");
					}

				}
				else {
					MessageBox::Show("Select Day Also..", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}


			}
		}
		else {
			MessageBox::Show("Input Full Details..", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox3->Text == "Section") {

			comboBox4->Items->Clear();

			for each (Section^ s in tt->sections) {
				comboBox4->Items->Add(s->getName());
			}

			comboBox4->SelectionMode = System::Windows::Forms::SelectionMode::One;

			var2->Text = "Sections";

		}
		else if (comboBox3->Text == "Teacher") {

			comboBox4->Items->Clear();

			for each (Teacher^ t in tt->teachers) {
				comboBox4->Items->Add(t->getname());
			}

			var2->Text = "Teachers";
			comboBox4->SelectionMode = System::Windows::Forms::SelectionMode::One;

		}
		else if (comboBox3->Text == "Course") {

			comboBox4->Items->Clear();

			for each (Course^ c in tt->courses) {
				comboBox4->Items->Add(c->getName());
			}

			var2->Text = "Courses";
			comboBox4->SelectionMode = System::Windows::Forms::SelectionMode::One;
		}
		else if (comboBox3->Text == "Room") {

			comboBox4->Items->Clear();

			for each (Room^ r in tt->rooms) {
				comboBox4->Items->Add(r->getName());
			}

			var2->Text = "Rooms";
			comboBox4->SelectionMode = System::Windows::Forms::SelectionMode::One;


		}
		else if (comboBox3->Text == "Student") {

			comboBox4->Items->Clear();

			for each (Student^ s in tt->students) {
				comboBox4->Items->Add(s->getname());
			}

			var2->Text = "Students";

			comboBox4->SelectionMode = System::Windows::Forms::SelectionMode::One;

		}
	}

	private: System::Void removeitbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox4->SelectedItem != nullptr) {

			if (comboBox3->Text->ToString() == "Student") {

				String^ c = comboBox4->SelectedItem->ToString();

				tt->deleteStudent(c);

				comboBox4->Items->Remove(comboBox4->SelectedItem);

				MessageBox::Show("Sucessfull :)", "Process Complete");
			}
			else if (comboBox3->Text->ToString() == "Room") {
				String^ c = comboBox4->SelectedItem->ToString();

				tt->deleteRoom(c);

				comboBox4->Items->Remove(comboBox4->SelectedItem);
				MessageBox::Show("Sucessfull :)", "Process Complete");
			}
			else if (comboBox3->Text == "Teacher") {
				String^ c = comboBox4->SelectedItem->ToString();

				tt->deleteTeacher(c);

				comboBox4->Items->Remove(comboBox4->SelectedItem);
				MessageBox::Show("Sucessfull :)", "Process Complete");
			}
			else if (comboBox3->Text == "Course") {
				String^ c = comboBox4->SelectedItem->ToString();

				tt->deleteCourse(c);

				comboBox4->Items->Remove(comboBox4->SelectedItem);
				MessageBox::Show("Sucessfull :)", "Process Complete");
			}
			else if (comboBox3->Text == "Section") {
				String^ c = comboBox4->SelectedItem->ToString();

				tt->deleteSection(c);

				comboBox4->Items->Remove(comboBox4->SelectedItem);
				MessageBox::Show("Sucessfull :)", "Process Complete");
			}

		}
		else {
			MessageBox::Show("Input Full Details..", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void gobacktoadminpanel_Click(System::Object^ sender, System::EventArgs^ e) {
		removepl->Visible = false;
		mainpanelar->Visible = true;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		sectionpanel->Visible = true;
		mainpaneltt->Visible = false;

		SectionListBox->Items->Clear();

		for each (Section ^ s in tt->sections) {
			SectionListBox->Items->Add(s->getName());
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//room
		mainpaneltt->Visible = false;
		roompanel->Visible = true;

		listBox1->Items->Clear();

		for each (Room ^ r in tt->rooms) {
			listBox1->Items->Add(r->getName());
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//course
		mainpaneltt->Visible = false;
		coursepanel->Visible = true;

		listBox2->Items->Clear();

		for each (Course ^ c in tt->courses) {
			listBox2->Items->Add(c->getName());
		}

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//teacher
		mainpaneltt->Visible = false;
		teacherpanel->Visible = true;

		listBox3->Items->Clear();

		for each (Teacher ^ t in tt->teachers) {
			listBox3->Items->Add(t->getname());
		}

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		mainpaneltt->Visible = true;
		roompanel->Visible = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->SelectedItem != nullptr) {
			String^ roomname = listBox1->SelectedItem->ToString();
			Room^ ro = nullptr;

			for each (Room^ r in tt->rooms) {
				if (r->getName() == roomname) {
					ro = r;
					break;
				}
			}

			if (ro == nullptr) {
				MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;

			}



			List<Timetable^>^ t_t = tt->timetableByRoom(ro);

			OOPAssignment::ShowWin^ showin = gcnew OOPAssignment::ShowWin();

			showin->showbox->DataSource = t_t;

			showin->Show();



		}
		else {
			std::cerr << "Select Something!" << std::endl;
			MessageBox::Show("Select Something!!!!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		mainpaneltt->Visible = true;
		coursepanel->Visible = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox2->SelectedItem != nullptr) {
			String^ coursename = listBox2->SelectedItem->ToString();
			Course^ cou = nullptr;

			for each (Course^ c in tt->courses) {
				if (c->getName() == coursename) {
					cou = c;
					break;
				}
			}

			if (cou == nullptr) {
				MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;

			}


			List<Timetable^>^ t_t = tt->timetableByCourse(cou);

			OOPAssignment::ShowWin^ showin = gcnew OOPAssignment::ShowWin();

			showin->showbox->DataSource = t_t;

			showin->Show();



		}
		else {
			std::cerr << "Select Something!" << std::endl;
			MessageBox::Show("Select Something!!!!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		mainpaneltt->Visible = true;
		teacherpanel->Visible = false;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox3->SelectedItem != nullptr) {
			String^ teachername = listBox3->SelectedItem->ToString();
			Teacher^ tea = nullptr;

			for each (Teacher^ t in tt->teachers) {
				if (t->getname() == teachername) {
					tea = t;
					break;
				}
			}
			if (tea == nullptr) {
				MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;

			}

			List<Timetable^>^ t_t = tt->timetableByTeacher(tea);

			OOPAssignment::ShowWin^ showin = gcnew OOPAssignment::ShowWin();

			showin->showbox->DataSource = t_t;

			showin->Show();
		}
		else {
			std::cerr << "Select Something!" << std::endl;
			MessageBox::Show("Select Something!!!!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		mainpaneltt->Visible = false;
		adminpanel->Visible = true;
	}
	private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonchangerelation_Click(System::Object^ sender, System::EventArgs^ e) { //todo
		if (comboBoxrelations->SelectedItem != nullptr && listBoxr1->SelectedItem != nullptr && listBoxr2->SelectedItem != nullptr) {
			if (comboBoxrelations->Text == "Teacher and Course") {
				String^ tn = listBoxr1->SelectedItem->ToString();

				Teacher^ teacher = nullptr;

				for each (Teacher^ t in tt->teachers) {
					if (t->getname() == tn) {
						teacher = t;
						break;
					}
				}
				if (teacher == nullptr) {
					MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;

				}


				String^ cn = listBoxr2->SelectedItem->ToString();

				Course^ course = nullptr;

				for each (Course^ c in tt->courses) {
					if (c->getName() == cn) {
						course = c;
						break;
					}
				}
				if (course == nullptr) {
					MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;

				}


				tt->swapTeacherwithCourse(teacher, course);
			
				MessageBox::Show("Teacher and Course Relation Swap...", "Success Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else if (comboBoxrelations->Text == "Student and Section") {
				String^ stn = listBoxr1->SelectedItem->ToString();

				Student^ student = nullptr;

				for each (Student^ st in tt->students) {
					if (st->getname() == stn) {
						student = st;
						break;
					}
				}

				if (student == nullptr) {
					MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;

				}


				String^ secn = listBoxr2->SelectedItem->ToString();

				Section^ section = nullptr;

				for each (Section^ sec in tt->sections) {
					if (sec->getName() == secn) {
						section = sec;
						break;
					}
				}

				if (section == nullptr) {
					MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;

				}

				tt->assignStudenttoSection(section, student);

				MessageBox::Show("Student and Section Relation Developed...", "Success Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else if (comboBoxrelations->Text == "Course and Section") {
				String^ str1 = listBoxr1->SelectedItem->ToString();

				Section^ section = nullptr;

				for each (Section^ sec in tt->sections) {
					if (sec->getName() == str1) {
						section = sec;
						break;
					}
				}

				if (section == nullptr) {
					MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;

				}


				List<Course^>^ coursess = nullptr;
				for each (Object ^ obj in listBoxr2->SelectedItems) {
					String^ str2 = obj->ToString();
					for each (Course^ cou in tt->courses) {
						if (cou->getName() == str2) {
							coursess->Add(cou);
							break;
						}
					}
				}

				if (coursess == nullptr) {
					MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;

				}


				tt->assignCoursestoSection(section, coursess);

				MessageBox::Show("Section and Courses Relation Developed...", "Success Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Input Full Details", "Error Message", MessageBoxButtons::OK,MessageBoxIcon::Error);
		}
	}
	private: System::Void comboBoxrelations_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) { 
		if (comboBoxrelations->Text == "Teacher and Course") {
			listBoxr1->Items->Clear();
			listBoxr2->Items->Clear();

			labelr1->Text = "Teacher";

			for each (Teacher^ t in tt->teachers) {
				listBoxr1->Items->Add(t->getname());
			}
			listBoxr1->SelectionMode = System::Windows::Forms::SelectionMode::One;

			labelr2->Text = "Course";

			for each (Course^ c in tt->courses) {
				listBoxr2->Items->Add(c->getName());
			}
			listBoxr2->SelectionMode = System::Windows::Forms::SelectionMode::One;
		}
		else if (comboBoxrelations->Text == "Student and Section") {
			listBoxr1->Items->Clear();
			listBoxr2->Items->Clear();

			labelr1->Text = "Student";

			for each (Student^ st in tt->students) {
				listBoxr1->Items->Add(st->getname());
			}
			listBoxr1->SelectionMode = System::Windows::Forms::SelectionMode::One;

			labelr2->Text = "Section";

			for each (Section^ sec in tt->sections) {
				listBoxr2->Items->Add(sec->getName());
			}
			listBoxr2->SelectionMode = System::Windows::Forms::SelectionMode::One;
		}
		else if (comboBoxrelations->Text == "Course and Section") {
			listBoxr1->Items->Clear();
			listBoxr2->Items->Clear();

			labelr1->Text = "Section";

			for each (Section^ sec in tt->sections) {
				listBoxr1->Items->Add(sec->getName());
			}
			listBoxr1->SelectionMode = System::Windows::Forms::SelectionMode::One;

			labelr2->Text = "Course (Multi-Select)";

			for each (Course^ sec in tt->courses) {
				listBoxr2->Items->Add(sec->getName());
			}
			listBoxr2->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
		}
		else if (comboBoxrelations->Text == "Course and Room") {
			listBoxr1->Items->Clear();
			listBoxr2->Items->Clear();

			labelr1->Text = "Courses";

			for each (Course^ c in tt->courses) {
				listBoxr1->Items->Add(c->getName());
			}
			listBoxr1->SelectionMode = System::Windows::Forms::SelectionMode::One;

			labelr2->Text = "Rooms (Multi-Select)";

			for each (Room^ r in tt->rooms) {
				listBoxr2->Items->Add(r->getName());
			}
			listBoxr2->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
		}

	}
	private: System::Void gobacktoadminpn_Click(System::Object^ sender, System::EventArgs^ e) { 
		relationpanel->Visible = false;
		adminpanel->Visible = true;
	}
	private: System::Void mainpaneltt_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void addtimetablebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	mainpaneltt->Visible = false;
	addtimetablepanel->Visible = true;

	coursecomboBoxadd->Items->Clear();
	roomcomboBoxadd->Items->Clear();
	sectioncomboBoxadd->Items->Clear();



	for each (Course ^ course in tt->courses) {
		coursecomboBoxadd->Items->Add(course->getName());
	}

	for each (Room ^ room in tt->rooms) {
		roomcomboBoxadd->Items->Add(room->getName());
	}

	for each (Section ^ sec in tt->sections) {
		sectioncomboBoxadd->Items->Add(sec->getName());
	}

	
	
}
private: System::Void changetimetablebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	mainpaneltt->Visible = false;
	changetimetablepanel->Visible = true;

	coursecomboBoxch1->Items->Clear();
	coursecomboBoxch2->Items->Clear();
	roomcomboBoxch1->Items->Clear();
	roomcomboBoxch2->Items->Clear();
	sectioncomboBoxch1->Items->Clear();

	sectioncomboBoxch1->Items->Clear();

	timeslotcomboBoxch2->Items->Clear();

	timeslotcomboBoxch2->Items->Clear();


	for each (Course ^ c in tt->courses) {
		coursecomboBoxch1->Items->Add(c->getName());
		coursecomboBoxch2->Items->Add(c->getName());
	}

	for each (Room ^ room in tt->rooms) {
		roomcomboBoxch1->Items->Add(room->getName());
		roomcomboBoxch2->Items->Add(room->getName());
	}

	sectioncomboBoxch1->Items->Add("-- Select the Course First --");

	sectioncomboBoxch1->Items->Add("-- Select the Course First --");

	timeslotcomboBoxch2->Items->Add("-- Select the Room First --");

	timeslotcomboBoxch2->Items->Add("-- Select the Room First --");


}
private: System::Void deletetimetablebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	mainpaneltt->Visible = false;
	deletetimetablepanel->Visible = true;

	coursecomboBoxremove->Items->Clear();
	roomcomboBoxremove->Items->Clear();
	sectioncomboBoxremove->Items->Clear();

	timeslotcomboBoxremove->Items->Clear();



	for each (Course ^ c in tt->courses) {
		coursecomboBoxremove->Items->Add(c->getName());
	}

	for each (Room ^ room in tt->rooms) {
		roomcomboBoxremove->Items->Add(room->getName());
	}

	sectioncomboBoxremove->Items->Add("-- Select the Course First --");

	timeslotcomboBoxremove->Items->Add("-- Select the Room First --");


}
private: System::Void addtimetableworkbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Course^ course = nullptr;
	Section^ section = nullptr;
	Room^ room = nullptr;

	for each (Course ^ c in tt->courses) {
		if (c->getName() == coursecomboBoxadd->SelectedItem->ToString()) {
			course = c;
		}
	}

	for each (Room ^ r in tt->rooms) {
		if (r->getName() == roomcomboBoxadd->SelectedItem->ToString()) {
			room = r;
		}
	}

	for each (Section ^ sec in tt->sections) {
		if (sec->getName() == sectioncomboBoxadd->SelectedItem->ToString()) {
			section = sec;
		}
	}

	if (course == nullptr ||
		section == nullptr ||
		room == nullptr){
		MessageBox::Show("Input Correct Details", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	TimeSlot^ timeslot = gcnew TimeSlot(daytimetableadd->SelectedItem->ToString(), timeslotcomboBoxadd->SelectedItem->ToString());

	room->addTimeSlot(timeslot);
	Timetable^ timetable = gcnew Timetable(timeslot, room, section, course);
	int r = tt->addTimetable(timetable);

	if (r == 0) {
		MessageBox::Show("Timetable Added...", "Success Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else if (r == -1) {
		MessageBox::Show("Timetable Clash Found", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void coursecomboBoxadd_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void coursecomboBoxremove_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		Course^ course = nullptr;

		for each (Course ^ c in tt->courses) {
			if (c->getName() == coursecomboBoxremove->SelectedItem->ToString()) {
				course = c;
			}
		}

		if (course == nullptr) {
			MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;

		}

		sectioncomboBoxremove->Items->Clear();

		for each (Section ^ sec in course->getSections()) {
			sectioncomboBoxremove->Items->Add(sec->getName());
		}

	}
	catch (Exception^ e) {
		MessageBox::Show("First Make Course Relation with Section. Then Try Again", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}


}
private: System::Void removetimetableworkbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Course^ course = nullptr;
	Section^ section = nullptr;
	Room^ room = nullptr;

	for each (Course ^ c in tt->courses) {
		if (c->getName() == coursecomboBoxremove->SelectedItem->ToString()) {
			course = c;
		}
	}

	for each (Room ^ r in tt->rooms) {
		if (r->getName() == roomcomboBoxremove->SelectedItem->ToString()) {
			room = r;
		}
	}

	for each (Section ^ sec in tt->sections) {
		if (sec->getName() == sectioncomboBoxremove->SelectedItem->ToString()) {
			section = sec;
		}
	}
	if (course == nullptr ||
		section == nullptr ||
		room == nullptr) {
		MessageBox::Show("Input Correct Details", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	TimeSlot^ timeslot = gcnew TimeSlot(daytimetableremove->SelectedItem->ToString(), timeslotcomboBoxremove->SelectedItem->ToString());


	Timetable^ timetable = gcnew Timetable(timeslot, room, section, course);
	tt->deleteTimetable(timetable);

	MessageBox::Show("Timetable Deleted...", "Success Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void roomcomboBoxremove_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	Room^ room = nullptr;

	for each (Room ^ r in tt->rooms) {
		if (r->getName() == roomcomboBoxremove->SelectedItem->ToString()) {
			room = r;
		}
	}

	if (room == nullptr) {
		MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;

	}


	timeslotcomboBoxremove->Items->Clear();

	for each (TimeSlot ^ ts in room->getTimeSlots()){
		timeslotcomboBoxremove->Items->Add(ts->time);
	}
}
private: System::Void coursecomboBoxch1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		Course^ course = nullptr;

		for each (Course ^ c in tt->courses) {
			if (c->getName() == coursecomboBoxch1->SelectedItem->ToString()) {
				course = c;
			}
		}

		if (course == nullptr) {
			MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;

		}

		sectioncomboBoxch1->Items->Clear();

		for each (Section ^ sec in course->getSections()) {
			sectioncomboBoxch1->Items->Add(sec->getName());
		}

	}
	catch (Exception^ e) {
		MessageBox::Show("First Make Course Relation with Section. Then Try Again", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}

}
private: System::Void coursecomboBoxch2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		Course^ course = nullptr;

		for each (Course ^ c in tt->courses) {
			if (c->getName() == coursecomboBoxch2->SelectedItem->ToString()) {
				course = c;
			}
		}
		if (course == nullptr) {
			MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;

		}

		sectioncomboBoxch2->Items->Clear();

		for each (Section ^ sec in course->getSections()) {
			sectioncomboBoxch2->Items->Add(sec->getName());
		}

	}
	catch (Exception^ e) {
		MessageBox::Show("First Make Course Relation with Section. Then Try Again", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}

}
private: System::Void roomcomboBoxch1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Room^ room = nullptr;

	for each (Room ^ r in tt->rooms) {
		if (r->getName() == roomcomboBoxch1->SelectedItem->ToString()) {
			room = r;
		}
	}
	if (room == nullptr) {
		MessageBox::Show("Details not Found. Operation not done", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;

	}

	timeslotcomboBoxch1->Items->Clear();

	for each (TimeSlot ^ ts in room->getTimeSlots()) {
		timeslotcomboBoxch1->Items->Add(ts->time);
	}

}
private: System::Void roomcomboBoxch2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Room^ room = nullptr;

	for each (Room ^ r in tt->rooms) {
		if (r->getName() == roomcomboBoxch2->SelectedItem->ToString()) {
			room = r;
		}
	}

	if (room == nullptr) {
		MessageBox::Show("Details not Found", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;

	}

	timeslotcomboBoxch2->Items->Clear();

	for each (TimeSlot ^ ts in room->getTimeSlots()) {
		timeslotcomboBoxch2->Items->Add(ts->time);
	}

}
private: System::Void changetimetableworkbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Course^ ocourse = nullptr;
	Section^ osection = nullptr;
	Room^ oroom = nullptr;

	Course^ ncourse = nullptr;
	Section^ nsection = nullptr;
	Room^ nroom = nullptr;


	TimeSlot^ otimeslot = gcnew TimeSlot(daytimetablech1->SelectedItem->ToString(), timeslotcomboBoxch1->SelectedItem->ToString());
	TimeSlot^ ntimeslot = gcnew TimeSlot(daytimetablech2->SelectedItem->ToString(), timeslotcomboBoxch2->SelectedItem->ToString());

	for each (Course ^ c in tt->courses) {
		if (c->getName() == coursecomboBoxch1->SelectedItem->ToString()) {
			ocourse = c;
		}
		if (c->getName() == coursecomboBoxch2->SelectedItem->ToString()) {
			ncourse = c;
		}

	}

	for each (Room ^ r in tt->rooms) {
		if (r->getName() == roomcomboBoxch1->SelectedItem->ToString()) {
			oroom = r;
		}
		if (r->getName() == roomcomboBoxch2->SelectedItem->ToString()) {
			nroom = r;
		}

	}

	for each (Section ^ sec in tt->sections) {
		if (sec->getName() == sectioncomboBoxch1->SelectedItem->ToString()) {
			osection = sec;
		}
		if (sec->getName() == sectioncomboBoxch2->SelectedItem->ToString()) {
			nsection = sec;
		}

	}

	if (ocourse == nullptr ||
		osection == nullptr ||
		oroom == nullptr ||
		ncourse == nullptr ||
		nsection == nullptr ||
		nroom == nullptr) {
		MessageBox::Show("Input Correct Details", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	nroom->addTimeSlot(ntimeslot);
	Timetable^ timetable = gcnew Timetable(otimeslot, oroom, osection, ocourse);
	tt->changeTimetableEntry(timetable, ntimeslot, nroom, ncourse, nsection);

	MessageBox::Show("Timetable Entry Changed...", "Success Message", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void gbttchbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	mainpaneltt->Visible = true;
	changetimetablepanel->Visible = false;

}
private: System::Void gbttrbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	mainpaneltt->Visible = true;
	deletetimetablepanel->Visible = false;

}
private: System::Void gbttabtn_Click(System::Object^ sender, System::EventArgs^ e) {
	mainpaneltt->Visible = true;
	addtimetablepanel->Visible = false;

}
private: System::Void roomcomboBoxadd_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Room^ room = nullptr;

	for each (Room ^ r in tt->rooms) {
		if (r->getName() == roomcomboBoxadd->SelectedItem->ToString()) {
			room = r;
		}
	}

	if (room == nullptr) {
		MessageBox::Show("Details not Found", "Error Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;

	}

	timeslotcomboBoxadd->Items->Clear();

	for each (TimeSlot ^ ts in room->getTimeSlots()) {
		timeslotcomboBoxadd->Items->Add(ts->time);
	}

}
};


}
