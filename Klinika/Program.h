#pragma once

namespace Klinika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		int id_uzytkownika;
	private: System::Windows::Forms::GroupBox^ gbGodziny;
	public:

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ gbSzablony;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::TextBox^ txtU6k;
	private: System::Windows::Forms::TextBox^ txtU6p;
	private: System::Windows::Forms::TextBox^ txtU5k;
	private: System::Windows::Forms::TextBox^ txtU5p;
	private: System::Windows::Forms::TextBox^ txtU4k;
	private: System::Windows::Forms::TextBox^ txtU4p;
	private: System::Windows::Forms::TextBox^ txtU3k;
	private: System::Windows::Forms::TextBox^ txtU3p;
	private: System::Windows::Forms::TextBox^ txtU2k;
	private: System::Windows::Forms::TextBox^ txtU2p;
	private: System::Windows::Forms::TextBox^ txtU1k;
	private: System::Windows::Forms::TextBox^ txtU1p;
	private: System::Windows::Forms::Label^ label15;
	public:

	public:

		// Po³¹czenie z baz¹ danych MySQL Workbench
		String^ konfiguracja = L"datasource=localhost ; port=3306; username=root; password=zaq1@WSX; database=klinika";

		Program(int uzytkownik)
		{
			InitializeComponent();
			id_uzytkownika = uzytkownik;
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dgUzytkownicy;
	private: System::Windows::Forms::GroupBox^ gBEdycja;
	public:
	public:

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnSzukaj_Click;
	private: System::Windows::Forms::TextBox^ txtUNazwa;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnUEdytuj;
	private: System::Windows::Forms::Button^ btnUUsun;
	private: System::Windows::Forms::Button^ btnUDodaj;
	private: System::Windows::Forms::TextBox^ txtULogin;
	private: System::Windows::Forms::TextBox^ txtUNazwisko;
	private: System::Windows::Forms::TextBox^ txtUImie;
	private: System::Windows::Forms::CheckBox^ chbUPracownik;
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtHNowe2;
	private: System::Windows::Forms::TextBox^ txtHNowe1;
	private: System::Windows::Forms::TextBox^ txtHStare;

	private: System::Windows::Forms::Button^ btnHZmien;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Program::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->gbGodziny = (gcnew System::Windows::Forms::GroupBox());
			this->gbSzablony = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtU6k = (gcnew System::Windows::Forms::TextBox());
			this->txtU6p = (gcnew System::Windows::Forms::TextBox());
			this->txtU5k = (gcnew System::Windows::Forms::TextBox());
			this->txtU5p = (gcnew System::Windows::Forms::TextBox());
			this->txtU4k = (gcnew System::Windows::Forms::TextBox());
			this->txtU4p = (gcnew System::Windows::Forms::TextBox());
			this->txtU3k = (gcnew System::Windows::Forms::TextBox());
			this->txtU3p = (gcnew System::Windows::Forms::TextBox());
			this->txtU2k = (gcnew System::Windows::Forms::TextBox());
			this->txtU2p = (gcnew System::Windows::Forms::TextBox());
			this->txtU1k = (gcnew System::Windows::Forms::TextBox());
			this->txtU1p = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnUEdytuj = (gcnew System::Windows::Forms::Button());
			this->btnUUsun = (gcnew System::Windows::Forms::Button());
			this->btnUDodaj = (gcnew System::Windows::Forms::Button());
			this->dgUzytkownicy = (gcnew System::Windows::Forms::DataGridView());
			this->gBEdycja = (gcnew System::Windows::Forms::GroupBox());
			this->chbUPracownik = (gcnew System::Windows::Forms::CheckBox());
			this->txtULogin = (gcnew System::Windows::Forms::TextBox());
			this->txtUNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->txtUImie = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSzukaj_Click = (gcnew System::Windows::Forms::Button());
			this->txtUNazwa = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnHZmien = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtHNowe2 = (gcnew System::Windows::Forms::TextBox());
			this->txtHNowe1 = (gcnew System::Windows::Forms::TextBox());
			this->txtHStare = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->gbGodziny->SuspendLayout();
			this->gbSzablony->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownicy))->BeginInit();
			this->gBEdycja->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(38, 47);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1010, 545);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->gbGodziny);
			this->tabPage1->Controls->Add(this->btnUEdytuj);
			this->tabPage1->Controls->Add(this->btnUUsun);
			this->tabPage1->Controls->Add(this->btnUDodaj);
			this->tabPage1->Controls->Add(this->dgUzytkownicy);
			this->tabPage1->Controls->Add(this->gBEdycja);
			this->tabPage1->Controls->Add(this->btnSzukaj_Click);
			this->tabPage1->Controls->Add(this->txtUNazwa);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1002, 519);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"U¿ytkownicy";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// gbGodziny
			// 
			this->gbGodziny->Controls->Add(this->gbSzablony);
			this->gbGodziny->Controls->Add(this->txtU6k);
			this->gbGodziny->Controls->Add(this->txtU6p);
			this->gbGodziny->Controls->Add(this->txtU5k);
			this->gbGodziny->Controls->Add(this->txtU5p);
			this->gbGodziny->Controls->Add(this->txtU4k);
			this->gbGodziny->Controls->Add(this->txtU4p);
			this->gbGodziny->Controls->Add(this->txtU3k);
			this->gbGodziny->Controls->Add(this->txtU3p);
			this->gbGodziny->Controls->Add(this->txtU2k);
			this->gbGodziny->Controls->Add(this->txtU2p);
			this->gbGodziny->Controls->Add(this->txtU1k);
			this->gbGodziny->Controls->Add(this->txtU1p);
			this->gbGodziny->Controls->Add(this->label13);
			this->gbGodziny->Controls->Add(this->label12);
			this->gbGodziny->Controls->Add(this->label11);
			this->gbGodziny->Controls->Add(this->label10);
			this->gbGodziny->Controls->Add(this->label9);
			this->gbGodziny->Controls->Add(this->label8);
			this->gbGodziny->Location = System::Drawing::Point(35, 298);
			this->gbGodziny->Name = L"gbGodziny";
			this->gbGodziny->Size = System::Drawing::Size(485, 203);
			this->gbGodziny->TabIndex = 8;
			this->gbGodziny->TabStop = false;
			this->gbGodziny->Text = L"Godziny pracy";
			// 
			// gbSzablony
			// 
			this->gbSzablony->Controls->Add(this->button4);
			this->gbSzablony->Controls->Add(this->button3);
			this->gbSzablony->Controls->Add(this->button2);
			this->gbSzablony->Controls->Add(this->button1);
			this->gbSzablony->Location = System::Drawing::Point(344, 25);
			this->gbSzablony->Name = L"gbSzablony";
			this->gbSzablony->Size = System::Drawing::Size(135, 160);
			this->gbSzablony->TabIndex = 21;
			this->gbSzablony->TabStop = false;
			this->gbSzablony->Text = L"Szablony";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(28, 114);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"10:00 - 18:00";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(28, 86);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9:00 - 17:00";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(28, 57);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8:00 - 16:00";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Program::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7:00 - 15:00";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Program::button1_Click);
			// 
			// txtU6k
			// 
			this->txtU6k->Location = System::Drawing::Point(223, 165);
			this->txtU6k->Name = L"txtU6k";
			this->txtU6k->Size = System::Drawing::Size(100, 20);
			this->txtU6k->TabIndex = 18;
			// 
			// txtU6p
			// 
			this->txtU6p->Location = System::Drawing::Point(94, 165);
			this->txtU6p->Name = L"txtU6p";
			this->txtU6p->Size = System::Drawing::Size(100, 20);
			this->txtU6p->TabIndex = 17;
			// 
			// txtU5k
			// 
			this->txtU5k->Location = System::Drawing::Point(223, 141);
			this->txtU5k->Name = L"txtU5k";
			this->txtU5k->Size = System::Drawing::Size(100, 20);
			this->txtU5k->TabIndex = 16;
			// 
			// txtU5p
			// 
			this->txtU5p->Location = System::Drawing::Point(94, 141);
			this->txtU5p->Name = L"txtU5p";
			this->txtU5p->Size = System::Drawing::Size(100, 20);
			this->txtU5p->TabIndex = 15;
			// 
			// txtU4k
			// 
			this->txtU4k->Location = System::Drawing::Point(223, 115);
			this->txtU4k->Name = L"txtU4k";
			this->txtU4k->Size = System::Drawing::Size(100, 20);
			this->txtU4k->TabIndex = 14;
			// 
			// txtU4p
			// 
			this->txtU4p->Location = System::Drawing::Point(94, 115);
			this->txtU4p->Name = L"txtU4p";
			this->txtU4p->Size = System::Drawing::Size(100, 20);
			this->txtU4p->TabIndex = 13;
			// 
			// txtU3k
			// 
			this->txtU3k->Location = System::Drawing::Point(223, 89);
			this->txtU3k->Name = L"txtU3k";
			this->txtU3k->Size = System::Drawing::Size(100, 20);
			this->txtU3k->TabIndex = 12;
			// 
			// txtU3p
			// 
			this->txtU3p->Location = System::Drawing::Point(94, 89);
			this->txtU3p->Name = L"txtU3p";
			this->txtU3p->Size = System::Drawing::Size(100, 20);
			this->txtU3p->TabIndex = 11;
			// 
			// txtU2k
			// 
			this->txtU2k->Location = System::Drawing::Point(223, 63);
			this->txtU2k->Name = L"txtU2k";
			this->txtU2k->Size = System::Drawing::Size(100, 20);
			this->txtU2k->TabIndex = 10;
			// 
			// txtU2p
			// 
			this->txtU2p->Location = System::Drawing::Point(94, 63);
			this->txtU2p->Name = L"txtU2p";
			this->txtU2p->Size = System::Drawing::Size(100, 20);
			this->txtU2p->TabIndex = 9;
			// 
			// txtU1k
			// 
			this->txtU1k->Location = System::Drawing::Point(223, 38);
			this->txtU1k->Name = L"txtU1k";
			this->txtU1k->Size = System::Drawing::Size(100, 20);
			this->txtU1k->TabIndex = 8;
			// 
			// txtU1p
			// 
			this->txtU1p->Location = System::Drawing::Point(94, 38);
			this->txtU1p->Name = L"txtU1p";
			this->txtU1p->Size = System::Drawing::Size(100, 20);
			this->txtU1p->TabIndex = 7;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(21, 168);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Sobota";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(25, 144);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 13);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Pi¹tek";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(19, 118);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 13);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Czwartek";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(25, 92);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Œroda";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(24, 66);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Wtorek";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Poniedzia³ek";
			// 
			// btnUEdytuj
			// 
			this->btnUEdytuj->Enabled = false;
			this->btnUEdytuj->Location = System::Drawing::Point(186, 226);
			this->btnUEdytuj->Name = L"btnUEdytuj";
			this->btnUEdytuj->Size = System::Drawing::Size(75, 23);
			this->btnUEdytuj->TabIndex = 7;
			this->btnUEdytuj->Text = L"Edytuj";
			this->btnUEdytuj->UseVisualStyleBackColor = true;
			this->btnUEdytuj->Click += gcnew System::EventHandler(this, &Program::btnUEdytuj_Click);
			// 
			// btnUUsun
			// 
			this->btnUUsun->Enabled = false;
			this->btnUUsun->Location = System::Drawing::Point(283, 226);
			this->btnUUsun->Name = L"btnUUsun";
			this->btnUUsun->Size = System::Drawing::Size(75, 23);
			this->btnUUsun->TabIndex = 6;
			this->btnUUsun->Text = L"Usuñ";
			this->btnUUsun->UseVisualStyleBackColor = true;
			this->btnUUsun->Click += gcnew System::EventHandler(this, &Program::btnUUsun_Click_1);
			// 
			// btnUDodaj
			// 
			this->btnUDodaj->Location = System::Drawing::Point(92, 226);
			this->btnUDodaj->Name = L"btnUDodaj";
			this->btnUDodaj->Size = System::Drawing::Size(75, 23);
			this->btnUDodaj->TabIndex = 5;
			this->btnUDodaj->Text = L"Dodaj";
			this->btnUDodaj->UseVisualStyleBackColor = true;
			this->btnUDodaj->Click += gcnew System::EventHandler(this, &Program::btnUDodaj_Click);
			// 
			// dgUzytkownicy
			// 
			this->dgUzytkownicy->AllowUserToAddRows = false;
			this->dgUzytkownicy->AllowUserToOrderColumns = true;
			this->dgUzytkownicy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgUzytkownicy->Location = System::Drawing::Point(447, 26);
			this->dgUzytkownicy->Name = L"dgUzytkownicy";
			this->dgUzytkownicy->Size = System::Drawing::Size(540, 194);
			this->dgUzytkownicy->TabIndex = 4;
			this->dgUzytkownicy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgUzytkownicy_CellClick);
			// 
			// gBEdycja
			// 
			this->gBEdycja->Controls->Add(this->chbUPracownik);
			this->gBEdycja->Controls->Add(this->txtULogin);
			this->gBEdycja->Controls->Add(this->txtUNazwisko);
			this->gBEdycja->Controls->Add(this->txtUImie);
			this->gBEdycja->Controls->Add(this->label7);
			this->gBEdycja->Controls->Add(this->label6);
			this->gBEdycja->Controls->Add(this->label5);
			this->gBEdycja->Location = System::Drawing::Point(35, 73);
			this->gBEdycja->Name = L"gBEdycja";
			this->gBEdycja->Size = System::Drawing::Size(379, 147);
			this->gBEdycja->TabIndex = 3;
			this->gBEdycja->TabStop = false;
			this->gBEdycja->Text = L"Edycja danych u¿ytkownika";
			// 
			// chbUPracownik
			// 
			this->chbUPracownik->AutoSize = true;
			this->chbUPracownik->Location = System::Drawing::Point(303, 63);
			this->chbUPracownik->Name = L"chbUPracownik";
			this->chbUPracownik->Size = System::Drawing::Size(76, 17);
			this->chbUPracownik->TabIndex = 6;
			this->chbUPracownik->Text = L"Pracownik";
			this->chbUPracownik->UseVisualStyleBackColor = true;
			// 
			// txtULogin
			// 
			this->txtULogin->Location = System::Drawing::Point(103, 103);
			this->txtULogin->Name = L"txtULogin";
			this->txtULogin->Size = System::Drawing::Size(190, 20);
			this->txtULogin->TabIndex = 5;
			// 
			// txtUNazwisko
			// 
			this->txtUNazwisko->Location = System::Drawing::Point(103, 74);
			this->txtUNazwisko->Name = L"txtUNazwisko";
			this->txtUNazwisko->Size = System::Drawing::Size(190, 20);
			this->txtUNazwisko->TabIndex = 4;
			// 
			// txtUImie
			// 
			this->txtUImie->Location = System::Drawing::Point(103, 40);
			this->txtUImie->Name = L"txtUImie";
			this->txtUImie->Size = System::Drawing::Size(190, 20);
			this->txtUImie->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Login:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Nazwisko:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Imiê:";
			// 
			// btnSzukaj_Click
			// 
			this->btnSzukaj_Click->Location = System::Drawing::Point(349, 26);
			this->btnSzukaj_Click->Name = L"btnSzukaj_Click";
			this->btnSzukaj_Click->Size = System::Drawing::Size(65, 23);
			this->btnSzukaj_Click->TabIndex = 2;
			this->btnSzukaj_Click->Text = L"Szukaj";
			this->btnSzukaj_Click->UseVisualStyleBackColor = true;
			this->btnSzukaj_Click->Click += gcnew System::EventHandler(this, &Program::btnSzukaj_Click_Click);
			// 
			// txtUNazwa
			// 
			this->txtUNazwa->Location = System::Drawing::Point(119, 29);
			this->txtUNazwa->Name = L"txtUNazwa";
			this->txtUNazwa->Size = System::Drawing::Size(209, 20);
			this->txtUNazwa->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"U¿ytkownik:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1002, 519);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zmiana has³a";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(410, 77);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(192, 39);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Zmiana has³a";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnHZmien);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtHNowe2);
			this->groupBox1->Controls->Add(this->txtHNowe1);
			this->groupBox1->Controls->Add(this->txtHStare);
			this->groupBox1->Location = System::Drawing::Point(309, 158);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(372, 250);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Zmiana has³a";
			// 
			// btnHZmien
			// 
			this->btnHZmien->Enabled = false;
			this->btnHZmien->Location = System::Drawing::Point(149, 180);
			this->btnHZmien->Name = L"btnHZmien";
			this->btnHZmien->Size = System::Drawing::Size(160, 37);
			this->btnHZmien->TabIndex = 6;
			this->btnHZmien->Text = L"ZMIEÑ";
			this->btnHZmien->UseVisualStyleBackColor = true;
			this->btnHZmien->Click += gcnew System::EventHandler(this, &Program::btnHZmien_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Powtórz has³o:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nowe has³o:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Stare has³o:";
			// 
			// txtHNowe2
			// 
			this->txtHNowe2->Location = System::Drawing::Point(149, 133);
			this->txtHNowe2->Name = L"txtHNowe2";
			this->txtHNowe2->Size = System::Drawing::Size(160, 20);
			this->txtHNowe2->TabIndex = 2;
			this->txtHNowe2->TextChanged += gcnew System::EventHandler(this, &Program::txtHNowe2_TextChanged);
			// 
			// txtHNowe1
			// 
			this->txtHNowe1->Location = System::Drawing::Point(149, 83);
			this->txtHNowe1->Name = L"txtHNowe1";
			this->txtHNowe1->Size = System::Drawing::Size(160, 20);
			this->txtHNowe1->TabIndex = 1;
			this->txtHNowe1->TextChanged += gcnew System::EventHandler(this, &Program::txtHNowe1_TextChanged);
			// 
			// txtHStare
			// 
			this->txtHStare->Location = System::Drawing::Point(149, 34);
			this->txtHStare->Name = L"txtHStare";
			this->txtHStare->Size = System::Drawing::Size(160, 20);
			this->txtHStare->TabIndex = 0;
			this->txtHStare->TextChanged += gcnew System::EventHandler(this, &Program::txtHStare_TextChanged);
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1179, 654);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Program";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Program";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->gbGodziny->ResumeLayout(false);
			this->gbGodziny->PerformLayout();
			this->gbSzablony->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownicy))->EndInit();
			this->gBEdycja->ResumeLayout(false);
			this->gBEdycja->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}


#pragma endregion

		int id_rekordu;
		int pracownik_rodzaj;

		private:  Void btnHZmien_pokaz()
		{
			if (txtHStare->Text != "" && txtHNowe1->Text != "" && txtHNowe1->Text == txtHNowe2->Text && txtHNowe1->Text != txtHStare->Text)
			{
				btnHZmien->Enabled = true;
			}
			else
			{
				btnHZmien->Enabled = false;
			}
		}

	private: System::Void txtHStare_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		btnHZmien_pokaz();
	}
	private: System::Void txtHNowe1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		btnHZmien_pokaz();
	}
	private: System::Void txtHNowe2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		btnHZmien_pokaz();
	}

	private: System::Void btnHZmien_Click(System::Object^ sender, System::EventArgs^ e) {

	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("update uzytkownik set haslo = md5('"+txtHNowe1->Text+"') where uzytkownik_id = "+id_uzytkownika+" and haslo = md5('"+txtHStare->Text+"')", laczBaze);

		try 
		{
			laczBaze->Open();
			if (zapytanie->ExecuteNonQuery())
			{
				MessageBox::Show("Has³o zosta³o zmienione");
			}
			else
			{
				MessageBox::Show("Has³o nie zosta³o zmienione");
			}
			laczBaze->Close();
		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);

		}
	}

	//FUNCKJE *************************************************************************************************************************************************
	private: Void pokaz_siatke() {

		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, uzytkownik_nazwa AS login, pracownik FROM uzytkownik;", laczBaze);
		try 
		{
			laczBaze->Open();
			MySqlDataAdapter^ KlinikaBaza = gcnew MySqlDataAdapter();
			KlinikaBaza->SelectCommand = zapytanie;
			DataTable^ Utabela = gcnew DataTable();
			KlinikaBaza->Fill(Utabela);
			BindingSource^ zrodloKlinika = gcnew BindingSource();
			zrodloKlinika->DataSource = Utabela;
			dgUzytkownicy->DataSource = zrodloKlinika;
			laczBaze->Close();
		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);

		}
		dgUzytkownicy->Columns[0]->Visible = false;
	}

	private: Void wyczysc(Control^ zbiorkontrolek)
	{
		for each (Control ^ element in zbiorkontrolek->Controls)
		{
			if (element->GetType() == TextBox::typeid)
				element->Text = "";

			chbUPracownik->Checked = false;
			btnUEdytuj->Enabled = false;
			btnUUsun->Enabled = false;
		}
	}

	private: Void czas_pracy() {
		array<TextBox^>^ czas_pocz = { txtU1p, txtU2p, txtU3p, txtU4p, txtU5p, txtU6p };
		array<TextBox^>^ czas_kon = { txtU1k, txtU2k, txtU3k, txtU4k, txtU5k, txtU6k };

		for (int i = 0; i <= 5; i++)
		{
			czas_pocz[i]->Text = "7:00";
			czas_kon[i]->Text = "15:00";
		}
	}


	private: System::Void btnSzukaj_Click_Click(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, uzytkownik_nazwa AS login, pracownik FROM uzytkownik where CONCAT(imie, ' ', nazwisko, uzytkownik_nazwa) LIKE '%" + txtUNazwa->Text + "%';" , laczBaze);
		try {
			laczBaze->Open();
			MySqlDataAdapter^ KlinikaBaza = gcnew MySqlDataAdapter();
			KlinikaBaza->SelectCommand = zapytanie;
			DataTable^ Utabela = gcnew DataTable();
			KlinikaBaza->Fill(Utabela);
			BindingSource^ zrodloKlinika = gcnew BindingSource();
			zrodloKlinika->DataSource = Utabela;
			dgUzytkownicy->DataSource = zrodloKlinika;
			laczBaze->Close();
		
		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);

		}
		wyczysc(gBEdycja);
		dgUzytkownicy->Columns[0]->Visible = false;
	}

	//SIATKA U¯YTKOWNIKÓW
	private: System::Void dgUzytkownicy_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		if (e->RowIndex >= 0) 
		{
			id_rekordu = Convert::ToInt32(dgUzytkownicy->Rows[e->RowIndex]->Cells[0]->Value);
			txtUImie->Text = dgUzytkownicy->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
			txtUNazwisko->Text = dgUzytkownicy->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
			txtULogin->Text = dgUzytkownicy->Rows[e->RowIndex]->Cells["login"]->Value->ToString();
			chbUPracownik->Checked = Convert::ToBoolean(dgUzytkownicy->Rows[e->RowIndex]->Cells["pracownik"]->Value);
		}
			btnUEdytuj->Enabled = true;
			btnUUsun->Enabled = true;
	}


	private: Void uzytkownik_rodzaj()
	{
		if (chbUPracownik->Checked)
		{
			pracownik_rodzaj = 1;
		}
		else{
			pracownik_rodzaj = 0;
		}
	}
		
	// DODAWANIE
	private: System::Void btnUDodaj_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtUImie->Text->Length < 3 || txtUNazwisko->Text->Length < 5 || txtULogin->Text->Length <= 4)
		{
			MessageBox::Show("WprowadŸ poprawne dane!");
			return;
		}
		else
		{
			MessageBox::Show("Dane poprawne");
			uzytkownik_rodzaj();
		}

		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczBaze->Open();

		transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;

		try
		{
			polecenie->CommandText = "INSERT INTO uzytkownik SET imie='" + txtUImie->Text + "', nazwisko='" + txtUNazwisko->Text + "', uzytkownik_nazwa = '" + txtULogin->Text + "', haslo = '" + txtULogin->Text + "', pracownik=" + pracownik_rodzaj + "";
			polecenie->ExecuteNonQuery();

			if (chbUPracownik->Checked)
			{
				polecenie->CommandText = "INSERT INTO godziny SET uzytkownik_id=last_insert_id(), pon_od='" + txtU1p->Text + "', pon_do= '" + txtU1k->Text + "',wt_od='" + txtU2p->Text + "', wt_do= '" + txtU2k->Text + "', sr_od='" + txtU3p->Text + "', sr_do= '" + txtU3k->Text + "', czw_od='" + txtU4p->Text + "', czw_do= '" + txtU4k->Text + "',pt_od='" + txtU5p->Text + "', pt_do= '" + txtU5k->Text + "',so_od='" + txtU6p->Text + "', so_do= '" + txtU6k->Text + "';";
				polecenie->ExecuteNonQuery();
				MessageBox::Show("Pracownik" + txtULogin->Text + "zostal dodany");
			}
			else {
				MessageBox::Show("Uzytkownik" + txtULogin->Text + "zostal dodany");
			}				

			transakcja->Commit();
		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_siatke();
		wyczysc(gBEdycja);

		MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE imie, nazwisko, uzytkownik_nazwa FROM uzytkownik where CONCAT(imie, ' ', nazwisko, uzytkownik_nazwa) LIKE '%" + txtUNazwa->Text + "%';", laczBaze);
	}

	// USUWANIE
	private: System::Void btnUUsun_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (id_rekordu == 1)
		{
			// Usuwanie admina
			MessageBox::Show("Odmowa dostêpu", "Uwaga!", MessageBoxButtons::OK, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::Yes;
			return;
			
		}
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ trasnsakcja;
		laczBaze->Open();

		trasnsakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;
		polecenie->Transaction = trasnsakcja;

		try 
		{
			if (MessageBox::Show("Czy na pewno chcesz usun¹æ u¿ytkownika " + txtULogin->Text + "" + "? ", "Uwaga!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				polecenie->CommandText = "DELETE FROM uzytkownik WHERE uzytkownik_id= " + id_rekordu + "", laczBaze;
				polecenie->ExecuteNonQuery();
				trasnsakcja->Commit();
				MessageBox::Show("Usuniêto u¿ytkownika " + txtULogin->Text + "", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes;
			}
		}
		catch (Exception^ komunikat) 
		{
			MessageBox::Show(komunikat->Message);
			trasnsakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_siatke();
		wyczysc(gBEdycja);

		//MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE imie, nazwisko, uzytkownik_nazwa FROM uzytkownik where CONCAT(imie, ' ', nazwisko, uzytkownik_nazwa) LIKE '%" + txtUNazwa->Text + "%';", laczBaze);
	}

	// EDYTOWANIE
	private: System::Void btnUEdytuj_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtUImie->Text->Length < 3 || txtUNazwisko->Text->Length < 5 || txtULogin->Text->Length <= 4)
		{
			MessageBox::Show("WprowadŸ poprawne dane!");
			return;
		}
		else
		{
			//MessageBox::Show("Dane zosta³y zmodyfikowane");
			uzytkownik_rodzaj();
		}

		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczBaze->Open();

		transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;

		try
		{
			polecenie->CommandText = "UPDATE uzytkownik SET imie='" + txtUImie->Text + "', nazwisko='" + txtUNazwisko->Text + "', uzytkownik_nazwa = '" + txtULogin->Text + "', pracownik='"+pracownik_rodzaj+"'WHERE uzytkownik_id="+id_rekordu+";";
			polecenie->ExecuteNonQuery();
			transakcja->Commit();
			MessageBox::Show("Dane u¿ytkownika "+txtULogin->Text+" zosta³y zmodyfikowane");
			/*if (chbUPracownik->Checked)
			{
				polecenie->CommandText = "INSERT INTO godziny SET uzytkownik_id=last_insert_id(), pon_od='" + txtU1p->Text + "', pon_do= '" + txtU1k->Text + "',wt_od='" + txtU2p->Text + "', wt_do= '" + txtU2k->Text + "', sr_od='" + txtU3p->Text + "', sr_do= '" + txtU3k->Text + "', czw_od='" + txtU4p->Text + "', czw_do= '" + txtU4k->Text + "',pt_od='" + txtU5p->Text + "', pt_do= '" + txtU5k->Text + "',so_od='" + txtU6p->Text + "', so_do= '" + txtU6k->Text + "';";
				polecenie->ExecuteNonQuery();
				MessageBox::Show("Pracownik" + txtULogin->Text + "zostal dodany");
			}
			else {
				MessageBox::Show("Uzytkownik" + txtULogin->Text + "zostal dodany");
			}*/

			
		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_siatke();
		wyczysc(gBEdycja);

		MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE imie, nazwisko, uzytkownik_nazwa FROM uzytkownik where CONCAT(imie, ' ', nazwisko, uzytkownik_nazwa) LIKE '%" + txtUNazwa->Text + "%';", laczBaze);



		/*MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ trasnsakcja;
		laczBaze->Open();

		trasnsakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;
		polecenie->Transaction = trasnsakcja;

		try {	
				polecenie->CommandText = "UPDATE uzytkownik SET imie='"+txtUImie->Text+"', nazwisko='" + txtUNazwisko->Text + ", uzytkownik_nazwa = '"+txtULogin->Text+"'", laczBaze;
				polecenie->ExecuteNonQuery();
				trasnsakcja->Commit();
			}
	
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			trasnsakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_siatke();
		wyczysc(gBEdycja);*/
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		czas_pracy();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}