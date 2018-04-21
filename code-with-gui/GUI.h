#pragma once

#include "Functions.h"

namespace GUICS205 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::ListBox^  startFrom;
	private: System::Windows::Forms::Label^  startHereText;
	private: System::Windows::Forms::ListBox^  endHere;
	private: System::Windows::Forms::Label^  endHereText;
	private: System::Windows::Forms::Button^  sendInformation;
	private: System::Windows::Forms::Button^  h1;
	private: System::Windows::Forms::Button^  h5;
	private: System::Windows::Forms::Button^  h6;
	private: System::Windows::Forms::Button^  h7;
	private: System::Windows::Forms::Button^  h9;
	private: System::Windows::Forms::Button^  h10;
	private: System::Windows::Forms::Button^  h13;
	private: System::Windows::Forms::Button^  h15;
	private: System::Windows::Forms::Button^  h18;
	private: System::Windows::Forms::Button^  h23;
	private: System::Windows::Forms::Button^  h40;
	private: System::Windows::Forms::Button^  h42;
	private: System::Windows::Forms::Button^  h24;
	private: System::Windows::Forms::Button^  h25;
	private: System::Windows::Forms::Button^  h28;
	private: System::Windows::Forms::Button^  h30;
	private: System::Windows::Forms::Button^  h31;
	private: System::Windows::Forms::Button^  h37;
	private: System::Windows::Forms::Button^  h38;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->startFrom = (gcnew System::Windows::Forms::ListBox());
			this->startHereText = (gcnew System::Windows::Forms::Label());
			this->endHere = (gcnew System::Windows::Forms::ListBox());
			this->endHereText = (gcnew System::Windows::Forms::Label());
			this->sendInformation = (gcnew System::Windows::Forms::Button());
			this->h1 = (gcnew System::Windows::Forms::Button());
			this->h5 = (gcnew System::Windows::Forms::Button());
			this->h6 = (gcnew System::Windows::Forms::Button());
			this->h7 = (gcnew System::Windows::Forms::Button());
			this->h9 = (gcnew System::Windows::Forms::Button());
			this->h10 = (gcnew System::Windows::Forms::Button());
			this->h13 = (gcnew System::Windows::Forms::Button());
			this->h15 = (gcnew System::Windows::Forms::Button());
			this->h18 = (gcnew System::Windows::Forms::Button());
			this->h23 = (gcnew System::Windows::Forms::Button());
			this->h40 = (gcnew System::Windows::Forms::Button());
			this->h42 = (gcnew System::Windows::Forms::Button());
			this->h24 = (gcnew System::Windows::Forms::Button());
			this->h25 = (gcnew System::Windows::Forms::Button());
			this->h28 = (gcnew System::Windows::Forms::Button());
			this->h30 = (gcnew System::Windows::Forms::Button());
			this->h31 = (gcnew System::Windows::Forms::Button());
			this->h37 = (gcnew System::Windows::Forms::Button());
			this->h38 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(23, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(921, 711);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// startFrom
			// 
			this->startFrom->FormattingEnabled = true;
			this->startFrom->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"CL 105", L"CL 109", L"CL 110", L"CL 112", L"CL 115",
					L"CL 125", L"CL 126", L"CL 127", L"CL 128", L"CL 130", L"CL 135", L"CL 135.4", L"CL 136"
			});
			this->startFrom->Location = System::Drawing::Point(968, 55);
			this->startFrom->Name = L"startFrom";
			this->startFrom->Size = System::Drawing::Size(140, 43);
			this->startFrom->TabIndex = 3;
			// 
			// startHereText
			// 
			this->startHereText->AutoSize = true;
			this->startHereText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->startHereText->Location = System::Drawing::Point(964, 32);
			this->startHereText->Name = L"startHereText";
			this->startHereText->Size = System::Drawing::Size(139, 20);
			this->startHereText->TabIndex = 4;
			this->startHereText->Text = L"Start from Here:";
			// 
			// endHere
			// 
			this->endHere->FormattingEnabled = true;
			this->endHere->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"CL 105", L"CL 109", L"CL 110", L"CL 112", L"CL 115",
					L"CL 125", L"CL 126", L"CL 127", L"CL 128", L"CL 130", L"CL 135", L"CL 135.4", L"CL 136"
			});
			this->endHere->Location = System::Drawing::Point(1157, 55);
			this->endHere->Name = L"endHere";
			this->endHere->Size = System::Drawing::Size(140, 43);
			this->endHere->TabIndex = 5;
			// 
			// endHereText
			// 
			this->endHereText->AutoSize = true;
			this->endHereText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->endHereText->Location = System::Drawing::Point(1153, 32);
			this->endHereText->Name = L"endHereText";
			this->endHereText->Size = System::Drawing::Size(104, 20);
			this->endHereText->TabIndex = 6;
			this->endHereText->Text = L"Arrive Here:";
			// 
			// sendInformation
			// 
			this->sendInformation->Location = System::Drawing::Point(1217, 131);
			this->sendInformation->Name = L"sendInformation";
			this->sendInformation->Size = System::Drawing::Size(80, 34);
			this->sendInformation->TabIndex = 7;
			this->sendInformation->Text = L"Go!";
			this->sendInformation->UseVisualStyleBackColor = true;
			this->sendInformation->Click += gcnew System::EventHandler(this, &GUI::sendInformation_Click);
			// 
			// h1
			// 
			this->h1->BackColor = System::Drawing::SystemColors::Control;
			this->h1->Location = System::Drawing::Point(260, 168);
			this->h1->Name = L"h1";
			this->h1->Size = System::Drawing::Size(108, 42);
			this->h1->TabIndex = 8;
			this->h1->Text = L"   ";
			this->h1->UseVisualStyleBackColor = false;
			// 
			// h5
			// 
			this->h5->BackColor = System::Drawing::SystemColors::Control;
			this->h5->Location = System::Drawing::Point(367, 167);
			this->h5->Name = L"h5";
			this->h5->Size = System::Drawing::Size(60, 88);
			this->h5->TabIndex = 9;
			this->h5->Text = L"    ";
			this->h5->UseVisualStyleBackColor = false;
			// 
			// h6
			// 
			this->h6->BackColor = System::Drawing::SystemColors::Control;
			this->h6->Location = System::Drawing::Point(367, 254);
			this->h6->Name = L"h6";
			this->h6->Size = System::Drawing::Size(56, 23);
			this->h6->TabIndex = 10;
			this->h6->Text = L"    ";
			this->h6->UseVisualStyleBackColor = false;
			// 
			// h7
			// 
			this->h7->BackColor = System::Drawing::SystemColors::Control;
			this->h7->Location = System::Drawing::Point(367, 276);
			this->h7->Name = L"h7";
			this->h7->Size = System::Drawing::Size(55, 125);
			this->h7->TabIndex = 11;
			this->h7->Text = L"   ";
			this->h7->UseVisualStyleBackColor = false;
			// 
			// h9
			// 
			this->h9->BackColor = System::Drawing::SystemColors::Control;
			this->h9->Location = System::Drawing::Point(371, 400);
			this->h9->Name = L"h9";
			this->h9->Size = System::Drawing::Size(50, 59);
			this->h9->TabIndex = 12;
			this->h9->Text = L"    ";
			this->h9->UseVisualStyleBackColor = false;
			// 
			// h10
			// 
			this->h10->BackColor = System::Drawing::SystemColors::Control;
			this->h10->Location = System::Drawing::Point(371, 458);
			this->h10->Name = L"h10";
			this->h10->Size = System::Drawing::Size(52, 194);
			this->h10->TabIndex = 13;
			this->h10->Text = L"    ";
			this->h10->UseVisualStyleBackColor = false;
			// 
			// h13
			// 
			this->h13->BackColor = System::Drawing::SystemColors::Control;
			this->h13->Location = System::Drawing::Point(370, 651);
			this->h13->Name = L"h13";
			this->h13->Size = System::Drawing::Size(181, 54);
			this->h13->TabIndex = 14;
			this->h13->Text = L"     ";
			this->h13->UseVisualStyleBackColor = false;
			// 
			// h15
			// 
			this->h15->BackColor = System::Drawing::SystemColors::Control;
			this->h15->Location = System::Drawing::Point(551, 648);
			this->h15->Name = L"h15";
			this->h15->Size = System::Drawing::Size(67, 56);
			this->h15->TabIndex = 16;
			this->h15->Text = L"    ";
			this->h15->UseVisualStyleBackColor = false;
			// 
			// h18
			// 
			this->h18->BackColor = System::Drawing::SystemColors::Control;
			this->h18->Location = System::Drawing::Point(613, 651);
			this->h18->Name = L"h18";
			this->h18->Size = System::Drawing::Size(169, 53);
			this->h18->TabIndex = 17;
			this->h18->Text = L"    ";
			this->h18->UseVisualStyleBackColor = false;
			// 
			// h23
			// 
			this->h23->BackColor = System::Drawing::SystemColors::Control;
			this->h23->Location = System::Drawing::Point(752, 602);
			this->h23->Name = L"h23";
			this->h23->Size = System::Drawing::Size(26, 49);
			this->h23->TabIndex = 18;
			this->h23->Text = L"    ";
			this->h23->UseVisualStyleBackColor = false;
			// 
			// h40
			// 
			this->h40->BackColor = System::Drawing::SystemColors::Control;
			this->h40->Location = System::Drawing::Point(420, 404);
			this->h40->Name = L"h40";
			this->h40->Size = System::Drawing::Size(46, 54);
			this->h40->TabIndex = 19;
			this->h40->Text = L"    ";
			this->h40->UseVisualStyleBackColor = false;
			// 
			// h42
			// 
			this->h42->BackColor = System::Drawing::SystemColors::Control;
			this->h42->Location = System::Drawing::Point(465, 401);
			this->h42->Name = L"h42";
			this->h42->Size = System::Drawing::Size(92, 56);
			this->h42->TabIndex = 20;
			this->h42->Text = L"    ";
			this->h42->UseVisualStyleBackColor = false;
			// 
			// h24
			// 
			this->h24->BackColor = System::Drawing::SystemColors::Control;
			this->h24->Location = System::Drawing::Point(752, 516);
			this->h24->Name = L"h24";
			this->h24->Size = System::Drawing::Size(34, 86);
			this->h24->TabIndex = 21;
			this->h24->Text = L"    ";
			this->h24->UseVisualStyleBackColor = false;
			// 
			// h25
			// 
			this->h25->BackColor = System::Drawing::SystemColors::Control;
			this->h25->Location = System::Drawing::Point(752, 428);
			this->h25->Name = L"h25";
			this->h25->Size = System::Drawing::Size(31, 88);
			this->h25->TabIndex = 22;
			this->h25->Text = L"   ";
			this->h25->UseVisualStyleBackColor = false;
			// 
			// h28
			// 
			this->h28->BackColor = System::Drawing::SystemColors::Control;
			this->h28->Location = System::Drawing::Point(752, 342);
			this->h28->Name = L"h28";
			this->h28->Size = System::Drawing::Size(33, 86);
			this->h28->TabIndex = 23;
			this->h28->Text = L"    ";
			this->h28->UseVisualStyleBackColor = false;
			// 
			// h30
			// 
			this->h30->BackColor = System::Drawing::SystemColors::Control;
			this->h30->Location = System::Drawing::Point(752, 256);
			this->h30->Name = L"h30";
			this->h30->Size = System::Drawing::Size(32, 86);
			this->h30->TabIndex = 24;
			this->h30->Text = L"    ";
			this->h30->UseVisualStyleBackColor = false;
			// 
			// h31
			// 
			this->h31->BackColor = System::Drawing::SystemColors::Control;
			this->h31->Location = System::Drawing::Point(535, 255);
			this->h31->Name = L"h31";
			this->h31->Size = System::Drawing::Size(214, 21);
			this->h31->TabIndex = 25;
			this->h31->Text = L"    ";
			this->h31->UseVisualStyleBackColor = false;
			// 
			// h37
			// 
			this->h37->BackColor = System::Drawing::SystemColors::Control;
			this->h37->Location = System::Drawing::Point(523, 256);
			this->h37->Name = L"h37";
			this->h37->Size = System::Drawing::Size(12, 19);
			this->h37->TabIndex = 26;
			this->h37->Text = L"    ";
			this->h37->UseVisualStyleBackColor = false;
			// 
			// h38
			// 
			this->h38->BackColor = System::Drawing::SystemColors::Control;
			this->h38->Location = System::Drawing::Point(427, 255);
			this->h38->Name = L"h38";
			this->h38->Size = System::Drawing::Size(96, 19);
			this->h38->TabIndex = 27;
			this->h38->Text = L"    ";
			this->h38->UseVisualStyleBackColor = false;
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1330, 728);
			this->Controls->Add(this->h38);
			this->Controls->Add(this->h37);
			this->Controls->Add(this->h31);
			this->Controls->Add(this->h30);
			this->Controls->Add(this->h28);
			this->Controls->Add(this->h25);
			this->Controls->Add(this->h24);
			this->Controls->Add(this->h42);
			this->Controls->Add(this->h40);
			this->Controls->Add(this->h23);
			this->Controls->Add(this->h18);
			this->Controls->Add(this->h15);
			this->Controls->Add(this->h13);
			this->Controls->Add(this->h10);
			this->Controls->Add(this->h9);
			this->Controls->Add(this->h7);
			this->Controls->Add(this->h6);
			this->Controls->Add(this->h5);
			this->Controls->Add(this->h1);
			this->Controls->Add(this->sendInformation);
			this->Controls->Add(this->endHereText);
			this->Controls->Add(this->endHere);
			this->Controls->Add(this->startHereText);
			this->Controls->Add(this->startFrom);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"GUI";
			this->Text = L"GUI";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void sendInformation_Click(System::Object^  sender, System::EventArgs^  e) {

	Object^ start;
	Object^ end;

	string names[50];

	start = this->startFrom->SelectedItem::get();
	end = this->endHere->SelectedItem::get();

	runProgram(start, end, names);

	int x = 0;

	while (names[x + 1] != "")
	{
		if (names[x] == "h1")
		{
			this->h1->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h5")
		{
			this->h5->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h6")
		{
			this->h6->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h7")
		{
			this->h7->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h9")
		{
			this->h9->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h10")
		{
			this->h10->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h13")
		{
			this->h13->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h15")
		{
			this->h15->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h18")
		{
			this->h18->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h23")
		{
			this->h23->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h24")
		{
			this->h24->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h25")
		{
			this->h25->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h28")
		{
			this->h28->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h30")
		{
			this->h30->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h31")
		{
			this->h31->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h37")
		{
			this->h37->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h38")
		{
			this->h38->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h40")
		{
			this->h40->BackColor = System::Drawing::Color::Red;
		}
		else if (names[x] == "h42")
		{
			this->h42->BackColor = System::Drawing::Color::Red;
		}
		x++;

		
	}


	MessageBox::Show("Done!");
}
};
}
