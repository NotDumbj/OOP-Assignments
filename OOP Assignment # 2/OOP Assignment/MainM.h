#ifndef MAINM_H
#define MAINM_H

#include "Rebuild.h"

#include "ShowWin.h"
#include<iostream> // for console testing purpose
#include <msclr/marshal_cppstd.h>

std::vector<Course*> TimeTable::courses;
std::vector<Room*> TimeTable::rooms;
std::vector<Section*> TimeTable::sections;
std::vector<Student*> TimeTable::students;
std::vector<Teacher*> TimeTable::teachers;

TimeTable* timetable = programrun();
Admin admin(timetable);

namespace OOPAssignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;



	void run();

	/// <summary>
	/// Summary for MainM
	/// </summary>
	/// 
	/// 
	
	public ref class MainM : public System::Windows::Forms::Form
	{
	public:
		MainM(void)
		{
			run();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^ label6;
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
			this->comboBox2 = (gcnew System::Windows::Forms::ListBox());
			this->dadadaadd = (gcnew System::Windows::Forms::Button());
			this->gobacktomenu = (gcnew System::Windows::Forms::Button());
			this->var = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->addpanl->Controls->Add(this->comboBox2);
			this->addpanl->Controls->Add(this->dadadaadd);
			this->addpanl->Controls->Add(this->gobacktomenu);
			this->addpanl->Controls->Add(this->var);
			this->addpanl->Controls->Add(this->label6);
			this->addpanl->Controls->Add(this->label7);
			this->addpanl->Controls->Add(this->comboBox1);
			this->addpanl->Controls->Add(this->namet);
			this->addpanl->Location = System::Drawing::Point(161, 51);
			this->addpanl->Name = L"addpanl";
			this->addpanl->Size = System::Drawing::Size(890, 633);
			this->addpanl->TabIndex = 8;
			this->addpanl->Visible = false;
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
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(274, 221);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Name";
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
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Student", L"Teacher", L"Course", L"Room", L"Section" });
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
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Info;
			this->button12->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button12->Location = System::Drawing::Point(421, 453);
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
			this->button5->Location = System::Drawing::Point(420, 387);
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
			this->button4->Location = System::Drawing::Point(421, 316);
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
			this->button3->Location = System::Drawing::Point(420, 251);
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
			this->button2->Location = System::Drawing::Point(421, 181);
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
			// MainM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(1193, 771);
			this->Controls->Add(this->teacherpanel);
			this->Controls->Add(this->coursepanel);
			this->Controls->Add(this->roompanel);
			this->Controls->Add(this->mainpaneltt);
			this->Controls->Add(this->panelmain);
			this->Controls->Add(this->removepl);
			this->Controls->Add(this->addpanl);
			this->Controls->Add(this->mainpanelar);
			this->Controls->Add(this->adminpanel);
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
			this->ResumeLayout(false);

		}
#endif
	private: System::Void MainM_Load(System::Object^ sender, System::EventArgs^ e) { //fazool
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

		for (Section* s : TimeTable::sections) {
			SectionListBox->Items->Add(gcnew System::String(s->getName().c_str()));
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
		String^ a = SectionListBox->SelectedItem->ToString();
		std::string sectionname = marshal_as<std::string>(a);
		Section* sec = nullptr;

		for (Section* s : timetable->sections) {
			if (s->getName() == sectionname) {
				sec = s;
				break;
			}
		}



		std::ostringstream oss;
		std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

		// Call your function
		// Filter by teacher
		timetable->timetableBySection(sec);
		std::cout << "\n";// Assuming your function prints output using cout

		// Restore cout
		std::cout.rdbuf(coutBuffer);

		// Get the output from stringstream
		std::string output = oss.str();

		// Convert the output string to System::String^
		String^ outputText = gcnew String(output.c_str());
	
		OOPAssignment::ShowWin^ showin = gcnew OOPAssignment::ShowWin();
	
		showin->showbox->Text = outputText;


		showin->Show();



	}
	else {
		std::cerr << "Select Something!" << std::endl;
		MessageBox::Show("Select Something!!!!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

	   void run() {

	   }
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
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	mainpanelar->Visible = false;
	adminpanel->Visible = true;
}
private: System::Void adds_Click(System::Object^ sender, System::EventArgs^ e) {
	mainpanelar->Visible = false;
	addpanl->Visible = true;
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

		for (Course* s : timetable->courses) {
			comboBox2->Items->Add(gcnew System::String(s->getName().c_str()));
		}

		comboBox2->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;

		var->Text = "Course (Multi-Select)";

	}
	else if (comboBox1->Text == "Teacher") {

		comboBox2->Items->Clear();

		for (Course* t : timetable->courses) {
			comboBox2->Items->Add(gcnew System::String(t->getName().c_str()));
		}

		var->Text = "Course";
		comboBox2->SelectionMode = System::Windows::Forms::SelectionMode::One;

	}
	else if (comboBox1->Text == "Course") {

		comboBox2->Items->Clear();

		for (Room* c : timetable->rooms) {
			comboBox2->Items->Add(gcnew System::String(c->getName().c_str()));
		}

		var->Text = "Room (Multi-Select)";
		comboBox2->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
	}
	else if (comboBox1->Text == "Room") {

		comboBox2->Items->Clear();

		for (Room* r : timetable->rooms) {
			comboBox2->Items->Add(gcnew System::String(r->getName().c_str()));
		}

		var->Visible = false;
		comboBox2->Visible = false;

	}
	else if (comboBox1->Text == "Student") {
			

		comboBox2->Items->Clear();

		for (Section* s : timetable->sections) {
			comboBox2->Items->Add(gcnew System::String(s->getName().c_str()));
		}

		var->Text = "Section";

		comboBox2->SelectionMode = System::Windows::Forms::SelectionMode::One;

	}
}

private: System::Void dadadaadd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (namet->Text != "") {
		if (comboBox1->Text->ToString() == "Room") {
			String^ r = namet->Text;
			std::string rn = marshal_as<std::string>(r);

			admin.makeRoom(rn);

			MessageBox::Show("Sucessfull :)", "Process Complete");
		}
		if (comboBox2->SelectedItem != nullptr) {

			String^ a = comboBox2->SelectedItem->ToString();
			std::string b = marshal_as<std::string>(a);

			if (var->Text == "Section") {
				String^ s = namet->Text;
				std::string sn = marshal_as<std::string>(s);
				Student* lastStudent = timetable->students.back();

				int newRegNo = lastStudent->getRegno() + 1;

				String^ c = comboBox2->SelectedItem->ToString();
				std::string sectionname = marshal_as<std::string>(a);
				Section* sec = nullptr;

				for (Section* s : timetable->sections) {
					if (s->getName() == sectionname) {
						sec = s;
						break;
					}
				}

				admin.makeStudent(sn, newRegNo, sec);
				MessageBox::Show("Sucessfull :)", "Process Complete");
			}
			else if (comboBox1->Text == "Teacher") {
				String^ t = namet->Text;
				std::string tn = marshal_as<std::string>(t);
				Teacher* lastTeacher = timetable->teachers.back();

				int newID = lastTeacher->getId() + 1;

				String^ c = comboBox2->SelectedItem->ToString();
				std::string coursename = marshal_as<std::string>(a);
				Course* co = nullptr;

				for (Course* c : timetable->courses) {
					if (c->getName() == coursename) {
						co = c;
						break;
					}
				}

				admin.makeTeacher(tn, newID, co);
				MessageBox::Show("Sucessfull :)", "Process Complete");
			}
			else if (comboBox1->Text == "Course") {
				String^ co = namet->Text;
				std::string con = marshal_as<std::string>(co);
				std::vector<Room*> ro;
				for each (Object ^ obj in comboBox2->SelectedItems) {
					String^ selectedItem = obj->ToString();
					std::string selectedStr = marshal_as<std::string>(selectedItem);

					for (const auto& r : timetable->rooms) {
						if (selectedStr == r->getName()) {
							ro.push_back(r);
						}
					}
				}

				admin.makeCourse(con, ro);
				MessageBox::Show("Sucessfull :)", "Process Complete");
			}
			else if (comboBox1->Text == "Section") {
				String^ se = namet->Text;
				std::string sen = marshal_as<std::string>(se);
				std::vector<Course*> co;
				for each (Object ^ obj in comboBox2->SelectedItems) {
					String^ selectedItem = obj->ToString();
					std::string selectedStr = marshal_as<std::string>(selectedItem);

					for (const auto& c : timetable->courses) {
						if (selectedStr == c->getName()) {
							co.push_back(c);
						}
					}
				}

				admin.makeSection(sen, co);
				MessageBox::Show("Sucessfull :)", "Process Complete");
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

		for (Section* s : timetable->sections) {
			comboBox4->Items->Add(gcnew System::String(s->getName().c_str()));
		}

		comboBox4->SelectionMode = System::Windows::Forms::SelectionMode::One;

		var2->Text = "Sections";

	}
	else if (comboBox3->Text == "Teacher") {

		comboBox4->Items->Clear();

		for (Teacher* t : timetable->teachers) {
			comboBox4->Items->Add(gcnew System::String(t->getname().c_str()));
		}

		var2->Text = "Teachers";
		comboBox4->SelectionMode = System::Windows::Forms::SelectionMode::One;

	}
	else if (comboBox3->Text == "Course") {

		comboBox4->Items->Clear();

		for (Course* c : timetable->courses) {
			comboBox4->Items->Add(gcnew System::String(c->getName().c_str()));
		}

		var2->Text = "Courses";
		comboBox4->SelectionMode = System::Windows::Forms::SelectionMode::One;
	}
	else if (comboBox3->Text == "Room") {

		comboBox4->Items->Clear();

		for (Room* r : timetable->rooms) {
			comboBox4->Items->Add(gcnew System::String(r->getName().c_str()));
		}

		var2->Text = "Rooms";
		comboBox4->SelectionMode = System::Windows::Forms::SelectionMode::One;


	}
	else if (comboBox3->Text == "Student") {

		comboBox4->Items->Clear();

		for (Student* s : timetable->students) {
			comboBox4->Items->Add(gcnew System::String(s->getname().c_str()));
		}

		var2->Text = "Students";

		comboBox4->SelectionMode = System::Windows::Forms::SelectionMode::One;

	}
}

private: System::Void removeitbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox4->SelectedItem != nullptr) {


		String^ a = comboBox4->SelectedItem->ToString();
		std::string b = marshal_as<std::string>(a);

		if (comboBox3->Text->ToString() == "Student") {

			String^ c = comboBox4->SelectedItem->ToString();
			std::string sn = marshal_as<std::string>(a);

			admin.deleteStudent(sn);

			comboBox4->Items->Remove(comboBox4->SelectedItem);

			MessageBox::Show("Sucessfull :)", "Process Complete");
		}
		else if (comboBox3->Text->ToString() == "Room") {
			String^ c = comboBox4->SelectedItem->ToString();
			std::string sn = marshal_as<std::string>(a);

			admin.deleteRoom(sn);

			comboBox4->Items->Remove(comboBox4->SelectedItem);
			MessageBox::Show("Sucessfull :)", "Process Complete");
		}
		else if (comboBox3->Text == "Teacher") {
			String^ c = comboBox4->SelectedItem->ToString();
			std::string sn = marshal_as<std::string>(a);

			admin.deleteTeacher(sn);

			comboBox4->Items->Remove(comboBox4->SelectedItem);
			MessageBox::Show("Sucessfull :)", "Process Complete");
		}
		else if (comboBox3->Text == "Course") {
			String^ c = comboBox4->SelectedItem->ToString();
			std::string sn = marshal_as<std::string>(a);

			admin.deleteCourse(sn);

			comboBox4->Items->Remove(comboBox4->SelectedItem);
			MessageBox::Show("Sucessfull :)", "Process Complete");
		}
		else if (comboBox3->Text == "Section") {
			String^ c = comboBox4->SelectedItem->ToString();
			std::string sn = marshal_as<std::string>(a);

			admin.deleteSection(sn);

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

	for (Section* s : TimeTable::sections) {
		SectionListBox->Items->Add(gcnew System::String(s->getName().c_str()));
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//room
	mainpaneltt->Visible = false;
	roompanel->Visible = true;

	listBox1->Items->Clear();

	for (Room* s : TimeTable::rooms) {
		listBox1->Items->Add(gcnew System::String(s->getName().c_str()));
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//course
	mainpaneltt->Visible = false;
	coursepanel->Visible = true;

	listBox2->Items->Clear();

	for (Course* s : TimeTable::courses) {
		listBox2->Items->Add(gcnew System::String(s->getName().c_str()));
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//teacher
	mainpaneltt->Visible = false;
	teacherpanel->Visible = true;

	listBox3->Items->Clear();

	for (Teacher* s : TimeTable::teachers) {
		listBox3->Items->Add(gcnew System::String(s->getname().c_str()));
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	mainpaneltt->Visible = true;
	roompanel->Visible = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedItem != nullptr) {
		String^ a = listBox1->SelectedItem->ToString();
		std::string sectionname = marshal_as<std::string>(a);
		Room* sec = nullptr;

		for (Room* s : timetable->rooms) {
			if (s->getName() == sectionname) {
				sec = s;
				break;
			}
		}



		std::ostringstream oss;
		std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

		// Call your function
		// Filter by teacher
		timetable->timetableByRoom(sec);
		std::cout << "\n";// Assuming your function prints output using cout

		// Restore cout
		std::cout.rdbuf(coutBuffer);

		// Get the output from stringstream
		std::string output = oss.str();

		// Convert the output string to System::String^
		String^ outputText = gcnew String(output.c_str());

		OOPAssignment::ShowWin^ showin = gcnew OOPAssignment::ShowWin();

		showin->showbox->Text = outputText;


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
		String^ a = listBox2->SelectedItem->ToString();
		std::string sectionname = marshal_as<std::string>(a);
		Course* sec = nullptr;

		for (Course* s : timetable->courses) {
			if (s->getName() == sectionname) {
				sec = s;
				break;
			}
		}



		std::ostringstream oss;
		std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

		// Call your function
		// Filter by teacher
		timetable->timetableByCourse(sec);
		std::cout << "\n";// Assuming your function prints output using cout

		// Restore cout
		std::cout.rdbuf(coutBuffer);

		// Get the output from stringstream
		std::string output = oss.str();

		// Convert the output string to System::String^
		String^ outputText = gcnew String(output.c_str());

		OOPAssignment::ShowWin^ showin = gcnew OOPAssignment::ShowWin();

		showin->showbox->Text = outputText;


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
		String^ a = listBox3->SelectedItem->ToString();
		std::string sectionname = marshal_as<std::string>(a);
		Teacher* sec = nullptr;

		for (Teacher* s : timetable->teachers) {
			if (s->getname() == sectionname) {
				sec = s;
				break;
			}
		}



		std::ostringstream oss;
		std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

		// Call your function
		// Filter by teacher
		timetable->timetableByTeacher(sec);
		std::cout << "\n";// Assuming your function prints output using cout

		// Restore cout
		std::cout.rdbuf(coutBuffer);

		// Get the output from stringstream
		std::string output = oss.str();

		// Convert the output string to System::String^
		String^ outputText = gcnew String(output.c_str());

		OOPAssignment::ShowWin^ showin = gcnew OOPAssignment::ShowWin();

		showin->showbox->Text = outputText;


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
};


}
