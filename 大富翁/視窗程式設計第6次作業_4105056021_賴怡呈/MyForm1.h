#pragma once
#include <windows.h>
#include <stdio.h>
#include "addmoney.h"
#include "move.h"

namespace 視窗程式設計第6次作業_4105056021_賴怡呈 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	using namespace System::Windows;

	/// <summary>
	/// MyForm1 的摘要
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		int^ player = gcnew int(0);
		String^ hou1 = gcnew String("#");
		String^ hou2 = gcnew String("^ ^");
		String^ hou3 = gcnew String("*-*");
		int^ j = gcnew int(0);
		int^ k = gcnew int(0);
		int^ u = gcnew int(0);
		int^ turn = gcnew int(0);
		int^ check = gcnew int(0);
		String^ s = gcnew String("");
		String^ path = gcnew String("");
		//String^ event = gcnew String("");
		String^ yorn = gcnew String("");//yes or no
		String^ name = gcnew String("");
		int^ dice = gcnew int(0);
		int^ card = gcnew int(0);
		int ^ i = gcnew int(0);
		array<String^>^ user = gcnew array<String^>(4);
		array<int>^ st = gcnew array<int>(4);
		array<int>^ m = gcnew array<int>(4);
		array<int>^ l = gcnew array<int>(4);
		array<String^>^ sit = gcnew array<String^>(4);//sit-site
		array<double>^ money = gcnew array<double>(4);
		array<int>^ nowloc = gcnew array<int>(4);
		//初始地點
		array<String^>^ site;
		//第一棟房子價錢
		array<int>^ house1price;
		//第二棟房子價錢
		array<int>^ house2price;
		//第三棟房子價錢
		array<int>^ house3price;
		//土地價錢
		array<int>^ price;
		//初始土地狀況(0~4)0-無
		array<int>^ house = gcnew array<int>(32);
		//紀錄土地有無玩家購買(0~4)0-無
		array<int>^ houseuser = gcnew array<int>(32);
		int^ whichplayer = gcnew int(0);	//(1~4)
		double^ addhow = gcnew double(0);
	public: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  作弊ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  增加金錢ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  決定移動步數ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	public:
		array<String^>^ playername = gcnew array<String^>(4);

	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
			initial();
			textBox1->Text = "請輸入使用者名字，即為檔案名稱:(不要輸入空格)";
			textBox3->Visible = true;
			button8->Visible = true;
			this->TopMost = false;
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;



	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::TextBox^  textBox45;
	private: System::Windows::Forms::TextBox^  textBox46;
	private: System::Windows::Forms::TextBox^  textBox47;
	private: System::Windows::Forms::TextBox^  textBox48;
	private: System::Windows::Forms::TextBox^  textBox49;
	private: System::Windows::Forms::TextBox^  textBox50;
	private: System::Windows::Forms::TextBox^  textBox51;
	private: System::Windows::Forms::TextBox^  textBox52;
	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::TextBox^  textBox54;
	private: System::Windows::Forms::TextBox^  textBox55;
	private: System::Windows::Forms::TextBox^  textBox56;
	private: System::Windows::Forms::TextBox^  textBox57;
	private: System::Windows::Forms::TextBox^  textBox58;
	private: System::Windows::Forms::TextBox^  textBox59;
	private: System::Windows::Forms::TextBox^  textBox60;
	private: System::Windows::Forms::TextBox^  textBox61;
	private: System::Windows::Forms::TextBox^  textBox62;
	private: System::Windows::Forms::TextBox^  textBox63;
	private: System::Windows::Forms::TextBox^  textBox64;
	private: System::Windows::Forms::TextBox^  textBox65;
	private: System::Windows::Forms::TextBox^  textBox66;
	private: System::Windows::Forms::Button^  button8;




	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->作弊ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->增加金錢ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->決定移動步數ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(0, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 95);
			this->label1->TabIndex = 0;
			this->label1->Text = L"start";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::PowderBlue;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label2->Location = System::Drawing::Point(82, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 95);
			this->label2->TabIndex = 1;
			this->label2->Text = L"高樹";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::PowderBlue;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label3->Location = System::Drawing::Point(162, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 95);
			this->label3->TabIndex = 2;
			this->label3->Text = L"三地門";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::PowderBlue;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label4->Location = System::Drawing::Point(242, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 95);
			this->label4->TabIndex = 3;
			this->label4->Text = L"霧台";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::PowderBlue;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label5->Location = System::Drawing::Point(322, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 95);
			this->label5->TabIndex = 4;
			this->label5->Text = L"九如";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::PowderBlue;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label6->Location = System::Drawing::Point(402, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 95);
			this->label6->TabIndex = 5;
			this->label6->Text = L"鹽埔";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::PowderBlue;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label7->Location = System::Drawing::Point(482, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 95);
			this->label7->TabIndex = 6;
			this->label7->Text = L"屏東";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::PowderBlue;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label8->Location = System::Drawing::Point(562, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 95);
			this->label8->TabIndex = 7;
			this->label8->Text = L"長治";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::PowderBlue;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label9->Location = System::Drawing::Point(642, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 95);
			this->label9->TabIndex = 8;
			this->label9->Text = L"內埔";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::PowderBlue;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label10->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label10->Location = System::Drawing::Point(722, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 95);
			this->label10->TabIndex = 9;
			this->label10->Text = L"麟洛";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::PowderBlue;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label11->Location = System::Drawing::Point(802, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 95);
			this->label11->TabIndex = 10;
			this->label11->Text = L"瑪家";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::PowderBlue;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label12->Location = System::Drawing::Point(802, 119);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 96);
			this->label12->TabIndex = 11;
			this->label12->Text = L"萬巒";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label13->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label13->Location = System::Drawing::Point(802, 215);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(82, 96);
			this->label13->TabIndex = 12;
			this->label13->Text = L"命運";
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::PowderBlue;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label14->Location = System::Drawing::Point(802, 311);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 96);
			this->label14->TabIndex = 13;
			this->label14->Text = L"竹田";
			this->label14->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::PowderBlue;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label15->Location = System::Drawing::Point(802, 407);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(82, 96);
			this->label15->TabIndex = 14;
			this->label15->Text = L"萬丹";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::PowderBlue;
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label16->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label16->Location = System::Drawing::Point(802, 503);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(82, 96);
			this->label16->TabIndex = 15;
			this->label16->Text = L"潮州";
			this->label16->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::PowderBlue;
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label17->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label17->Location = System::Drawing::Point(802, 599);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 95);
			this->label17->TabIndex = 16;
			this->label17->Text = L"墾丁";
			this->label17->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::PowderBlue;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label18->Location = System::Drawing::Point(722, 599);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(80, 95);
			this->label18->TabIndex = 17;
			this->label18->Text = L"來義";
			this->label18->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::PowderBlue;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label19->Location = System::Drawing::Point(642, 599);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(80, 95);
			this->label19->TabIndex = 18;
			this->label19->Text = L"新埤";
			this->label19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::PowderBlue;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label20->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label20->Location = System::Drawing::Point(562, 599);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(80, 95);
			this->label20->TabIndex = 19;
			this->label20->Text = L"南州";
			this->label20->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::PowderBlue;
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label21->Location = System::Drawing::Point(482, 599);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(80, 95);
			this->label21->TabIndex = 20;
			this->label21->Text = L"東港";
			this->label21->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label22->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label22->Location = System::Drawing::Point(402, 599);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(80, 95);
			this->label22->TabIndex = 21;
			this->label22->Text = L"機會";
			this->label22->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::PowderBlue;
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label23->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label23->Location = System::Drawing::Point(322, 599);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(80, 95);
			this->label23->TabIndex = 22;
			this->label23->Text = L"林邊";
			this->label23->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::PowderBlue;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label24->Location = System::Drawing::Point(242, 599);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(80, 95);
			this->label24->TabIndex = 23;
			this->label24->Text = L"佳冬";
			this->label24->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::PowderBlue;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label25->Location = System::Drawing::Point(162, 599);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(80, 95);
			this->label25->TabIndex = 24;
			this->label25->Text = L"枋寮";
			this->label25->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::Color::PowderBlue;
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label26->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label26->Location = System::Drawing::Point(82, 599);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(80, 95);
			this->label26->TabIndex = 25;
			this->label26->Text = L"枋山";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::PowderBlue;
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label27->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label27->Location = System::Drawing::Point(0, 599);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(82, 95);
			this->label27->TabIndex = 26;
			this->label27->Text = L"春日";
			this->label27->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label28
			// 
			this->label28->BackColor = System::Drawing::Color::PowderBlue;
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label28->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label28->Location = System::Drawing::Point(0, 503);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(82, 96);
			this->label28->TabIndex = 27;
			this->label28->Text = L"獅子";
			this->label28->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::PowderBlue;
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label29->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label29->Location = System::Drawing::Point(0, 407);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(82, 96);
			this->label29->TabIndex = 28;
			this->label29->Text = L"牡丹";
			this->label29->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label30->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label30->Location = System::Drawing::Point(0, 311);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(82, 96);
			this->label30->TabIndex = 29;
			this->label30->Text = L"命運";
			this->label30->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::Color::PowderBlue;
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label31->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label31->Location = System::Drawing::Point(0, 215);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(82, 96);
			this->label31->TabIndex = 30;
			this->label31->Text = L"車城";
			this->label31->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label32
			// 
			this->label32->BackColor = System::Drawing::Color::PowderBlue;
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label32->Font = (gcnew System::Drawing::Font(L"華康方圓體W7", 16));
			this->label32->Location = System::Drawing::Point(0, 119);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(82, 96);
			this->label32->TabIndex = 31;
			this->label32->Text = L"恆春";
			this->label32->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(592, 393);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 112);
			this->button1->TabIndex = 32;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label33->Enabled = false;
			this->label33->Font = (gcnew System::Drawing::Font(L"華康粗圓體", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label33->Location = System::Drawing::Point(632, 508);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(100, 23);
			this->label33->TabIndex = 33;
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(126, 180);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 46);
			this->button2->TabIndex = 34;
			this->button2->Text = L"存檔";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->AcceptsTab = true;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14));
			this->textBox1->Location = System::Drawing::Point(111, 424);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(392, 158);
			this->textBox1->TabIndex = 36;
			this->textBox1->Text = L"發生事件";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(298, 180);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 46);
			this->button3->TabIndex = 37;
			this->button3->Text = L"讀檔";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(465, 180);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 46);
			this->button4->TabIndex = 38;
			this->button4->Text = L"重新開始";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"華康海報體W9", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(632, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 46);
			this->button5->TabIndex = 39;
			this->button5->Text = L"show";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox3->Location = System::Drawing::Point(186, 505);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 29);
			this->textBox3->TabIndex = 43;
			this->textBox3->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Yellow;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox2->Location = System::Drawing::Point(1, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(78, 16);
			this->textBox2->TabIndex = 44;
			this->textBox2->TabStop = false;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox4->Location = System::Drawing::Point(84, 53);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(76, 16);
			this->textBox4->TabIndex = 45;
			this->textBox4->TabStop = false;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox5->Location = System::Drawing::Point(164, 53);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(76, 16);
			this->textBox5->TabIndex = 46;
			this->textBox5->TabStop = false;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox6->Location = System::Drawing::Point(243, 53);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(76, 16);
			this->textBox6->TabIndex = 47;
			this->textBox6->TabStop = false;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox7->Location = System::Drawing::Point(324, 53);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(76, 16);
			this->textBox7->TabIndex = 48;
			this->textBox7->TabStop = false;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox8->Location = System::Drawing::Point(403, 53);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(76, 16);
			this->textBox8->TabIndex = 49;
			this->textBox8->TabStop = false;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox9->Location = System::Drawing::Point(485, 53);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(76, 16);
			this->textBox9->TabIndex = 50;
			this->textBox9->TabStop = false;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox10->Location = System::Drawing::Point(563, 53);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(76, 16);
			this->textBox10->TabIndex = 51;
			this->textBox10->TabStop = false;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox11->Location = System::Drawing::Point(645, 53);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(76, 16);
			this->textBox11->TabIndex = 52;
			this->textBox11->TabStop = false;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox12->Location = System::Drawing::Point(723, 53);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(76, 16);
			this->textBox12->TabIndex = 53;
			this->textBox12->TabStop = false;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox13->Location = System::Drawing::Point(803, 53);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(78, 16);
			this->textBox13->TabIndex = 54;
			this->textBox13->TabStop = false;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox14->Location = System::Drawing::Point(803, 148);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(78, 16);
			this->textBox14->TabIndex = 55;
			this->textBox14->TabStop = false;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox15->Location = System::Drawing::Point(803, 249);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(78, 16);
			this->textBox15->TabIndex = 56;
			this->textBox15->TabStop = false;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox16->Location = System::Drawing::Point(803, 345);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(78, 16);
			this->textBox16->TabIndex = 57;
			this->textBox16->TabStop = false;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox17->Location = System::Drawing::Point(803, 431);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(78, 16);
			this->textBox17->TabIndex = 58;
			this->textBox17->TabStop = false;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox18->Location = System::Drawing::Point(803, 532);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(78, 16);
			this->textBox18->TabIndex = 59;
			this->textBox18->TabStop = false;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox19->Location = System::Drawing::Point(803, 629);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(78, 16);
			this->textBox19->TabIndex = 60;
			this->textBox19->TabStop = false;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox20->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox20->Location = System::Drawing::Point(723, 629);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(76, 16);
			this->textBox20->TabIndex = 61;
			this->textBox20->TabStop = false;
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox21->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox21->Location = System::Drawing::Point(645, 629);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(76, 16);
			this->textBox21->TabIndex = 62;
			this->textBox21->TabStop = false;
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox22->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox22->Location = System::Drawing::Point(563, 629);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(76, 16);
			this->textBox22->TabIndex = 63;
			this->textBox22->TabStop = false;
			this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox23->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox23->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox23->Location = System::Drawing::Point(485, 629);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(76, 16);
			this->textBox23->TabIndex = 64;
			this->textBox23->TabStop = false;
			this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox24->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox24->Location = System::Drawing::Point(403, 629);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(76, 16);
			this->textBox24->TabIndex = 65;
			this->textBox24->TabStop = false;
			this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox25->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox25->Location = System::Drawing::Point(324, 629);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(76, 16);
			this->textBox25->TabIndex = 66;
			this->textBox25->TabStop = false;
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox26->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox26->Location = System::Drawing::Point(243, 629);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(76, 16);
			this->textBox26->TabIndex = 67;
			this->textBox26->TabStop = false;
			this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox27->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox27->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox27->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox27->Location = System::Drawing::Point(164, 629);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(76, 16);
			this->textBox27->TabIndex = 68;
			this->textBox27->TabStop = false;
			this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox28->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox28->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox28->Location = System::Drawing::Point(84, 629);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(76, 16);
			this->textBox28->TabIndex = 69;
			this->textBox28->TabStop = false;
			this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox29
			// 
			this->textBox29->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox29->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox29->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox29->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox29->Location = System::Drawing::Point(1, 629);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(78, 16);
			this->textBox29->TabIndex = 70;
			this->textBox29->TabStop = false;
			this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox30
			// 
			this->textBox30->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox30->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox30->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox30->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox30->Location = System::Drawing::Point(1, 532);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(78, 16);
			this->textBox30->TabIndex = 71;
			this->textBox30->TabStop = false;
			this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox31
			// 
			this->textBox31->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox31->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox31->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox31->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox31->Location = System::Drawing::Point(1, 440);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(78, 16);
			this->textBox31->TabIndex = 72;
			this->textBox31->TabStop = false;
			this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox32
			// 
			this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox32->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox32->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox32->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox32->Location = System::Drawing::Point(1, 345);
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(78, 16);
			this->textBox32->TabIndex = 73;
			this->textBox32->TabStop = false;
			this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox33
			// 
			this->textBox33->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox33->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox33->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox33->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox33->Location = System::Drawing::Point(1, 249);
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(78, 16);
			this->textBox33->TabIndex = 74;
			this->textBox33->TabStop = false;
			this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox34
			// 
			this->textBox34->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox34->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox34->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox34->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox34->Location = System::Drawing::Point(1, 148);
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(78, 16);
			this->textBox34->TabIndex = 75;
			this->textBox34->TabStop = false;
			this->textBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox35
			// 
			this->textBox35->BackColor = System::Drawing::Color::Yellow;
			this->textBox35->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox35->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox35->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12));
			this->textBox35->Location = System::Drawing::Point(1, 88);
			this->textBox35->Name = L"textBox35";
			this->textBox35->ReadOnly = true;
			this->textBox35->Size = System::Drawing::Size(78, 16);
			this->textBox35->TabIndex = 76;
			this->textBox35->TabStop = false;
			this->textBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox36
			// 
			this->textBox36->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox36->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox36->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox36->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox36->Location = System::Drawing::Point(84, 88);
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(76, 16);
			this->textBox36->TabIndex = 77;
			this->textBox36->TabStop = false;
			this->textBox36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox37
			// 
			this->textBox37->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox37->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox37->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox37->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox37->Location = System::Drawing::Point(164, 88);
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(76, 16);
			this->textBox37->TabIndex = 78;
			this->textBox37->TabStop = false;
			this->textBox37->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox38
			// 
			this->textBox38->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox38->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox38->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox38->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox38->Location = System::Drawing::Point(243, 88);
			this->textBox38->Name = L"textBox38";
			this->textBox38->ReadOnly = true;
			this->textBox38->Size = System::Drawing::Size(76, 16);
			this->textBox38->TabIndex = 79;
			this->textBox38->TabStop = false;
			this->textBox38->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox39
			// 
			this->textBox39->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox39->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox39->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox39->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox39->Location = System::Drawing::Point(324, 88);
			this->textBox39->Name = L"textBox39";
			this->textBox39->ReadOnly = true;
			this->textBox39->Size = System::Drawing::Size(76, 16);
			this->textBox39->TabIndex = 80;
			this->textBox39->TabStop = false;
			this->textBox39->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox40
			// 
			this->textBox40->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox40->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox40->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox40->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox40->Location = System::Drawing::Point(403, 88);
			this->textBox40->Name = L"textBox40";
			this->textBox40->ReadOnly = true;
			this->textBox40->Size = System::Drawing::Size(76, 16);
			this->textBox40->TabIndex = 81;
			this->textBox40->TabStop = false;
			this->textBox40->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox41
			// 
			this->textBox41->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox41->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox41->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox41->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox41->Location = System::Drawing::Point(485, 88);
			this->textBox41->Name = L"textBox41";
			this->textBox41->ReadOnly = true;
			this->textBox41->Size = System::Drawing::Size(76, 16);
			this->textBox41->TabIndex = 82;
			this->textBox41->TabStop = false;
			this->textBox41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox42
			// 
			this->textBox42->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox42->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox42->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox42->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox42->Location = System::Drawing::Point(563, 88);
			this->textBox42->Name = L"textBox42";
			this->textBox42->ReadOnly = true;
			this->textBox42->Size = System::Drawing::Size(76, 16);
			this->textBox42->TabIndex = 83;
			this->textBox42->TabStop = false;
			this->textBox42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox43
			// 
			this->textBox43->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox43->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox43->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox43->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox43->Location = System::Drawing::Point(645, 88);
			this->textBox43->Name = L"textBox43";
			this->textBox43->ReadOnly = true;
			this->textBox43->Size = System::Drawing::Size(76, 16);
			this->textBox43->TabIndex = 84;
			this->textBox43->TabStop = false;
			this->textBox43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox44
			// 
			this->textBox44->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox44->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox44->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox44->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox44->Location = System::Drawing::Point(723, 88);
			this->textBox44->Name = L"textBox44";
			this->textBox44->ReadOnly = true;
			this->textBox44->Size = System::Drawing::Size(76, 16);
			this->textBox44->TabIndex = 85;
			this->textBox44->TabStop = false;
			this->textBox44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox45
			// 
			this->textBox45->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox45->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox45->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox45->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox45->Location = System::Drawing::Point(803, 88);
			this->textBox45->Name = L"textBox45";
			this->textBox45->ReadOnly = true;
			this->textBox45->Size = System::Drawing::Size(78, 16);
			this->textBox45->TabIndex = 86;
			this->textBox45->TabStop = false;
			this->textBox45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox46
			// 
			this->textBox46->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox46->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox46->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox46->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox46->Location = System::Drawing::Point(803, 180);
			this->textBox46->Name = L"textBox46";
			this->textBox46->ReadOnly = true;
			this->textBox46->Size = System::Drawing::Size(78, 16);
			this->textBox46->TabIndex = 87;
			this->textBox46->TabStop = false;
			this->textBox46->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox47
			// 
			this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox47->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox47->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox47->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox47->Location = System::Drawing::Point(803, 271);
			this->textBox47->Name = L"textBox47";
			this->textBox47->ReadOnly = true;
			this->textBox47->Size = System::Drawing::Size(78, 16);
			this->textBox47->TabIndex = 88;
			this->textBox47->TabStop = false;
			this->textBox47->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox48
			// 
			this->textBox48->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox48->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox48->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox48->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox48->Location = System::Drawing::Point(803, 367);
			this->textBox48->Name = L"textBox48";
			this->textBox48->ReadOnly = true;
			this->textBox48->Size = System::Drawing::Size(78, 16);
			this->textBox48->TabIndex = 89;
			this->textBox48->TabStop = false;
			this->textBox48->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox49
			// 
			this->textBox49->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox49->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox49->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox49->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox49->Location = System::Drawing::Point(803, 463);
			this->textBox49->Name = L"textBox49";
			this->textBox49->ReadOnly = true;
			this->textBox49->Size = System::Drawing::Size(78, 16);
			this->textBox49->TabIndex = 90;
			this->textBox49->TabStop = false;
			this->textBox49->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox50
			// 
			this->textBox50->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox50->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox50->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox50->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox50->Location = System::Drawing::Point(803, 559);
			this->textBox50->Name = L"textBox50";
			this->textBox50->ReadOnly = true;
			this->textBox50->Size = System::Drawing::Size(78, 16);
			this->textBox50->TabIndex = 91;
			this->textBox50->TabStop = false;
			this->textBox50->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox51
			// 
			this->textBox51->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox51->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox51->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox51->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox51->Location = System::Drawing::Point(803, 654);
			this->textBox51->Name = L"textBox51";
			this->textBox51->ReadOnly = true;
			this->textBox51->Size = System::Drawing::Size(78, 16);
			this->textBox51->TabIndex = 92;
			this->textBox51->TabStop = false;
			this->textBox51->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox52
			// 
			this->textBox52->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox52->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox52->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox52->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox52->Location = System::Drawing::Point(723, 654);
			this->textBox52->Name = L"textBox52";
			this->textBox52->ReadOnly = true;
			this->textBox52->Size = System::Drawing::Size(76, 16);
			this->textBox52->TabIndex = 93;
			this->textBox52->TabStop = false;
			this->textBox52->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox53
			// 
			this->textBox53->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox53->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox53->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox53->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox53->Location = System::Drawing::Point(645, 654);
			this->textBox53->Name = L"textBox53";
			this->textBox53->ReadOnly = true;
			this->textBox53->Size = System::Drawing::Size(76, 16);
			this->textBox53->TabIndex = 94;
			this->textBox53->TabStop = false;
			this->textBox53->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox54
			// 
			this->textBox54->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox54->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox54->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox54->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox54->Location = System::Drawing::Point(563, 654);
			this->textBox54->Name = L"textBox54";
			this->textBox54->ReadOnly = true;
			this->textBox54->Size = System::Drawing::Size(76, 16);
			this->textBox54->TabIndex = 95;
			this->textBox54->TabStop = false;
			this->textBox54->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox55
			// 
			this->textBox55->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox55->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox55->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox55->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox55->Location = System::Drawing::Point(485, 654);
			this->textBox55->Name = L"textBox55";
			this->textBox55->ReadOnly = true;
			this->textBox55->Size = System::Drawing::Size(76, 16);
			this->textBox55->TabIndex = 96;
			this->textBox55->TabStop = false;
			this->textBox55->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox56
			// 
			this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox56->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox56->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox56->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox56->Location = System::Drawing::Point(403, 654);
			this->textBox56->Name = L"textBox56";
			this->textBox56->ReadOnly = true;
			this->textBox56->Size = System::Drawing::Size(76, 16);
			this->textBox56->TabIndex = 97;
			this->textBox56->TabStop = false;
			this->textBox56->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox57
			// 
			this->textBox57->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox57->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox57->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox57->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox57->Location = System::Drawing::Point(324, 654);
			this->textBox57->Name = L"textBox57";
			this->textBox57->ReadOnly = true;
			this->textBox57->Size = System::Drawing::Size(76, 16);
			this->textBox57->TabIndex = 98;
			this->textBox57->TabStop = false;
			this->textBox57->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox58
			// 
			this->textBox58->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox58->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox58->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox58->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox58->Location = System::Drawing::Point(243, 654);
			this->textBox58->Name = L"textBox58";
			this->textBox58->ReadOnly = true;
			this->textBox58->Size = System::Drawing::Size(76, 16);
			this->textBox58->TabIndex = 99;
			this->textBox58->TabStop = false;
			this->textBox58->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox59
			// 
			this->textBox59->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox59->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox59->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox59->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox59->Location = System::Drawing::Point(164, 654);
			this->textBox59->Name = L"textBox59";
			this->textBox59->ReadOnly = true;
			this->textBox59->Size = System::Drawing::Size(76, 16);
			this->textBox59->TabIndex = 100;
			this->textBox59->TabStop = false;
			this->textBox59->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox60
			// 
			this->textBox60->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox60->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox60->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox60->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox60->Location = System::Drawing::Point(85, 654);
			this->textBox60->Name = L"textBox60";
			this->textBox60->ReadOnly = true;
			this->textBox60->Size = System::Drawing::Size(76, 16);
			this->textBox60->TabIndex = 101;
			this->textBox60->TabStop = false;
			this->textBox60->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox61
			// 
			this->textBox61->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox61->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox61->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox61->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox61->Location = System::Drawing::Point(1, 654);
			this->textBox61->Name = L"textBox61";
			this->textBox61->ReadOnly = true;
			this->textBox61->Size = System::Drawing::Size(78, 16);
			this->textBox61->TabIndex = 102;
			this->textBox61->TabStop = false;
			this->textBox61->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox62
			// 
			this->textBox62->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox62->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox62->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox62->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox62->Location = System::Drawing::Point(1, 559);
			this->textBox62->Name = L"textBox62";
			this->textBox62->ReadOnly = true;
			this->textBox62->Size = System::Drawing::Size(78, 16);
			this->textBox62->TabIndex = 103;
			this->textBox62->TabStop = false;
			this->textBox62->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox63
			// 
			this->textBox63->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox63->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox63->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox63->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox63->Location = System::Drawing::Point(1, 463);
			this->textBox63->Name = L"textBox63";
			this->textBox63->ReadOnly = true;
			this->textBox63->Size = System::Drawing::Size(78, 16);
			this->textBox63->TabIndex = 104;
			this->textBox63->TabStop = false;
			this->textBox63->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox64
			// 
			this->textBox64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox64->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox64->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox64->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox64->Location = System::Drawing::Point(1, 367);
			this->textBox64->Name = L"textBox64";
			this->textBox64->ReadOnly = true;
			this->textBox64->Size = System::Drawing::Size(78, 16);
			this->textBox64->TabIndex = 105;
			this->textBox64->TabStop = false;
			this->textBox64->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox65
			// 
			this->textBox65->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox65->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox65->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox65->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox65->Location = System::Drawing::Point(1, 271);
			this->textBox65->Name = L"textBox65";
			this->textBox65->ReadOnly = true;
			this->textBox65->Size = System::Drawing::Size(78, 16);
			this->textBox65->TabIndex = 106;
			this->textBox65->TabStop = false;
			this->textBox65->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox66
			// 
			this->textBox66->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox66->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox66->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox66->Font = (gcnew System::Drawing::Font(L"華康POP2體W9", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox66->Location = System::Drawing::Point(1, 180);
			this->textBox66->Name = L"textBox66";
			this->textBox66->ReadOnly = true;
			this->textBox66->Size = System::Drawing::Size(78, 16);
			this->textBox66->TabIndex = 107;
			this->textBox66->TabStop = false;
			this->textBox66->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(327, 509);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 108;
			this->button8->Text = L"確定";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->作弊ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(884, 24);
			this->menuStrip1->TabIndex = 109;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 作弊ToolStripMenuItem
			// 
			this->作弊ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->增加金錢ToolStripMenuItem,
					this->決定移動步數ToolStripMenuItem
			});
			this->作弊ToolStripMenuItem->Name = L"作弊ToolStripMenuItem";
			this->作弊ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->作弊ToolStripMenuItem->Text = L"作弊";
			// 
			// 增加金錢ToolStripMenuItem
			// 
			this->增加金錢ToolStripMenuItem->Name = L"增加金錢ToolStripMenuItem";
			this->增加金錢ToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->增加金錢ToolStripMenuItem->Text = L"增加金錢";
			this->增加金錢ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::增加金錢ToolStripMenuItem_Click);
			// 
			// 決定移動步數ToolStripMenuItem
			// 
			this->決定移動步數ToolStripMenuItem->Name = L"決定移動步數ToolStripMenuItem";
			this->決定移動步數ToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->決定移動步數ToolStripMenuItem->Text = L"決定移動步數";
			this->決定移動步數ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::決定移動步數ToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(884, 694);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox66);
			this->Controls->Add(this->textBox65);
			this->Controls->Add(this->textBox64);
			this->Controls->Add(this->textBox63);
			this->Controls->Add(this->textBox62);
			this->Controls->Add(this->textBox61);
			this->Controls->Add(this->textBox60);
			this->Controls->Add(this->textBox59);
			this->Controls->Add(this->textBox58);
			this->Controls->Add(this->textBox57);
			this->Controls->Add(this->textBox56);
			this->Controls->Add(this->textBox55);
			this->Controls->Add(this->textBox54);
			this->Controls->Add(this->textBox53);
			this->Controls->Add(this->textBox52);
			this->Controls->Add(this->textBox51);
			this->Controls->Add(this->textBox50);
			this->Controls->Add(this->textBox49);
			this->Controls->Add(this->textBox48);
			this->Controls->Add(this->textBox47);
			this->Controls->Add(this->textBox46);
			this->Controls->Add(this->textBox45);
			this->Controls->Add(this->textBox44);
			this->Controls->Add(this->textBox43);
			this->Controls->Add(this->textBox42);
			this->Controls->Add(this->textBox41);
			this->Controls->Add(this->textBox40);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
			
//存檔
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	play(2);
}
//讀檔
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	play(3);
}
//restart
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	play(4);
}
//show
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	play(5);
}
//骰骰子
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	play(1);
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	name = textBox3->Text;
	playername[0] = name;
	path = name + ".txt";//如要修改路徑，改這裡
						 // 寫入檔案
	StreamWriter^ f = File::CreateText(path);
	f->WriteLine("land: 0-this user don't have this land ; 1-this user have this land ; 2-this user have a house ; 3-have two houses ; 4-have three houses ; ");
	f->WriteLine("user: 0-玩家1  1-玩家2  2-玩家3  3-玩家4");
	f->WriteLine("user {0,4}{1,8}{2,11} land event", "step", "money", "site");
	f->Close();
	initial();
	textBox3->Visible = false;
	textBox1->Text = "你有5000元可以用";
	button8->Visible = false;
	printmap(player, i, j, nowloc, site, user, hou1, hou2, hou3, house, houseuser);
	menuStrip1->Enabled = true;

}



void initial()
{
	//第一棟房子價錢
	house1price = gcnew array<int>{0, 25, 50, 50, 150, 100, 200, 175, 75, 125, 150, 125, 0,
		75, 150, 200, 125, 100, 25, 50, 200, 0, 175, 200, 150, 75, 50, 100, 125, 0, 175, 175 };
	//第二棟房子價錢
	house2price = gcnew array<int>{ 0, 75, 150, 150, 450, 300, 600, 525, 225, 375, 450, 375, 0, 225
		, 450, 600, 375, 300, 75, 150, 600, 0, 525, 600, 450, 225, 150, 300, 375, 0, 525, 525};
	//第三棟房子價錢
	house3price = gcnew array<int>{0, 125, 250, 250, 750, 500, 1000, 875, 375, 625, 750, 625, 0
		, 375, 750, 1000, 625, 500, 125, 250, 1000, 0, 875, 1000, 750, 375, 250, 500, 625, 0, 875, 875 };
	//土地價錢
	price = gcnew array<int>{0, 50, 125, 135, 350, 235, 480, 410, 165, 310, 350, 310, 0, 165, 350, 480
		, 310, 235, 50, 135, 480, 0, 410, 480, 350, 165, 135, 235, 310, 0, 410, 410 };

	playername[1] = "player2"; playername[2] = "player3"; playername[3] = "player4";
	user[0] = "1"; user[1] = "2"; user[2] = "3"; user[3] = "4";
	site = gcnew array<String^>{"start", "Gaoshu", "Sandimen", "Wutai", "Jiouru", "Yanpu", "Pingtung",
		"Changjhih", "Neipu", "Linluo", "Majia", "Wanluan", "destiny", "Jhutian", "Wandan", "Chaojhou", "Kanding",
		"Laiyi", "Sinpi", "Nanjhou", "Donggang", "chance", "Linbian", "Jiadong", "Fangliao", "Fangshan",
		"Chunrih", "Shihzih", "Mudan", "destiny", "Checheng", "Hengchun" };
	/*site = gcnew array<String^>{"start", "高樹", "三地門", "霧台", "九如", "鹽埔", "屏東",
		"長治", "內埔", "麟洛", "瑪家", "萬巒", "命運", "竹田", "萬丹", "潮州", "墾丁",
		"來義", "新埤", "南州", "東港", "機會", "林邊", "佳冬", "枋寮", "枋山",
		"春日", "獅子", "牡丹", "命運", "車城", "恆春" };*/

	for (*i = 0; *i < 32; (*i)++)
		house[*i] = 0;
	for (*i = 0; *i < 32; (*i)++)
		houseuser[*i] = 0;
	for (*i = 0; *i < 4; (*i)++)
	{
		money[*i] = 5000;
		nowloc[*i] = 0;
		st[*i] = 0;
		m[*i] = 5000;
		l[*i] = 0;
		sit[*i] = "";
	}
}


void printmap(int^ player, int^ i, int^ j, array<int>^ nowloc, array<String^>^ site, array<String^>^ user, String^ hou1, String^ hou2, String^ hou3, array<int>^ house, array<int>^ houseuser)
{
	//Console::WriteLine(L"");
	int^ a = gcnew int(0);
	int^ k = gcnew int(0);
	String^ usercount = gcnew String{ "" };
	//印地圖
	//第一排
	//判斷user
	for (*i = 0; *i < 11; (*i)++)
	{
		usercount = "";
		for (*a = 0; *a < *player; (*a)++)
		{
			if (*i == nowloc[*a])
				usercount += user[*a] + " ";
		}
		switch (*i)
		{
		case 0:			//起點
			textBox2->Text = usercount;
			break;
		case 1:			//高樹
			textBox4->Text = usercount;
			break;
		case 2:			//三地門
			textBox5->Text = usercount;
			break;
		case 3:			//霧台
			textBox6->Text = usercount;
			break;
		case 4:			//九如
			textBox7->Text = usercount;
			break;
		case 5:			//鹽埔
			textBox8->Text = usercount;
			break;
		case 6:			//屏東
			textBox9->Text = usercount;
			break;
		case 7:			//長治
			textBox10->Text = usercount;
			break;
		case 8:			//內埔
			textBox11->Text = usercount;
			break;
		case 9:			//麟洛
			textBox12->Text = usercount;
			break;
		case 10:			//瑪家
			textBox13->Text = usercount;
			break;
		}
	}
	String^ housecount("");
	//判斷房子
	for (*i = 0; *i < 11; (*i)++)
	{
		housecount = "";
		for (*a = 1; *a < *player + 1; (*a)++)
		{
			if (houseuser[*i] == 0)				//無
				break;
			else if (houseuser[*i] == *a)		//玩家的土地
			{
				housecount = user[*a - 1] + "   ";
				break;
			}
		}

		if (house[*i] == 0)				//什麼都沒有
		{
		}
		else if (house[*i] == 1)		//有土地
			housecount += "@";
		else if (house[*i] == 2)		//一棟房子
			housecount += hou1;
		else if (house[*i] == 3)		//兩棟房子
			housecount += hou2;
		else if (house[*i] == 4)		//一棟旅館
			housecount += hou3;

		switch (*i)
		{
		case 0:			//起點
			textBox35->Text = housecount;
			break;
		case 1:			//高樹
			textBox36->Text = housecount;
			break;
		case 2:			//三地門
			textBox37->Text = housecount;
			break;
		case 3:			//霧台
			textBox38->Text = housecount;
			break;
		case 4:			//九如
			textBox39->Text = housecount;
			break;
		case 5:			//鹽埔
			textBox40->Text = housecount;
			break;
		case 6:			//屏東
			textBox41->Text = housecount;
			break;
		case 7:			//長治
			textBox42->Text = housecount;
			break;
		case 8:			//內埔
			textBox43->Text = housecount;
			break;
		case 9:			//麟洛
			textBox44->Text = housecount;
			break;
		case 10:			//瑪家
			textBox45->Text = housecount;
			break;
		}
	}

	//中間幾排
	*j = 11;
	for (*i = 31; *i > 26; (*i)--)
	{
		usercount = "";
		//判斷user
		for (*a = 0; *a < *player; (*a)++)
		{
			if (*i == nowloc[*a])
				usercount += user[*a] + " ";
		}
		switch (*i)
		{
		case 31:			//恆春
			textBox34->Text = usercount;
			break;
		case 30:			//車城
			textBox33->Text = usercount;
			break;
		case 29:			//命運
			textBox32->Text = usercount;
			break;
		case 28:			//牡丹
			textBox31->Text = usercount;
			break;
		case 27:			//獅子
			textBox30->Text = usercount;
			break;
		}
		usercount = "";
		//j是最右邊那排
		for (*a = 0; *a < *player; (*a)++)
		{
			if (*j == nowloc[*a])
				usercount += user[*a] + " ";
		}
		switch (*j)
		{
		case 11:			//萬巒
			textBox14->Text = usercount;
			break;
		case 12:			//命運
			textBox15->Text = usercount;
			break;
		case 13:			//竹田
			textBox16->Text = usercount;
			break;
		case 14:			//萬丹
			textBox17->Text = usercount;
			break;
		case 15:			//潮州
			textBox18->Text = usercount;
			break;
		}

		housecount = "";
		//判斷房子
		for (*a = 1; *a < *player + 1; (*a)++)
		{
			if (houseuser[*i] == 0)				//無
				break;
			else if (houseuser[*i] == *a)		//玩家的土地
			{
				housecount = user[*a - 1] + "   ";
				break;
			}
		}

		if (house[*i] == 0)				//什麼都沒有
		{

		}
		else if (house[*i] == 1)		//有土地
			housecount += "@";
		else if (house[*i] == 2)		//一棟房子
			housecount += hou1;
		else if (house[*i] == 3)		//兩棟房子
			housecount += hou2;
		else if (house[*i] == 4)		//一棟旅館
			housecount += hou3;
		switch (*i)
		{
		case 31:			//恆春
			textBox66->Text = housecount;
			break;
		case 30:			//車城
			textBox65->Text = housecount;
			break;
		case 29:			//命運
			textBox64->Text = housecount;
			break;
		case 28:			//牡丹
			textBox63->Text = housecount;
			break;
		case 27:			//獅子
			textBox62->Text = housecount;
			break;
		}


		housecount = "";
		for (*a = 1; *a < *player + 1; (*a)++)
		{
			if (houseuser[*j] == 0)				//無
				break;
			else if (houseuser[*j] == *a)		//玩家的土地
			{
				housecount = user[*a - 1] + "   ";
				break;
			}
		}

		if (house[*j] == 0)				//什麼都沒有
		{
		}
		else if (house[*j] == 1)		//有土地
			housecount += "@";
		else if (house[*j] == 2)		//一棟房子
			housecount += hou1;
		else if (house[*j] == 3)		//兩棟房子
			housecount += hou2;
		else if (house[*j] == 4)		//一棟旅館
			housecount += hou3;

		switch (*j)
		{
		case 11:			//萬巒
			textBox46->Text = housecount;
			break;
		case 12:			//命運
			textBox47->Text = housecount;
			break;
		case 13:			//竹田
			textBox48->Text = housecount;
			break;
		case 14:			//萬丹
			textBox49->Text = housecount;
			break;
		case 15:			//潮州
			textBox50->Text = housecount;
			break;
		}
		(*j)++;
	}
	//cout << endl;
	//最後一排
	//判斷user在哪
	for (*i = 26; *i > 15; (*i)--)
	{
		usercount = "";
		for (*a = 0; *a < *player; (*a)++)
		{
			if (*i == nowloc[*a])
				usercount += user[*a] + " ";
		}

		switch (*i)
		{
		case 16:			//墾丁
			textBox19->Text = usercount;
			break;
		case 17:			//來義
			textBox20->Text = usercount;
			break;
		case 18:			//新埤
			textBox21->Text = usercount;
			break;
		case 19:			//南州
			textBox22->Text = usercount;
			break;
		case 20:			//東港
			textBox23->Text = usercount;
			break;
		case 21:			//機會
			textBox24->Text = usercount;
			break;
		case 22:			//林邊
			textBox25->Text = usercount;
			break;
		case 23:			//佳冬
			textBox26->Text = usercount;
			break;
		case 24:			//枋寮
			textBox27->Text = usercount;
			break;
		case 25:			//枋山
			textBox28->Text = usercount;
			break;
		case 26:			//春日
			textBox29->Text = usercount;
			break;
		}
	}
	//判斷房子
	for (*i = 26; *i > 15; (*i)--)
	{
		housecount = "";
		for (*a = 1; *a < *player + 1; (*a)++)
		{
			if (houseuser[*i] == 0)				//無
				break;
			else if (houseuser[*i] == *a)		//玩家的土地
			{
				housecount = user[*a - 1] + "   ";
				break;
			}
		}

		if (house[*i] == 0)				//什麼都沒有
		{

		}
		else if (house[*i] == 1)		//有土地
			housecount += "@";
		else if (house[*i] == 2)		//一棟房子
			housecount += hou1;
		else if (house[*i] == 3)		//兩棟房子
			housecount += hou2;
		else if (house[*i] == 4)		//一棟旅館
			housecount += hou3;

		switch (*i)
		{
		case 16:			//墾丁
			textBox51->Text = housecount;
			break;
		case 17:			//來義
			textBox52->Text = housecount;
			break;
		case 18:			//新埤
			textBox53->Text = housecount;
			break;
		case 19:			//南州
			textBox54->Text = housecount;
			break;
		case 20:			//東港
			textBox55->Text = housecount;
			break;
		case 21:			//機會
			textBox56->Text = housecount;
			break;
		case 22:			//林邊
			textBox57->Text = housecount;
			break;
		case 23:			//佳冬
			textBox58->Text = housecount;
			break;
		case 24:			//枋寮
			textBox59->Text = housecount;
			break;
		case 25:			//枋山
			textBox60->Text = housecount;
			break;
		case 26:			//春日
			textBox61->Text = housecount;
			break;
		}
	}

}



public: void play(int^ event)
{
re:
	//開始玩遊戲
	if (*event == 1)						//玩			
	{
		//textBox1->Text = "從" + playername[*turn] + "開始";
		for (*k = 0; *k < *player; (*k)++)
		{
			Random^ generator = gcnew Random();
			if (*check == 0)
			{
				dice = generator->Next(1, 7);
			}
			else
			{
				*dice = *addhow;
				*k = *whichplayer - 1;
			}
			
			textBox1->Text = playername[*k] + ":\r\n";
			label33->Text = "" + *dice;
			textBox1->Text += "你走了" + *dice + "步\r\n";
			nowloc[*k] = (nowloc[*k] + *dice) % 32;				//現在位置
			textBox1->Text += "走到" + site[nowloc[*k]] + "\r\n";
			printmap(player, i, j, nowloc, site, user, hou1, hou2, hou3, house, houseuser);
			StreamWriter^ f = gcnew StreamWriter(path, true);
			f->Write("{0,4}{1,4}", *k, *dice); ;				//存步數進去txt
			f->Close();

			//走到地點，選擇買地
			if (house[nowloc[*k]] == 0 && price[nowloc[*k]] != 0)	//可以買地
			{
			zero:
				if (*k < 1)
				{
					String^ message = "土地要" + price[nowloc[*k]] + "元，請問是否購買土地?(y/n)\r\n";
					MessageBoxButtons buttons = MessageBoxButtons::YesNo;
					System::Windows::Forms::DialogResult result;
					// Displays the MessageBox.
					String^ caption = "ask";
					result = MessageBox::Show(message, caption, buttons);

					if (result == System::Windows::Forms::DialogResult::Yes)
						yorn = "y";
					else
						yorn = "n";
				}
				else
					yorn = "y";


				if (yorn == "y")
				{
					house[nowloc[*k]] = 1;
					houseuser[nowloc[*k]] = *k + 1;
					money[*k] = money[*k] - price[nowloc[*k]];
					textBox1->Text += "你已在" + site[nowloc[*k]] + "買了一塊地\r\n";
					textBox1->Text += "你現在還有" + money[*k] + "元\r\n";
					StreamWriter^ f = gcnew StreamWriter(path, true);
					f->WriteLine("{0,9}{1,11}{2,5} 買了這塊地，花了{3}", money[*k], site[nowloc[*k]], house[nowloc[*k]], price[nowloc[*k]]);
					f->Close();
					printmap(player, i, j, nowloc, site, user, hou1, hou2, hou3, house, houseuser);

				}
				else if (yorn == "n")
				{
					StreamWriter^ f = gcnew StreamWriter(path, true);
					f->WriteLine("{0,9}{1,11}{2,5} 沒有買土地", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
					f->Close();
				}

				//cout << "按enter鍵繼續" << endl;
			}
			else if (nowloc[*k] == 12 || nowloc[*k] == 21 || nowloc[*k] == 29)		//機會命運
			{
				if (nowloc[*k] == 12 || nowloc[*k] == 29)			//命運
				{
					textBox1->Text += "這裡是命運，自動幫你抽牌\r\n";
					textBox1->Text += "你抽到的是 =>";
					*card = generator->Next(1, 6);
					switch (*card) {
					case 1:
						textBox1->Text += "去Wanluan買豬腳，花了400元\r\n";
						money[*k] = money[*k] - 400;
						textBox1->Text += "你現在還有" + money[*k] + "元";
						f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 抽了一張命運，事件為:去Wanluan買豬腳，花了400元", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						break;
					case 2:
						textBox1->Text += "去Hengchun玩，付了鵝鑾鼻門票75元\r\n";
						money[*k] = money[*k] - 75;
						textBox1->Text += "你現在還有" + money[*k] + "元";
						f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 抽了一張命運，事件為:去Hengchun玩，付了鵝鑾鼻門票75元", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						break;
					case 3:
						textBox1->Text += "經過Jiouru交流道，順路下去吃Jiouru美食，花了150元\r\n";
						money[*k] = money[*k] - 150;
						textBox1->Text += "你現在還有" + money[*k] + "元";
						f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 抽了一張命運，事件為:經過Jiouru交流道，順路下去吃Jiouru美食，花了150元", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						break;
					case 4:
						textBox1->Text += "去Jiadong當志工，但鄉長太熱情太謝謝你，堅持要給你錢，獲得300元\r\n";
						money[*k] = money[*k] + 300;
						textBox1->Text += "你現在還有" + money[*k] + "元";
						f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 抽了一張命運，事件為:去Jiadong當志工，但鄉長太熱情太謝謝你，堅持要給你錢，獲得300元", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						break;
					case 5:
						textBox1->Text += "在Nanjhou糖廠吃冰，花了200元\r\n";
						money[*k] = money[*k] - 200;
						textBox1->Text += "你現在還有" + money[*k] + "元";
						f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 抽了一張命運，事件為:在Nanjhou糖廠吃冰，花了200元", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						break;
					default:
						break;
					}

				}
				else if (nowloc[*k] == 21)						//機會
				{
					textBox1->Text += "這裡是機會，自動幫你抽牌\r\n";
					textBox1->Text += "你抽到的是 =>";
					*card = generator->Next(1, 6);
					switch (*card) {
					case 1:
						textBox1->Text += "到Chaojhou遇到李安，要到簽名，轉手獲利500元\r\n";
						money[*k] = money[*k] + 500;
						textBox1->Text += "你現在還有" + money[*k] + "元";
						f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 抽了一張機會，事件為:到Chaojhou遇到李安，要到簽名，轉手獲利500元", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						break;
					case 2:
						textBox1->Text += "去Linbian幫助居民重建因颱風而摧毀的家園，政府感謝你，給你1000元\r\n";
						money[*k] = money[*k] + 1000;
						textBox1->Text += "你現在還有" + money[*k] + "元";
						f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 抽了一張機會，事件為:去Linbian幫助居民重建因颱風而摧毀的家園，政府感謝你，給你1000元", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						break;
					case 3:
						textBox1->Text += "到Donggang坐船，還吃了黑鮪魚，買了櫻花蝦，花了800元\r\n";
						money[*k] = money[*k] - 800;
						textBox1->Text += "你現在還有" + money[*k] + "元";
						f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 抽了一張機會，事件為:到Donggang坐船，還吃了黑鮪魚，買了櫻花蝦，花了800元", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						break;
					case 4:
						textBox1->Text += "到Sandimen被誤認為是原住民被抓去表演民族歌舞表演，獲得250元\r\n";
						money[*k] = money[*k] + 250;
						textBox1->Text += "你現在還有" + money[*k] + "元";
						f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 抽了一張機會，事件為:到Sandimen被誤認為是原住民被抓去表演民族歌舞表演，獲得250元", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						break;
					case 5:
						textBox1->Text += "去Checheng拜福安宮，買了300元的金香\r\n";
						money[*k] = money[*k] - 300;
						textBox1->Text += "你現在還有" + money[*k] + "元";
						f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 抽了一張機會，事件為:去Checheng拜福安宮，買了300元的金香", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						break;
					default:
						break;
					}
				}
				printmap(player, i, j, nowloc, site, user, hou1, hou2, hou3, house, houseuser);
				//cout << "按enter鍵繼續" << endl;
			}
			else if (house[nowloc[*k]] == 1)          //有地，可建房子
			{
				for (*i = 1; *i <= *player; (*i)++)
				{
					if (houseuser[nowloc[*k]] == *k + 1)			//踩到自己的地，可買
					{
					one:
						if (*k < 1)
						{
							String^ message = "第一棟房子要" + house1price[nowloc[*k]] + "元，請問是否購買?(y/n)\r\n";
							MessageBoxButtons buttons = MessageBoxButtons::YesNo;
							System::Windows::Forms::DialogResult result;
							// Displays the MessageBox.
							String^ caption = "ask";
							result = MessageBox::Show(message, caption, buttons);

							if (result == System::Windows::Forms::DialogResult::Yes)
								yorn = "y";
							else
								yorn = "n";
						}
						else
							yorn = "y";


						if (yorn == "y")
						{
							house[nowloc[*k]] = 2;
							houseuser[nowloc[*k]] = *k + 1;
							money[*k] = money[*k] - house1price[nowloc[*k]];
							textBox1->Text += "你已在" + site[nowloc[*k]] + "買了一棟房子\r\n";
							textBox1->Text += "你現在還有" + money[*k] + "元\r\n";
							StreamWriter^ f = gcnew StreamWriter(path, true);
							f->WriteLine("{0,9}{1,11}{2,5} 買了一棟房子，花了{3}", money[*k], site[nowloc[*k]], house[nowloc[*k]], house1price[nowloc[*k]]);
							f->Close();
							printmap(player, i, j, nowloc, site, user, hou1, hou2, hou3, house, houseuser);

						}
						else if (yorn == "n")
						{
							StreamWriter^ f = gcnew StreamWriter(path, true);
							f->WriteLine("{0,9}{1,11}{2,5} 沒有買房子", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
							f->Close();
						}

						//cout << "按enter鍵繼續" << endl;
						break;
					}
					else if (houseuser[nowloc[*k]] == *i)		//玩家k+1踩到玩家i的土地
					{
						money[*k] = money[*k] - price[nowloc[*k]] * 0.6;
						money[*i - 1] += price[nowloc[*k]] * 0.6;
						textBox1->Text += "這塊地是" + playername[*i - 1] + "的，付給" + playername[*i - 1] + " " + price[nowloc[*k]] * 0.6 + "元\r\n";
						textBox1->Text += "你現在還有" + money[*k] + "元\r\n";
						StreamWriter^ f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 付了{3}給{4}", money[*k], site[nowloc[*k]], "0", price[nowloc[*k]] * 0.6, playername[*i - 1]);
						f->Close();

						//cout << "按enter鍵繼續" << endl;
						break;
					}
				}

			}
			else if (house[nowloc[*k]] == 2)			//有一棟房子，可蓋第二棟
			{
				for (*i = 1; *i <= *player; (*i)++)
				{
					if (houseuser[nowloc[*k]] == *k + 1)			//踩到自己的地，可買
					{
					two:
						if (*k < 1)
						{
							String^ message = "第二棟房子要" + house2price[nowloc[*k]] + "元，請問是否購買?(y/n)\r\n";
							MessageBoxButtons buttons = MessageBoxButtons::YesNo;
							System::Windows::Forms::DialogResult result;
							// Displays the MessageBox.
							String^ caption = "ask";
							result = MessageBox::Show(message, caption, buttons);

							if (result == System::Windows::Forms::DialogResult::Yes)
								yorn = "y";
							else
								yorn = "n";
						}
						else
							yorn = "y";

						if (yorn == "y")
						{
							house[nowloc[*k]] = 3;
							houseuser[nowloc[*k]] = *k + 1;
							money[*k] = money[*k] - house2price[nowloc[*k]];
							textBox1->Text += "你已在" + site[nowloc[*k]] + "買了兩棟房子\r\n";
							textBox1->Text += "你現在還有" + money[*k] + "元\r\n";
							StreamWriter^ f = gcnew StreamWriter(path, true);
							f->WriteLine("{0,9}{1,11}{2,5} 買了兩棟房子，花了{3}", money[*k], site[nowloc[*k]], house[nowloc[*k]], house2price[nowloc[*k]]);
							f->Close();
							printmap(player, i, j, nowloc, site, user, hou1, hou2, hou3, house, houseuser);

						}
						else if (yorn == "n")
						{
							StreamWriter^ f = gcnew StreamWriter(path, true);
							f->WriteLine("{0,9}{1,11}{2,5} 沒有買房子", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
							f->Close();
						}

						//cout << "按enter鍵繼續" << endl;
						break;
					}
					else if (houseuser[nowloc[*k]] == *i)		//玩家k踩到玩家i(電腦i-1)的房子
					{
						money[*k] = money[*k] - house1price[nowloc[*k]] * 0.6;
						money[*i - 1] += house1price[nowloc[*k]] * 0.6;
						textBox1->Text += "這塊地是" + playername[*i - 1] + "的，付給" + playername[*i - 1] + " " + house1price[nowloc[*k]] * 0.6 + "元\r\n";
						textBox1->Text += "你現在還有" + money[*k] + "元\r\n";
						StreamWriter^ f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 付了{3}給{4}", money[*k], site[nowloc[*k]], "0", house1price[nowloc[*k]] * 0.6, playername[*i - 1]);
						f->Close();

						//cout << "按enter鍵繼續" << endl;
						break;
					}
				}
			}
			else if (house[nowloc[*k]] == 3)			//有兩棟房子，可蓋第三棟
			{
				for (*i = 1; *i <= *player; (*i)++)
				{
					if (houseuser[nowloc[*k]] == *k + 1)			//踩到自己的地，可買
					{
					three:
						if (*k < 1)
						{
							String^ message = "旅館要" + house3price[nowloc[*k]] + "元，請問是否購買?(y/n)\r\n";
							MessageBoxButtons buttons = MessageBoxButtons::YesNo;
							System::Windows::Forms::DialogResult result;
							// Displays the MessageBox.
							String^ caption = "ask";
							result = MessageBox::Show(message, caption, buttons);

							if (result == System::Windows::Forms::DialogResult::Yes)
								yorn = "y";
							else
								yorn = "n";
						}
						else
							yorn = "y";

						if (yorn == "y")
						{
							house[nowloc[*k]] = 4;
							houseuser[nowloc[*k]] = *k + 1;
							money[*k] = money[*k] - house3price[nowloc[*k]];
							textBox1->Text += "你已在" + site[nowloc[*k]] + "買了旅館\r\n";
							textBox1->Text += "你現在還有" + money[*k] + "元\r\n";
							StreamWriter^ f = gcnew StreamWriter(path, true);
							f->WriteLine("{0,9}{1,11}{2,5} 買了旅館，花了{3}", money[*k], site[nowloc[*k]], house[nowloc[*k]], house3price[nowloc[*k]]);
							f->Close();
							printmap(player, i, j, nowloc, site, user, hou1, hou2, hou3, house, houseuser);

						}
						else if (yorn == "n")
						{

							StreamWriter^ f = gcnew StreamWriter(path, true);
							f->WriteLine("{0,9}{1,11}{2,5} 沒有買房子", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
							f->Close();
						}

						//cout << "按enter鍵繼續" << endl;
						break;
					}
					else if (houseuser[nowloc[*k]] == *i)		//玩家1踩到玩家i的房子
					{
						money[*k] = money[*k] - house2price[nowloc[*k]] * 0.6;
						money[*i - 1] += house2price[nowloc[*k]] * 0.6;
						textBox1->Text += "這塊地是" + playername[*i - 1] + "的，付給" + playername[*i - 1] + " " + house2price[nowloc[*k]] * 0.6 + "元\r\n";
						textBox1->Text += "你現在還有" + money[*k] + "元\r\n";
						StreamWriter^ f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 付了{3}給{4}", money[*k], site[nowloc[*k]], "0" , house2price[nowloc[*k]] * 0.6, playername[*i - 1]);
						f->Close();

						//cout << "按enter鍵繼續" << endl;
						break;
					}
				}
			}
			else if (house[nowloc[*k]] == 4)			//到最高建築了，不能做事
			{
				for (*i = 1; *i <= *player; (*i)++)
				{
					if (houseuser[nowloc[*k]] == 1)			//踩到自己的地，已到最高建築
					{
						textBox1->Text += "已到最高建築了，不能買\r\n";
						textBox1->Text += "現在還有" + money[*k] + "元\r\n";
						StreamWriter^ f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 這塊地已達購買上限", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
						f->Close();
						printmap(player, i, j, nowloc, site, user, hou1, hou2, hou3, house, houseuser);

						break;
					}
					else if (houseuser[nowloc[*k]] == *i)		//玩家1踩到玩家i(電腦i-1)的房子
					{
						money[*k] = money[*k] - house3price[nowloc[*k]] * 0.6;
						money[*i - 1] += house3price[nowloc[*k]] * 0.6;
						textBox1->Text += "這棟旅館是" + playername[*i - 1] + "的，付給" + playername[*i - 1] + " " + house3price[nowloc[*k]] * 0.6 + "元\r\n";
						textBox1->Text += "你現在還有" + money[*k] + "元\r\n";
						StreamWriter^ f = gcnew StreamWriter(path, true);
						f->WriteLine("{0,9}{1,11}{2,5} 付了{3}給{4}", money[*k], site[nowloc[*k]], "0", house3price[nowloc[*k]] * 0.6, playername[*i - 1]);
						f->Close();

						//cout << "按enter鍵繼續" << endl;
						break;
					}
				}
			}
			else						//起點
			{
				StreamWriter^ f = gcnew StreamWriter(path, true);
				f->WriteLine("{0,9}{1,11}{2,5} 走到起點", money[*k], site[nowloc[*k]], house[nowloc[*k]]);
				f->Close();

				//cout << "按enter鍵繼續" << endl;
			}

			if (*check == 1)
				break;
			MessageBox::Show("下一位玩家");
		}
		
	}
	else if (*event == 2)					//存檔
	{
		MessageBox::Show("成功存檔" , "Save");
	}
	else if (*event == 3)						//讀檔
	{

		System::Windows::Forms::OpenFileDialog^ f = gcnew System::Windows::Forms::OpenFileDialog;
		/*if (f->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
		f->FileName;
		MessageBox::Show(f->FileName);
		}*/
		DirectoryInfo^ dir = gcnew DirectoryInfo(System::Windows::Forms::Application::StartupPath);
		f->InitialDirectory = dir->Parent->FullName + "\\視窗程式設計第6次作業_4105056021_賴怡呈";
		f->ShowDialog();
		bool^ bReturn = System::IO::File::Exists(f->FileName);
		array<String^>^ fileSplit = gcnew array<String^>(3);
		String^ fullName = f->FileName;

		if (fullName->Contains("\\"))//取檔案名稱就好，也不要.txt
		{
			fileSplit[0] = fullName->Substring(0, fullName->LastIndexOf("\\")); //get path
			fileSplit[1] = fullName->Substring(fullName->LastIndexOf("\\") + 1, (fullName->LastIndexOf(".") - fullName->LastIndexOf("\\") - 1)); //get file name 
			fileSplit[2] = fullName->Substring(fullName->LastIndexOf(".") + 1, (fullName->Length - fullName->LastIndexOf(".") - 1)); //get suffix
		}
		//fileSplit[2] = txt , fileSplit[1]才是檔案名稱
		path = f->FileName;
		name = fileSplit[1];
		initial();
		playername[0] = fileSplit[1];
		*i = 0;
		// 讀取檔案
		StreamReader^ din = File::OpenText(path);
		String^ delimStr = " ";
		array<Char>^ delimiter = delimStr->ToCharArray();
		String^ str;
		int^ count = 0;
		int^ a = 0;
		array<String^>^ words = gcnew array<String^>{};

		while ((str = din->ReadLine()) != nullptr)
		{
			if (*i > 2)
			{
				(*count)++;
				words = str->Split(delimiter);
				*j = 0; *k = 0;
				for (int^ word = 0; *word < words->Length; (*word)++) // Loop while character
				{
					(words[*k] = words[(*j)++]);
					// copied is not \0
					if (words[*k] != "")                    // Increment i as long as
						(*k)++;                                  // character is not a space
				}

				*u = System::Int32::Parse(words[0]);		//加一變成下一個位置，是存*u這個人的step步數
				st[*u] = Convert::ToInt32(words[1]);	//加一變成下一個位置，是存*u這個人的money
				money[*u] = Convert::ToInt32(words[2]);		//加一變成下一個位置，是存*u這個人的site地點
				sit[*u] = (words[3]);					//加一變成下一個位置，是存*u這個人的land土地狀況
				l[*u] = Convert::ToInt32(words[4]);		//加一變成下一個位置，是存*u這個人的event
				for (*j = 0; *j < 32; (*j)++)			//對應txt裡的地點更改他的土地狀況
				{
					if (site[*j] == sit[*u])
					{
						if (l[*u] != 0)
						{
							house[*j] = l[*u];
							houseuser[*j] = *u + 1;
							break;
						}
					}
				}
				if (*u == 3)
					*player = 4;
				else if (*u == 2 && *player != 4)
					*player = 3;
				else if (*u == 1 && *player == 0)
					*player = 2;
				nowloc[*u] = ((nowloc[*u] + st[*u]) % 32);
				if (st[*u] != 0)
				{
					*a = *u;
				}
			}

			(*i)++;
		}
		if (*i == 3)
		{
			*player = 4;

		}
			
		if (*a != *player - 1)
			*turn = *a + 1;  //輪到哪個玩家
		else
			*turn = 0;
		
		din->Close();
		textBox1->Text = "";
		for (*i = 0; *i < *player; (*i)++)
		{
			textBox1->Text += playername[*i] + "現在有" + money[*i] + "元\r\n";
		}
		//textBox1->Text += "輪到" + playername[*turn] + "的回合";

		printmap(player, i, j, nowloc, site, user, hou1, hou2, hou3, house, houseuser);
		textBox3->Visible = false;
		button8->Visible = false;
	}
	else if (*event == 4)						//重新開始
	{
		MessageBox::Show(path + "，這個檔案已清空" , "Restart");
		textBox1->Text = "";
		StreamWriter^ f = File::CreateText(path);
		f->WriteLine("land: 0-don't have any thing ; 1-have this land ; 2-have a house ; 3-have two houses ; 4-have three houses ; ");
		f->WriteLine("user: 0-玩家1  1-玩家2  2-玩家3  3-玩家4");
		f->WriteLine("user {0,4}{1,8}{2,10} land event", "step", "money", "site");
		f->Close();

		initial();
		printmap(player, i, j, nowloc, site, user, hou1, hou2, hou3, house, houseuser);

	}
	else if (*event == 5)			//show
	{
		StreamReader^ sr = File::OpenText(path);
		String^ s = "";
		String^ ss = "";
		while (s = sr->ReadLine())
		{
			ss += s + "\r\n";
		}
		MessageBox::Show(ss , "SHOW");
		sr->Close();
	}


	for (*i = 0; *i < *player; (*i)++)
	{
		if (money[*i] < 0)
		{
			MessageBox::Show(playername[*i] + "破產，遊戲結束","END");
			textBox1->Text = "";
			exit(0);
		}
	}
}




private: System::Void 增加金錢ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->TopMost = false;  // 設定表單最上層顯示
	addmoney^ obj = gcnew addmoney(*player);//把Form1的值給到Form2
	if (obj->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->whichplayer = System::Int32(obj->numericUpDown1->Value);
		this->addhow = System::Convert::ToDouble(obj->textBox2->Text); //從Form2取值並顯示到Form1

		money[*whichplayer - 1] += *addhow;
		MessageBox::Show(""+ money[*whichplayer - 1]);
		StreamWriter^ f = gcnew StreamWriter(path, true);
		f->WriteLine("{0,4}{1,4}{2,9}{3,11}{4,5} 增加{5}元", *whichplayer - 1, "0", money[*whichplayer - 1], site[nowloc[*whichplayer - 1]], house[nowloc[*whichplayer - 1]], *addhow);				//存步數進去txt
		f->Close();
		textBox1->Text = "";
		for (*i = 0; *i < *player; (*i)++)
		{
			textBox1->Text += playername[*i] + "現在有" + money[*i] + "元\r\n";
		}
	}
	
}
private: System::Void 決定移動步數ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->TopMost = false;  // 設定表單最上層顯示
	*check = 1;
	move^ obj = gcnew move(*player);//把Form1的值給到Form2
	if (obj->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->whichplayer = System::Int32(obj->numericUpDown1->Value);
		this->addhow = System::Convert::ToDouble(obj->textBox1->Text); //從Form2取值並顯示到Form1

		/*StreamWriter^ f = gcnew StreamWriter(path, true);
		f->WriteLine("{0,4}{1,4}{2,9}{3,11}{4,5} move{5}步", *whichplayer - 1, *addhow, money[*whichplayer - 1], site[nowloc[*whichplayer - 1]], house[nowloc[*whichplayer - 1]], *addhow);				//存步數進去txt
		f->Close();*/
		textBox1->Text = "";
		for (*i = 0; *i < *player; (*i)++)
		{
			textBox1->Text += playername[*i] + "現在有" + money[*i] + "元\r\n";
		}
		play(1);
	}
	*check = 0;

}

};

}
