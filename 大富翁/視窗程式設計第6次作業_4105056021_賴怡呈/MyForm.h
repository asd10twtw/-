#pragma once
#include "MyForm1.h"

namespace �����{���]�p��6���@�~_4105056021_��ɧe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm ���K�n
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"�رd�ɫF�y", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(12, 612);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"���H�C��";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"�رd�ɫF�y", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(244, 612);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�T�H�C��";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"�رd�ɫF�y", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(480, 612);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 46);
			this->button3->TabIndex = 2;
			this->button3->Text = L"�|�H�C��";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"�رd�ɫF�y", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(713, 612);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(159, 46);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Ū�����";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(884, 670);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�j�I��";
			this->ResumeLayout(false);

		}
#pragma endregion
		//���H�C��
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm1^ f = gcnew MyForm1();
		f->player = 2;
		f->StartPosition = FormStartPosition::CenterParent;
		MessageBox::Show("�Х���J�ϥΪ̦W�٦A�}�l���C��(��GO)", "START");
		this->Visible = false;
		f->menuStrip1->Enabled = false;
		f->ShowDialog(this);
		
		if (f->DialogResult == System::Windows::Forms::DialogResult::Cancel)
		{
			//�Y�ϥΪ̦bForm1�����I��X���������A�|�i�J�o�ӧP�_��
			this->Close();
		}
		
	}
//�T�H�C��
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1^ f = gcnew MyForm1();
	f->player = 3;
	f->StartPosition = FormStartPosition::CenterParent;
	MessageBox::Show("�Х���J�ϥΪ̦W�٦A�}�l���C��(��GO)", "START");
	this->Visible = false;
	f->menuStrip1->Enabled = false;
	f->ShowDialog(this);

	if (f->DialogResult == System::Windows::Forms::DialogResult::Cancel)
	{
		//�Y�ϥΪ̦bForm1�����I��X���������A�|�i�J�o�ӧP�_��
		this->Close();
	}
}
//�|�H�C��
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1^ f = gcnew MyForm1();
	f->player = 4;
	f->StartPosition = FormStartPosition::CenterParent;
	MessageBox::Show("�Х���J�ϥΪ̦W�٦A�}�l���C��(��GO)" , "START");
	this->Visible = false;
	f->menuStrip1->Enabled = false;
	//f->button1->Enabled = false;
	f->ShowDialog(this);

	if (f->DialogResult == System::Windows::Forms::DialogResult::Cancel)
	{
		//�Y�ϥΪ̦bForm1�����I��X���������A�|�i�J�o�ӧP�_��
		this->Close();
	}
}
//Ū��
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	
	MyForm1^ f = gcnew MyForm1();
	f->play(3);
	f->StartPosition = FormStartPosition::CenterParent;
	//this->TopMost = true;  // �]�w���̤W�h���
	this->Visible = false;
	f->ShowDialog(this);
	
	if (f->DialogResult == System::Windows::Forms::DialogResult::Cancel)
	{
		//�Y�ϥΪ̦bForm1�����I��X���������A�|�i�J�o�ӧP�_��
		this->Close();
	}
}
};
}
