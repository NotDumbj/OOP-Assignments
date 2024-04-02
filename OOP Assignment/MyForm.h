#pragma once

#include <sstream>
#include <vector>
#include <msclr/marshal_cppstd.h>
#include "timetable.h"



namespace OOPAssignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ timetablemenu;


	private: System::Windows::Forms::Button^ buttonrt;

	private: System::Windows::Forms::Button^ buttonct;

	private: System::Windows::Forms::Button^ buttonst;

	private: System::Windows::Forms::Button^ buttontt;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttongoback;
	private: System::Windows::Forms::Panel^ teacherpanel;
	private: System::Windows::Forms::Button^ buttonsaw;

	private: System::Windows::Forms::Button^ buttonsw;

	private: System::Windows::Forms::Button^ buttonsru;

	private: System::Windows::Forms::Button^ buttondam;

	private: System::Windows::Forms::Button^ buttonsgq;

	private: System::Windows::Forms::Button^ buttonmsk;
	private: System::Windows::Forms::Button^ buttonsza;
	private: System::Windows::Forms::Button^ buttonstamim;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttongobackteacherpanel;
	private: System::Windows::Forms::Panel^ teacherstshow;



	private: System::Windows::Forms::Button^ buttonsavetofilest;

	private: System::Windows::Forms::Button^ buttongobacklast;
	private: System::Windows::Forms::RichTextBox^ label5;
	private: System::Windows::Forms::Panel^ sectionpanel;
	private: System::Windows::Forms::Panel^ sectionshowpanel;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ gobackbutton4;

	private: System::Windows::Forms::Button^ buttongoback23;
	private: System::Windows::Forms::Button^ buttonsecd;
	private: System::Windows::Forms::Button^ buttonsecb;
	private: System::Windows::Forms::Button^ buttonsece;
	private: System::Windows::Forms::Button^ buttonsecc;
	private: System::Windows::Forms::Button^ buttonseca;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ coursepanel;
	private: System::Windows::Forms::Panel^ courseshowpanel;


	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ gobackbutton;

	private: System::Windows::Forms::Button^ buttonise;

	private: System::Windows::Forms::Button^ buttonla;
	private: System::Windows::Forms::Button^ buttonooplab;


	private: System::Windows::Forms::Button^ buttonds;

	private: System::Windows::Forms::Button^ buttonoop;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ buttonecs;

	private: System::Windows::Forms::Button^ buttonuq;

	private: System::Windows::Forms::Button^ buttonis;
private: System::Windows::Forms::Panel^ roompanel;
private: System::Windows::Forms::Panel^ roomshowpanel;

private: System::Windows::Forms::RichTextBox^ richTextBox3;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button401;

private: System::Windows::Forms::Button^ button418;
private: System::Windows::Forms::Button^ button402;


private: System::Windows::Forms::Button^ button419;

private: System::Windows::Forms::Button^ button417;

private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;

















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timetablemenu = (gcnew System::Windows::Forms::Panel());
			this->buttongoback = (gcnew System::Windows::Forms::Button());
			this->buttonrt = (gcnew System::Windows::Forms::Button());
			this->buttonct = (gcnew System::Windows::Forms::Button());
			this->buttonst = (gcnew System::Windows::Forms::Button());
			this->buttontt = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->teacherpanel = (gcnew System::Windows::Forms::Panel());
			this->buttongobackteacherpanel = (gcnew System::Windows::Forms::Button());
			this->buttonsaw = (gcnew System::Windows::Forms::Button());
			this->buttonsw = (gcnew System::Windows::Forms::Button());
			this->buttonsru = (gcnew System::Windows::Forms::Button());
			this->buttondam = (gcnew System::Windows::Forms::Button());
			this->buttonsgq = (gcnew System::Windows::Forms::Button());
			this->buttonmsk = (gcnew System::Windows::Forms::Button());
			this->buttonsza = (gcnew System::Windows::Forms::Button());
			this->buttonstamim = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->teacherstshow = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonsavetofilest = (gcnew System::Windows::Forms::Button());
			this->buttongobacklast = (gcnew System::Windows::Forms::Button());
			this->sectionpanel = (gcnew System::Windows::Forms::Panel());
			this->buttongoback23 = (gcnew System::Windows::Forms::Button());
			this->buttonsecd = (gcnew System::Windows::Forms::Button());
			this->buttonsecb = (gcnew System::Windows::Forms::Button());
			this->buttonsece = (gcnew System::Windows::Forms::Button());
			this->buttonsecc = (gcnew System::Windows::Forms::Button());
			this->buttonseca = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->sectionshowpanel = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->gobackbutton4 = (gcnew System::Windows::Forms::Button());
			this->coursepanel = (gcnew System::Windows::Forms::Panel());
			this->buttonecs = (gcnew System::Windows::Forms::Button());
			this->buttonuq = (gcnew System::Windows::Forms::Button());
			this->buttonis = (gcnew System::Windows::Forms::Button());
			this->gobackbutton = (gcnew System::Windows::Forms::Button());
			this->buttonise = (gcnew System::Windows::Forms::Button());
			this->buttonla = (gcnew System::Windows::Forms::Button());
			this->buttonooplab = (gcnew System::Windows::Forms::Button());
			this->buttonds = (gcnew System::Windows::Forms::Button());
			this->buttonoop = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->courseshowpanel = (gcnew System::Windows::Forms::Panel());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->roomshowpanel = (gcnew System::Windows::Forms::Panel());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->roompanel = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button401 = (gcnew System::Windows::Forms::Button());
			this->button418 = (gcnew System::Windows::Forms::Button());
			this->button402 = (gcnew System::Windows::Forms::Button());
			this->button419 = (gcnew System::Windows::Forms::Button());
			this->button417 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->timetablemenu->SuspendLayout();
			this->teacherpanel->SuspendLayout();
			this->teacherstshow->SuspendLayout();
			this->sectionpanel->SuspendLayout();
			this->sectionshowpanel->SuspendLayout();
			this->coursepanel->SuspendLayout();
			this->courseshowpanel->SuspendLayout();
			this->roomshowpanel->SuspendLayout();
			this->roompanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(120, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(365, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bahria University Management System";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(228, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(228, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 30);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(263, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(79, 86);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// timetablemenu
			// 
			this->timetablemenu->Controls->Add(this->buttongoback);
			this->timetablemenu->Controls->Add(this->buttonrt);
			this->timetablemenu->Controls->Add(this->buttonct);
			this->timetablemenu->Controls->Add(this->buttonst);
			this->timetablemenu->Controls->Add(this->buttontt);
			this->timetablemenu->Controls->Add(this->label2);
			this->timetablemenu->Location = System::Drawing::Point(12, 6);
			this->timetablemenu->Name = L"timetablemenu";
			this->timetablemenu->Size = System::Drawing::Size(612, 328);
			this->timetablemenu->TabIndex = 4;
			this->timetablemenu->Visible = false;
			// 
			// buttongoback
			// 
			this->buttongoback->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->buttongoback->Location = System::Drawing::Point(189, 247);
			this->buttongoback->Name = L"buttongoback";
			this->buttongoback->Size = System::Drawing::Size(226, 28);
			this->buttongoback->TabIndex = 5;
			this->buttongoback->Text = L"Go Back";
			this->buttongoback->UseVisualStyleBackColor = true;
			this->buttongoback->Click += gcnew System::EventHandler(this, &MyForm::buttongoback_Click);
			// 
			// buttonrt
			// 
			this->buttonrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->buttonrt->Location = System::Drawing::Point(189, 186);
			this->buttonrt->Name = L"buttonrt";
			this->buttonrt->Size = System::Drawing::Size(226, 28);
			this->buttonrt->TabIndex = 4;
			this->buttonrt->Text = L"Room Wise TimeTable";
			this->buttonrt->UseVisualStyleBackColor = true;
			this->buttonrt->Click += gcnew System::EventHandler(this, &MyForm::buttonrt_Click);
			// 
			// buttonct
			// 
			this->buttonct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->buttonct->Location = System::Drawing::Point(189, 158);
			this->buttonct->Name = L"buttonct";
			this->buttonct->Size = System::Drawing::Size(226, 28);
			this->buttonct->TabIndex = 3;
			this->buttonct->Text = L"Course Wise TimeTable";
			this->buttonct->UseVisualStyleBackColor = true;
			this->buttonct->Click += gcnew System::EventHandler(this, &MyForm::buttonct_Click);
			// 
			// buttonst
			// 
			this->buttonst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->buttonst->Location = System::Drawing::Point(189, 130);
			this->buttonst->Name = L"buttonst";
			this->buttonst->Size = System::Drawing::Size(226, 28);
			this->buttonst->TabIndex = 2;
			this->buttonst->Text = L"Section Wise TimeTable";
			this->buttonst->UseVisualStyleBackColor = true;
			this->buttonst->Click += gcnew System::EventHandler(this, &MyForm::buttonst_Click);
			// 
			// buttontt
			// 
			this->buttontt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->buttontt->Location = System::Drawing::Point(189, 102);
			this->buttontt->Name = L"buttontt";
			this->buttontt->Size = System::Drawing::Size(226, 28);
			this->buttontt->TabIndex = 1;
			this->buttontt->Text = L"Teacher Wise TimeTable";
			this->buttontt->UseVisualStyleBackColor = true;
			this->buttontt->Click += gcnew System::EventHandler(this, &MyForm::buttontt_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(223, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"TimeTable Menu";
			// 
			// teacherpanel
			// 
			this->teacherpanel->Controls->Add(this->buttongobackteacherpanel);
			this->teacherpanel->Controls->Add(this->buttonsaw);
			this->teacherpanel->Controls->Add(this->buttonsw);
			this->teacherpanel->Controls->Add(this->buttonsru);
			this->teacherpanel->Controls->Add(this->buttondam);
			this->teacherpanel->Controls->Add(this->buttonsgq);
			this->teacherpanel->Controls->Add(this->buttonmsk);
			this->teacherpanel->Controls->Add(this->buttonsza);
			this->teacherpanel->Controls->Add(this->buttonstamim);
			this->teacherpanel->Controls->Add(this->label4);
			this->teacherpanel->Controls->Add(this->label3);
			this->teacherpanel->Location = System::Drawing::Point(11, 5);
			this->teacherpanel->Name = L"teacherpanel";
			this->teacherpanel->Size = System::Drawing::Size(612, 328);
			this->teacherpanel->TabIndex = 6;
			this->teacherpanel->Visible = false;
			this->teacherpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::teacherpanel_Paint);
			// 
			// buttongobackteacherpanel
			// 
			this->buttongobackteacherpanel->Location = System::Drawing::Point(230, 256);
			this->buttongobackteacherpanel->Name = L"buttongobackteacherpanel";
			this->buttongobackteacherpanel->Size = System::Drawing::Size(147, 28);
			this->buttongobackteacherpanel->TabIndex = 10;
			this->buttongobackteacherpanel->Text = L"Go Back";
			this->buttongobackteacherpanel->UseVisualStyleBackColor = true;
			this->buttongobackteacherpanel->Click += gcnew System::EventHandler(this, &MyForm::buttongobackteacherpanel_Click);
			// 
			// buttonsaw
			// 
			this->buttonsaw->Location = System::Drawing::Point(337, 212);
			this->buttonsaw->Name = L"buttonsaw";
			this->buttonsaw->Size = System::Drawing::Size(147, 28);
			this->buttonsaw->TabIndex = 9;
			this->buttonsaw->Text = L"Sir Abdul Waheed";
			this->buttonsaw->UseVisualStyleBackColor = true;
			this->buttonsaw->Click += gcnew System::EventHandler(this, &MyForm::buttonsaw_Click);
			// 
			// buttonsw
			// 
			this->buttonsw->Location = System::Drawing::Point(337, 174);
			this->buttonsw->Name = L"buttonsw";
			this->buttonsw->Size = System::Drawing::Size(147, 28);
			this->buttonsw->TabIndex = 8;
			this->buttonsw->Text = L"Sir Waleed";
			this->buttonsw->UseVisualStyleBackColor = true;
			this->buttonsw->Click += gcnew System::EventHandler(this, &MyForm::buttonsw_Click);
			// 
			// buttonsru
			// 
			this->buttonsru->Location = System::Drawing::Point(337, 138);
			this->buttonsru->Name = L"buttonsru";
			this->buttonsru->Size = System::Drawing::Size(147, 28);
			this->buttonsru->TabIndex = 7;
			this->buttonsru->Text = L"Sir Rahim Ullah";
			this->buttonsru->UseVisualStyleBackColor = true;
			this->buttonsru->Click += gcnew System::EventHandler(this, &MyForm::buttonsru_Click);
			// 
			// buttondam
			// 
			this->buttondam->Location = System::Drawing::Point(337, 102);
			this->buttondam->Name = L"buttondam";
			this->buttondam->Size = System::Drawing::Size(147, 28);
			this->buttondam->TabIndex = 6;
			this->buttondam->Text = L"Dr Awais Majeed";
			this->buttondam->UseVisualStyleBackColor = true;
			this->buttondam->Click += gcnew System::EventHandler(this, &MyForm::buttondam_Click);
			// 
			// buttonsgq
			// 
			this->buttonsgq->Location = System::Drawing::Point(123, 212);
			this->buttonsgq->Name = L"buttonsgq";
			this->buttonsgq->Size = System::Drawing::Size(147, 28);
			this->buttonsgq->TabIndex = 5;
			this->buttonsgq->Text = L"Sir Gulaam Qamar";
			this->buttonsgq->UseVisualStyleBackColor = true;
			this->buttonsgq->Click += gcnew System::EventHandler(this, &MyForm::buttonsgq_Click);
			// 
			// buttonmsk
			// 
			this->buttonmsk->Location = System::Drawing::Point(123, 174);
			this->buttonmsk->Name = L"buttonmsk";
			this->buttonmsk->Size = System::Drawing::Size(147, 28);
			this->buttonmsk->TabIndex = 4;
			this->buttonmsk->Text = L"Maam Sadaf Khalid";
			this->buttonmsk->UseVisualStyleBackColor = true;
			this->buttonmsk->Click += gcnew System::EventHandler(this, &MyForm::buttonmsk_Click);
			// 
			// buttonsza
			// 
			this->buttonsza->Location = System::Drawing::Point(123, 138);
			this->buttonsza->Name = L"buttonsza";
			this->buttonsza->Size = System::Drawing::Size(147, 28);
			this->buttonsza->TabIndex = 3;
			this->buttonsza->Text = L"Sir Zubair Abbasi";
			this->buttonsza->UseVisualStyleBackColor = true;
			this->buttonsza->Click += gcnew System::EventHandler(this, &MyForm::buttonsza_Click);
			// 
			// buttonstamim
			// 
			this->buttonstamim->Location = System::Drawing::Point(123, 102);
			this->buttonstamim->Name = L"buttonstamim";
			this->buttonstamim->Size = System::Drawing::Size(147, 28);
			this->buttonstamim->TabIndex = 2;
			this->buttonstamim->Text = L"Sir Tamim";
			this->buttonstamim->UseVisualStyleBackColor = true;
			this->buttonstamim->Click += gcnew System::EventHandler(this, &MyForm::buttonstamim_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(259, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Please Selet One";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(218, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 15);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Teacher Wise Timetable";
			// 
			// teacherstshow
			// 
			this->teacherstshow->Controls->Add(this->label5);
			this->teacherstshow->Controls->Add(this->buttonsavetofilest);
			this->teacherstshow->Controls->Add(this->buttongobacklast);
			this->teacherstshow->Location = System::Drawing::Point(12, 6);
			this->teacherstshow->Name = L"teacherstshow";
			this->teacherstshow->Size = System::Drawing::Size(612, 337);
			this->teacherstshow->TabIndex = 11;
			this->teacherstshow->Visible = false;
			this->teacherstshow->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::teachershow_Paint);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(17, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(363, 289);
			this->label5->TabIndex = 4;
			this->label5->Text = L"";
			// 
			// buttonsavetofilest
			// 
			this->buttonsavetofilest->Location = System::Drawing::Point(399, 271);
			this->buttonsavetofilest->Name = L"buttonsavetofilest";
			this->buttonsavetofilest->Size = System::Drawing::Size(85, 31);
			this->buttonsavetofilest->TabIndex = 2;
			this->buttonsavetofilest->Text = L"Save to file";
			this->buttonsavetofilest->UseVisualStyleBackColor = true;
			this->buttonsavetofilest->Click += gcnew System::EventHandler(this, &MyForm::buttonsavetofile_Click);
			// 
			// buttongobacklast
			// 
			this->buttongobacklast->Location = System::Drawing::Point(503, 271);
			this->buttongobacklast->Name = L"buttongobacklast";
			this->buttongobacklast->Size = System::Drawing::Size(85, 31);
			this->buttongobacklast->TabIndex = 1;
			this->buttongobacklast->Text = L"Go Back";
			this->buttongobacklast->UseVisualStyleBackColor = true;
			this->buttongobacklast->Click += gcnew System::EventHandler(this, &MyForm::buttongobacklast_Click);
			// 
			// sectionpanel
			// 
			this->sectionpanel->Controls->Add(this->buttongoback23);
			this->sectionpanel->Controls->Add(this->buttonsecd);
			this->sectionpanel->Controls->Add(this->buttonsecb);
			this->sectionpanel->Controls->Add(this->buttonsece);
			this->sectionpanel->Controls->Add(this->buttonsecc);
			this->sectionpanel->Controls->Add(this->buttonseca);
			this->sectionpanel->Controls->Add(this->label6);
			this->sectionpanel->Controls->Add(this->label7);
			this->sectionpanel->Location = System::Drawing::Point(12, 5);
			this->sectionpanel->Name = L"sectionpanel";
			this->sectionpanel->Size = System::Drawing::Size(612, 328);
			this->sectionpanel->TabIndex = 12;
			this->sectionpanel->Visible = false;
			// 
			// buttongoback23
			// 
			this->buttongoback23->Location = System::Drawing::Point(230, 256);
			this->buttongoback23->Name = L"buttongoback23";
			this->buttongoback23->Size = System::Drawing::Size(147, 28);
			this->buttongoback23->TabIndex = 10;
			this->buttongoback23->Text = L"Go Back";
			this->buttongoback23->UseVisualStyleBackColor = true;
			this->buttongoback23->Click += gcnew System::EventHandler(this, &MyForm::buttongoback23_Click);
			// 
			// buttonsecd
			// 
			this->buttonsecd->Location = System::Drawing::Point(337, 138);
			this->buttonsecd->Name = L"buttonsecd";
			this->buttonsecd->Size = System::Drawing::Size(147, 28);
			this->buttonsecd->TabIndex = 7;
			this->buttonsecd->Text = L"Section D";
			this->buttonsecd->UseVisualStyleBackColor = true;
			this->buttonsecd->Click += gcnew System::EventHandler(this, &MyForm::buttonsecd_Click);
			// 
			// buttonsecb
			// 
			this->buttonsecb->Location = System::Drawing::Point(337, 102);
			this->buttonsecb->Name = L"buttonsecb";
			this->buttonsecb->Size = System::Drawing::Size(147, 28);
			this->buttonsecb->TabIndex = 6;
			this->buttonsecb->Text = L"Section B";
			this->buttonsecb->UseVisualStyleBackColor = true;
			this->buttonsecb->Click += gcnew System::EventHandler(this, &MyForm::buttonsecb_Click);
			// 
			// buttonsece
			// 
			this->buttonsece->Location = System::Drawing::Point(234, 174);
			this->buttonsece->Name = L"buttonsece";
			this->buttonsece->Size = System::Drawing::Size(147, 28);
			this->buttonsece->TabIndex = 4;
			this->buttonsece->Text = L"Section E";
			this->buttonsece->UseVisualStyleBackColor = true;
			this->buttonsece->Click += gcnew System::EventHandler(this, &MyForm::buttonsece_Click);
			// 
			// buttonsecc
			// 
			this->buttonsecc->Location = System::Drawing::Point(123, 138);
			this->buttonsecc->Name = L"buttonsecc";
			this->buttonsecc->Size = System::Drawing::Size(147, 28);
			this->buttonsecc->TabIndex = 3;
			this->buttonsecc->Text = L"Section C";
			this->buttonsecc->UseVisualStyleBackColor = true;
			this->buttonsecc->Click += gcnew System::EventHandler(this, &MyForm::buttonsecc_Click);
			// 
			// buttonseca
			// 
			this->buttonseca->Location = System::Drawing::Point(123, 102);
			this->buttonseca->Name = L"buttonseca";
			this->buttonseca->Size = System::Drawing::Size(147, 28);
			this->buttonseca->TabIndex = 2;
			this->buttonseca->Text = L"Section A";
			this->buttonseca->UseVisualStyleBackColor = true;
			this->buttonseca->Click += gcnew System::EventHandler(this, &MyForm::buttonseca_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(268, 58);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Please Selet One";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(227, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(158, 15);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Section Wise Timetable";
			// 
			// sectionshowpanel
			// 
			this->sectionshowpanel->Controls->Add(this->richTextBox1);
			this->sectionshowpanel->Controls->Add(this->button3);
			this->sectionshowpanel->Controls->Add(this->gobackbutton4);
			this->sectionshowpanel->Location = System::Drawing::Point(14, 8);
			this->sectionshowpanel->Name = L"sectionshowpanel";
			this->sectionshowpanel->Size = System::Drawing::Size(618, 331);
			this->sectionshowpanel->TabIndex = 11;
			this->sectionshowpanel->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(17, 13);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(363, 289);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(399, 271);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 31);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Save to file";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// gobackbutton4
			// 
			this->gobackbutton4->Location = System::Drawing::Point(503, 271);
			this->gobackbutton4->Name = L"gobackbutton4";
			this->gobackbutton4->Size = System::Drawing::Size(85, 31);
			this->gobackbutton4->TabIndex = 1;
			this->gobackbutton4->Text = L"Go Back";
			this->gobackbutton4->UseVisualStyleBackColor = true;
			this->gobackbutton4->Click += gcnew System::EventHandler(this, &MyForm::gobackbutton4_Click);
			// 
			// coursepanel
			// 
			this->coursepanel->Controls->Add(this->buttonecs);
			this->coursepanel->Controls->Add(this->buttonuq);
			this->coursepanel->Controls->Add(this->buttonis);
			this->coursepanel->Controls->Add(this->gobackbutton);
			this->coursepanel->Controls->Add(this->buttonise);
			this->coursepanel->Controls->Add(this->buttonla);
			this->coursepanel->Controls->Add(this->buttonooplab);
			this->coursepanel->Controls->Add(this->buttonds);
			this->coursepanel->Controls->Add(this->buttonoop);
			this->coursepanel->Controls->Add(this->label8);
			this->coursepanel->Controls->Add(this->label9);
			this->coursepanel->Location = System::Drawing::Point(15, 9);
			this->coursepanel->Name = L"coursepanel";
			this->coursepanel->Size = System::Drawing::Size(612, 328);
			this->coursepanel->TabIndex = 13;
			this->coursepanel->Visible = false;
			// 
			// buttonecs
			// 
			this->buttonecs->Location = System::Drawing::Point(337, 212);
			this->buttonecs->Name = L"buttonecs";
			this->buttonecs->Size = System::Drawing::Size(147, 28);
			this->buttonecs->TabIndex = 14;
			this->buttonecs->Text = L"ECS";
			this->buttonecs->UseVisualStyleBackColor = true;
			this->buttonecs->Click += gcnew System::EventHandler(this, &MyForm::buttonecs_Click);
			// 
			// buttonuq
			// 
			this->buttonuq->Location = System::Drawing::Point(123, 212);
			this->buttonuq->Name = L"buttonuq";
			this->buttonuq->Size = System::Drawing::Size(147, 28);
			this->buttonuq->TabIndex = 13;
			this->buttonuq->Text = L"UQ";
			this->buttonuq->UseVisualStyleBackColor = true;
			this->buttonuq->Click += gcnew System::EventHandler(this, &MyForm::buttonuq_Click);
			// 
			// buttonis
			// 
			this->buttonis->Location = System::Drawing::Point(337, 173);
			this->buttonis->Name = L"buttonis";
			this->buttonis->Size = System::Drawing::Size(147, 28);
			this->buttonis->TabIndex = 12;
			this->buttonis->Text = L"IS";
			this->buttonis->UseVisualStyleBackColor = true;
			this->buttonis->Click += gcnew System::EventHandler(this, &MyForm::buttonis_Click);
			// 
			// gobackbutton
			// 
			this->gobackbutton->Location = System::Drawing::Point(230, 256);
			this->gobackbutton->Name = L"gobackbutton";
			this->gobackbutton->Size = System::Drawing::Size(147, 28);
			this->gobackbutton->TabIndex = 10;
			this->gobackbutton->Text = L"Go Back";
			this->gobackbutton->UseVisualStyleBackColor = true;
			this->gobackbutton->Click += gcnew System::EventHandler(this, &MyForm::gobackbutton_Click);
			// 
			// buttonise
			// 
			this->buttonise->Location = System::Drawing::Point(337, 138);
			this->buttonise->Name = L"buttonise";
			this->buttonise->Size = System::Drawing::Size(147, 28);
			this->buttonise->TabIndex = 7;
			this->buttonise->Text = L"ISE";
			this->buttonise->UseVisualStyleBackColor = true;
			this->buttonise->Click += gcnew System::EventHandler(this, &MyForm::buttonise_Click);
			// 
			// buttonla
			// 
			this->buttonla->Location = System::Drawing::Point(337, 102);
			this->buttonla->Name = L"buttonla";
			this->buttonla->Size = System::Drawing::Size(147, 28);
			this->buttonla->TabIndex = 6;
			this->buttonla->Text = L"LA";
			this->buttonla->UseVisualStyleBackColor = true;
			this->buttonla->Click += gcnew System::EventHandler(this, &MyForm::buttonla_Click);
			// 
			// buttonooplab
			// 
			this->buttonooplab->Location = System::Drawing::Point(123, 175);
			this->buttonooplab->Name = L"buttonooplab";
			this->buttonooplab->Size = System::Drawing::Size(147, 28);
			this->buttonooplab->TabIndex = 4;
			this->buttonooplab->Text = L"OOP Lab";
			this->buttonooplab->UseVisualStyleBackColor = true;
			this->buttonooplab->Click += gcnew System::EventHandler(this, &MyForm::buttonooplab_Click);
			// 
			// buttonds
			// 
			this->buttonds->Location = System::Drawing::Point(123, 138);
			this->buttonds->Name = L"buttonds";
			this->buttonds->Size = System::Drawing::Size(147, 28);
			this->buttonds->TabIndex = 3;
			this->buttonds->Text = L"DS";
			this->buttonds->UseVisualStyleBackColor = true;
			this->buttonds->Click += gcnew System::EventHandler(this, &MyForm::buttonds_Click);
			// 
			// buttonoop
			// 
			this->buttonoop->Location = System::Drawing::Point(123, 102);
			this->buttonoop->Name = L"buttonoop";
			this->buttonoop->Size = System::Drawing::Size(147, 28);
			this->buttonoop->TabIndex = 2;
			this->buttonoop->Text = L"OOP";
			this->buttonoop->UseVisualStyleBackColor = true;
			this->buttonoop->Click += gcnew System::EventHandler(this, &MyForm::buttonoop_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(268, 58);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Please Selet One";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(227, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(155, 15);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Course Wise Timetable";
			// 
			// courseshowpanel
			// 
			this->courseshowpanel->Controls->Add(this->richTextBox2);
			this->courseshowpanel->Controls->Add(this->button4);
			this->courseshowpanel->Controls->Add(this->button5);
			this->courseshowpanel->Location = System::Drawing::Point(16, 10);
			this->courseshowpanel->Name = L"courseshowpanel";
			this->courseshowpanel->Size = System::Drawing::Size(618, 331);
			this->courseshowpanel->TabIndex = 11;
			this->courseshowpanel->Visible = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(17, 13);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(363, 289);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(399, 271);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 31);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Save to file";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(503, 271);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 31);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Go Back";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// roomshowpanel
			// 
			this->roomshowpanel->Controls->Add(this->richTextBox3);
			this->roomshowpanel->Controls->Add(this->button9);
			this->roomshowpanel->Controls->Add(this->button10);
			this->roomshowpanel->Location = System::Drawing::Point(18, 11);
			this->roomshowpanel->Name = L"roomshowpanel";
			this->roomshowpanel->Size = System::Drawing::Size(618, 331);
			this->roomshowpanel->TabIndex = 11;
			this->roomshowpanel->Visible = false;
			this->roomshowpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::roomshowpanel_Paint);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(17, 13);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(363, 289);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(399, 271);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(85, 31);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Save to file";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(503, 271);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(85, 31);
			this->button10->TabIndex = 1;
			this->button10->Text = L"Go Back";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// roompanel
			// 
			this->roompanel->Controls->Add(this->button11);
			this->roompanel->Controls->Add(this->button401);
			this->roompanel->Controls->Add(this->button418);
			this->roompanel->Controls->Add(this->button402);
			this->roompanel->Controls->Add(this->button419);
			this->roompanel->Controls->Add(this->button417);
			this->roompanel->Controls->Add(this->label10);
			this->roompanel->Controls->Add(this->label11);
			this->roompanel->ImeMode = System::Windows::Forms::ImeMode::On;
			this->roompanel->Location = System::Drawing::Point(17, 10);
			this->roompanel->Name = L"roompanel";
			this->roompanel->Size = System::Drawing::Size(612, 328);
			this->roompanel->TabIndex = 15;
			this->roompanel->Visible = false;
			this->roompanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::roompanel_Paint);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(230, 256);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(147, 28);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Go Back";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button401
			// 
			this->button401->Location = System::Drawing::Point(337, 138);
			this->button401->Name = L"button401";
			this->button401->Size = System::Drawing::Size(147, 28);
			this->button401->TabIndex = 7;
			this->button401->Text = L"Lab 4-01";
			this->button401->UseVisualStyleBackColor = true;
			this->button401->Click += gcnew System::EventHandler(this, &MyForm::button401_Click);
			// 
			// button418
			// 
			this->button418->Location = System::Drawing::Point(337, 102);
			this->button418->Name = L"button418";
			this->button418->Size = System::Drawing::Size(147, 28);
			this->button418->TabIndex = 6;
			this->button418->Text = L"Room 4-18";
			this->button418->UseVisualStyleBackColor = true;
			this->button418->Click += gcnew System::EventHandler(this, &MyForm::button418_Click);
			// 
			// button402
			// 
			this->button402->Location = System::Drawing::Point(230, 178);
			this->button402->Name = L"button402";
			this->button402->Size = System::Drawing::Size(147, 28);
			this->button402->TabIndex = 4;
			this->button402->Text = L"Lab 4-02";
			this->button402->UseVisualStyleBackColor = true;
			this->button402->Click += gcnew System::EventHandler(this, &MyForm::button402_Click);
			// 
			// button419
			// 
			this->button419->Location = System::Drawing::Point(123, 138);
			this->button419->Name = L"button419";
			this->button419->Size = System::Drawing::Size(147, 28);
			this->button419->TabIndex = 3;
			this->button419->Text = L"Room 4-19";
			this->button419->UseVisualStyleBackColor = true;
			this->button419->Click += gcnew System::EventHandler(this, &MyForm::button419_Click);
			// 
			// button417
			// 
			this->button417->Location = System::Drawing::Point(123, 102);
			this->button417->Name = L"button417";
			this->button417->Size = System::Drawing::Size(147, 28);
			this->button417->TabIndex = 2;
			this->button417->Text = L"Room 4-17";
			this->button417->UseVisualStyleBackColor = true;
			this->button417->Click += gcnew System::EventHandler(this, &MyForm::button417_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(268, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Please Selet One";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(227, 34);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(148, 15);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Room Wise Timetable";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 327);
			this->Controls->Add(this->sectionpanel);
			this->Controls->Add(this->sectionshowpanel);
			this->Controls->Add(this->teacherstshow);
			this->Controls->Add(this->courseshowpanel);
			this->Controls->Add(this->roompanel);
			this->Controls->Add(this->roomshowpanel);
			this->Controls->Add(this->coursepanel);
			this->Controls->Add(this->teacherpanel);
			this->Controls->Add(this->timetablemenu);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(630, 366);
			this->MinimumSize = System::Drawing::Size(630, 366);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->timetablemenu->ResumeLayout(false);
			this->timetablemenu->PerformLayout();
			this->teacherpanel->ResumeLayout(false);
			this->teacherpanel->PerformLayout();
			this->teacherstshow->ResumeLayout(false);
			this->sectionpanel->ResumeLayout(false);
			this->sectionpanel->PerformLayout();
			this->sectionshowpanel->ResumeLayout(false);
			this->coursepanel->ResumeLayout(false);
			this->coursepanel->PerformLayout();
			this->courseshowpanel->ResumeLayout(false);
			this->roomshowpanel->ResumeLayout(false);
			this->roompanel->ResumeLayout(false);
			this->roompanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		timetablemenu->Visible = true;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to exit?", "Bahria University", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	private: System::Void buttongoback_Click(System::Object^ sender, System::EventArgs^ e) {
		timetablemenu->Visible = false;
	}
	private: System::Void buttongobackteacherpanel_Click(System::Object^ sender, System::EventArgs^ e) {
		teacherpanel->Visible = false;
		teacherstshow->Visible = false;
		timetablemenu->Visible = true;
	}
	private: System::Void buttontt_Click(System::Object^ sender, System::EventArgs^ e) {
		teacherpanel->Visible = true;
		teacherstshow->Visible = false;
		timetablemenu->Visible = false;

	}
	private: System::Void teacherpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonstamim_Click(System::Object^ sender, System::EventArgs^ e) {
	teacherstshow->Visible = true;
	teacherpanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher

	timetable.filterByTeacher(timetable.getTeachers("Sir Tamim"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	label5->Text = outputText;

	}
private: System::Void teachershow_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void buttonsavetofile_Click(System::Object^ sender, System::EventArgs^ e) {
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Assuming buttonstamim is a System::Windows::Forms::Button^
	System::IntPtr hWndButton = buttonstamim->Handle; // Get handle to button

	// Convert System::String to std::string
	timetable.filterByTeacher(timetable.getTeachers("Sir Tamim"));
	std::cout << "\n\n";
	timetable.filterByTeacher(timetable.getTeachers("Sir Zubair Abbasi"));
	std::cout << "\n\n";
	timetable.filterByTeacher(timetable.getTeachers("Maam Sadaf Khalid"));
	std::cout << "\n\n";
	timetable.filterByTeacher(timetable.getTeachers("Sir Gulaam Qamar"));
	std::cout << "\n\n";
	timetable.filterByTeacher(timetable.getTeachers("Dr Awais Majeed"));
	std::cout << "\n\n";
	timetable.filterByTeacher(timetable.getTeachers("Sir Rahim Ullah"));
	std::cout << "\n\n";
	timetable.filterByTeacher(timetable.getTeachers("Sir Waleed"));
	std::cout << "\n\n";
	timetable.filterByTeacher(timetable.getTeachers("Sir Abdul Waheed"));
	std::cout << "\n\n";




	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label
	timetable.storeOutputToFile(output, "Teachers_TimeTable.txt");
}
private: System::Void buttongobacklast_Click(System::Object^ sender, System::EventArgs^ e) {
	teacherstshow->Visible = false;	
	timetablemenu->Visible = false;

	teacherpanel->Visible = true;
}
private: System::Void buttonsza_Click(System::Object^ sender, System::EventArgs^ e) {
	teacherstshow->Visible = true;
	teacherpanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher

	timetable.filterByTeacher(timetable.getTeachers("Sir Zubair Abbasi"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	label5->Text = outputText;

}
private: System::Void buttonmsk_Click(System::Object^ sender, System::EventArgs^ e) {
	teacherstshow->Visible = true;
	teacherpanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher

	timetable.filterByTeacher(timetable.getTeachers("Maam Sadaf Khalid"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	label5->Text = outputText;
}
private: System::Void buttonsgq_Click(System::Object^ sender, System::EventArgs^ e) {
	teacherstshow->Visible = true;
	teacherpanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher

	timetable.filterByTeacher(timetable.getTeachers("Sir Gulaam Qamar"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	label5->Text = outputText;
}
private: System::Void buttondam_Click(System::Object^ sender, System::EventArgs^ e) {
	teacherstshow->Visible = true;
	teacherpanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher

	timetable.filterByTeacher(timetable.getTeachers("Sir Awais Majeed"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	label5->Text = outputText;
}
private: System::Void buttonsru_Click(System::Object^ sender, System::EventArgs^ e) {
	teacherstshow->Visible = true;
	teacherpanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher

	timetable.filterByTeacher(timetable.getTeachers("Sir Rahim Ullah"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	label5->Text = outputText;
}
private: System::Void buttonsw_Click(System::Object^ sender, System::EventArgs^ e) {
	teacherstshow->Visible = true;
	teacherpanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher

	timetable.filterByTeacher(timetable.getTeachers("Sir Waleed"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	label5->Text = outputText;
}
private: System::Void buttonsaw_Click(System::Object^ sender, System::EventArgs^ e) {
	teacherstshow->Visible = true;
	teacherpanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher

	timetable.filterByTeacher(timetable.getTeachers("Sir Abdul Waheed"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	label5->Text = outputText;
}
private: System::Void buttongoback23_Click(System::Object^ sender, System::EventArgs^ e) {
	sectionpanel->Visible = false;
	timetablemenu->Visible = true;
	sectionshowpanel->Visible = false;

}
private: System::Void buttonseca_Click(System::Object^ sender, System::EventArgs^ e) {
	sectionshowpanel->Visible = true;
	sectionpanel->Visible = false;

	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	Section& section = timetable.getSectionss("Section A");
	timetable.filterBySection(section);
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox1->Text = outputText;

}
private: System::Void gobackbutton4_Click(System::Object^ sender, System::EventArgs^ e) {
	sectionshowpanel->Visible = false;
	timetablemenu->Visible = false;

	sectionpanel->Visible = true;

}
private: System::Void buttonsecb_Click(System::Object^ sender, System::EventArgs^ e) {
	sectionshowpanel->Visible = true;
	sectionpanel->Visible = false;

	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	Section& section = timetable.getSectionss("Section B");
	timetable.filterBySection(section);
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox1->Text = outputText;

}
private: System::Void buttonsecc_Click(System::Object^ sender, System::EventArgs^ e) {
	sectionshowpanel->Visible = true;
	sectionpanel->Visible = false;

	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	Section& section = timetable.getSectionss("Section C");
	timetable.filterBySection(section);
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox1->Text = outputText;

}
private: System::Void buttonsecd_Click(System::Object^ sender, System::EventArgs^ e) {
	sectionshowpanel->Visible = true;
	sectionpanel->Visible = false;

	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	Section& section = timetable.getSectionss("Section D");
	timetable.filterBySection(section);
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox1->Text = outputText;

}
private: System::Void buttonsece_Click(System::Object^ sender, System::EventArgs^ e) {
	sectionshowpanel->Visible = true;
	sectionpanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	Section& section = timetable.getSectionss("Section E");
	timetable.filterBySection(section);
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox1->Text = outputText;

}
private: System::Void buttonst_Click(System::Object^ sender, System::EventArgs^ e) {
	sectionpanel->Visible = true;
	timetablemenu->Visible = false;

	sectionshowpanel->Visible = false;
}
private: System::Void buttonooplab_Click(System::Object^ sender, System::EventArgs^ e) {
	courseshowpanel->Visible = true;
	coursepanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByCourse(timetable.getCourses("OOP Lab"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox2->Text = outputText;


}
private: System::Void gobackbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	coursepanel->Visible = false;
	timetablemenu->Visible = true;

	courseshowpanel->Visible = false;
}
private: System::Void buttonoop_Click(System::Object^ sender, System::EventArgs^ e) {
	courseshowpanel->Visible = true;
	coursepanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByCourse(timetable.getCourses("Object Oriented Programming"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox2->Text = outputText;

}
private: System::Void buttonla_Click(System::Object^ sender, System::EventArgs^ e) {
	courseshowpanel->Visible = true;
	coursepanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByCourse(timetable.getCourses("Linear Algebra"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox2->Text = outputText;

}
private: System::Void buttonds_Click(System::Object^ sender, System::EventArgs^ e) {
	courseshowpanel->Visible = true;
	coursepanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByCourse(timetable.getCourses("Discrete Structures"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox2->Text = outputText;

}
private: System::Void buttonise_Click(System::Object^ sender, System::EventArgs^ e) {
	courseshowpanel->Visible = true;
	coursepanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByCourse(timetable.getCourses("Introduction to Software Engineering"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox2->Text = outputText;

}

private: System::Void buttonis_Click(System::Object^ sender, System::EventArgs^ e) {
	courseshowpanel->Visible = true;
	coursepanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByCourse(timetable.getCourses("Islamic Studies"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox2->Text = outputText;

}
private: System::Void buttonuq_Click(System::Object^ sender, System::EventArgs^ e) {
	courseshowpanel->Visible = true;
	coursepanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByCourse(timetable.getCourses("Understanding Quran"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox2->Text = outputText;

}
private: System::Void buttonecs_Click(System::Object^ sender, System::EventArgs^ e) {
	courseshowpanel->Visible = true;
	coursepanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByCourse(timetable.getCourses("Effective Communication Skills"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox2->Text = outputText;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	courseshowpanel->Visible = false;
	timetablemenu->Visible = false;

	coursepanel->Visible = true;
}
private: System::Void buttonct_Click(System::Object^ sender, System::EventArgs^ e) {
	coursepanel->Visible = true;
	timetablemenu->Visible = false;

	courseshowpanel->Visible = false;
}
private: System::Void buttonrt_Click(System::Object^ sender, System::EventArgs^ e) {
	roompanel->Visible = true;
	timetablemenu->Visible = false;

	roomshowpanel->Visible = false;
}
private: System::Void button418_Click(System::Object^ sender, System::EventArgs^ e) {
	roomshowpanel->Visible = true;
	roompanel -> Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByRoom(timetable.getRooms("Room 4-18"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox3->Text = outputText;

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	roompanel -> Visible = false;
	timetablemenu->Visible = true;

	roomshowpanel->Visible = false;
}
private: System::Void button417_Click(System::Object^ sender, System::EventArgs^ e) {
	roomshowpanel->Visible = true;
	roompanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByRoom(timetable.getRooms("Room 4-17"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox3->Text = outputText;

}
private: System::Void button419_Click(System::Object^ sender, System::EventArgs^ e) {
	roomshowpanel->Visible = true;
	roompanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByRoom(timetable.getRooms("Room 4-19"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox3->Text = outputText;

}
private: System::Void button401_Click(System::Object^ sender, System::EventArgs^ e) {
	roomshowpanel->Visible = true;
	roompanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByRoom(timetable.getRooms("Lab 4-01"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox3->Text = outputText;

}
private: System::Void button402_Click(System::Object^ sender, System::EventArgs^ e) {
	roomshowpanel->Visible = true;
	roompanel->Visible = false;
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Call your function
	// Filter by teacher
	timetable.filterByRoom(timetable.getRooms("Lab 4-02"));
	std::cout << "\n\n\n";// Assuming your function prints output using cout

	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label5
	richTextBox3->Text = outputText;

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	roomshowpanel->Visible = false;
	timetablemenu->Visible = false;

	roompanel->Visible = true;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Assuming buttonstamim is a System::Windows::Forms::Button^
	System::IntPtr hWndButton = buttonstamim->Handle; // Get handle to button

	// Convert System::String to std::string
	timetable.filterByRoom(timetable.getRooms("Lab 4-01"));	
	std::cout << "\n\n";
	timetable.filterByRoom(timetable.getRooms("Lab 4-02"));
	std::cout << "\n\n";
	timetable.filterByRoom(timetable.getRooms("Room 4-17"));
	std::cout << "\n\n";
	timetable.filterByRoom(timetable.getRooms("Room 4-18"));
	std::cout << "\n\n";
	timetable.filterByRoom(timetable.getRooms("Room 4-19"));
	std::cout << "\n\n";




	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label
	timetable.storeOutputToFile(output, "Room_TimeTable.txt");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Assuming buttonstamim is a System::Windows::Forms::Button^
	System::IntPtr hWndButton = buttonstamim->Handle; // Get handle to button

	// Convert System::String to std::string
	timetable.filterByCourse(timetable.getCourses("Object Oriented Programming"));
	std::cout << "\n\n";
	timetable.filterByCourse(timetable.getCourses("Linear Algebra"));
	std::cout << "\n\n";
	timetable.filterByCourse(timetable.getCourses("Discrete Structures"));
	std::cout << "\n\n";
	timetable.filterByCourse(timetable.getCourses("Effective Communication Skills"));
	std::cout << "\n\n";
	timetable.filterByCourse(timetable.getCourses("Introduction to Software Engineering"));
	std::cout << "\n\n";
	timetable.filterByCourse(timetable.getCourses("Islamic Studies"));
	std::cout << "\n\n";
	timetable.filterByCourse(timetable.getCourses("OOP Lab"));
	std::cout << "\n\n";
	timetable.filterByCourse(timetable.getCourses("Understanding Quran"));
	std::cout << "\n\n";



	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label
	timetable.storeOutputToFile(output, "Course_TimeTable.txt");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Timetable timetable = Timetable::runitfinally();
	// Redirect cout to a stringstream
	std::ostringstream oss;
	std::streambuf* coutBuffer = std::cout.rdbuf(oss.rdbuf());

	// Assuming buttonstamim is a System::Windows::Forms::Button^
	System::IntPtr hWndButton = buttonstamim->Handle; // Get handle to button

	// Convert System::String to std::string
	Section& section1 = timetable.getSectionss("Section A");
	timetable.filterBySection(section1);
	std::cout << "\n\n";

	// Convert System::String to std::string
	Section& section2 = timetable.getSectionss("Section B");
	timetable.filterBySection(section2);
	std::cout << "\n\n";


	// Convert System::String to std::string
	Section& section3 = timetable.getSectionss("Section C");
	timetable.filterBySection(section3);
	std::cout << "\n\n";

	// Convert System::String to std::string
	Section& section4 = timetable.getSectionss("Section D");
	timetable.filterBySection(section4);
	std::cout << "\n\n";

	// Convert System::String to std::string
	Section& section5 = timetable.getSectionss("Section E");
	timetable.filterBySection(section5);
	std::cout << "\n\n";





	// Restore cout
	std::cout.rdbuf(coutBuffer);

	// Get the output from stringstream
	std::string output = oss.str();

	// Convert the output string to System::String^
	String^ outputText = gcnew String(output.c_str());

	// Set the text of label
	timetable.storeOutputToFile(output, "Course_TimeTable.txt");
}
private: System::Void roomshowpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void roompanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}

};
}


