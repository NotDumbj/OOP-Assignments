#pragma once

namespace OOPAssignment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ShowWin
	/// </summary>
	public ref class ShowWin : public System::Windows::Forms::Form
	{
	public:
		ShowWin(void)
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
		~ShowWin()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::RichTextBox^ showbox;
	private: System::Windows::Forms::Button^ button1;
	public:
	public:
	protected:


		 
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
			this->showbox = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// showbox
			// 
			this->showbox->Location = System::Drawing::Point(128, 30);
			this->showbox->Name = L"showbox";
			this->showbox->Size = System::Drawing::Size(688, 447);
			this->showbox->TabIndex = 0;
			this->showbox->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(392, 496);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ShowWin::button1_Click);
			// 
			// ShowWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(965, 557);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->showbox);
			this->Name = L"ShowWin";
			this->Text = L"ShowWin";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowWin::Close();
	}
	};
}
