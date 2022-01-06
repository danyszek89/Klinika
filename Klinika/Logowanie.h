#pragma once
#include "Program.h"

namespace Klinika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Logowanie
	/// </summary>
	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNazwa;
	private: System::Windows::Forms::TextBox^ txtHaslo;
	private: System::Windows::Forms::Button^ btnZaloguj;
	private: System::Windows::Forms::Button^ btnAnuluj;
	private: System::Windows::Forms::Label^ label3;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Logowanie::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNazwa = (gcnew System::Windows::Forms::TextBox());
			this->txtHaslo = (gcnew System::Windows::Forms::TextBox());
			this->btnZaloguj = (gcnew System::Windows::Forms::Button());
			this->btnAnuluj = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(131, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nazwa u¿ytkownika:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(178, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Has³o:";
			// 
			// txtNazwa
			// 
			this->txtNazwa->Location = System::Drawing::Point(288, 116);
			this->txtNazwa->Name = L"txtNazwa";
			this->txtNazwa->Size = System::Drawing::Size(148, 20);
			this->txtNazwa->TabIndex = 2;
			this->txtNazwa->Text = L"admin";
			this->txtNazwa->TextChanged += gcnew System::EventHandler(this, &Logowanie::txtNazwa_TextChanged);
			// 
			// txtHaslo
			// 
			this->txtHaslo->Location = System::Drawing::Point(288, 167);
			this->txtHaslo->Name = L"txtHaslo";
			this->txtHaslo->PasswordChar = '*';
			this->txtHaslo->Size = System::Drawing::Size(148, 20);
			this->txtHaslo->TabIndex = 3;
			this->txtHaslo->Text = L"123";
			this->txtHaslo->TextChanged += gcnew System::EventHandler(this, &Logowanie::txtHaslo_TextChanged);
			// 
			// btnZaloguj
			// 
			this->btnZaloguj->Location = System::Drawing::Point(132, 242);
			this->btnZaloguj->Name = L"btnZaloguj";
			this->btnZaloguj->Size = System::Drawing::Size(128, 45);
			this->btnZaloguj->TabIndex = 6;
			this->btnZaloguj->Text = L"ZALOGUJ";
			this->btnZaloguj->Click += gcnew System::EventHandler(this, &Logowanie::btnZaloguj_Click);
			// 
			// btnAnuluj
			// 
			this->btnAnuluj->Location = System::Drawing::Point(308, 242);
			this->btnAnuluj->Name = L"btnAnuluj";
			this->btnAnuluj->Size = System::Drawing::Size(128, 45);
			this->btnAnuluj->TabIndex = 5;
			this->btnAnuluj->Text = L"ANULUJ";
			this->btnAnuluj->UseVisualStyleBackColor = true;
			this->btnAnuluj->Click += gcnew System::EventHandler(this, &Logowanie::btnAnuluj_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(226, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 36);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Logowanie";
			this->label3->Click += gcnew System::EventHandler(this, &Logowanie::label3_Click);
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 337);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnAnuluj);
			this->Controls->Add(this->btnZaloguj);
			this->Controls->Add(this->txtHaslo);
			this->Controls->Add(this->txtNazwa);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Logowanie";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Logowanie";
			this->Load += gcnew System::EventHandler(this, &Logowanie::Logowanie_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnAnuluj_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnZaloguj_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ konfiguracja = L"datasource=localhost ; port=3306; username=root; password=zaq1@WSX; database=klinika";
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	//MySqlCommand^ zapytanie = gcnew MySqlCommand("Select * FROM uzytkownik WHERE uzytkownik_nazwa='" + txtNazwa->Text + "' AND haslo ='" + txtHaslo->Text + "'", laczBaze);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("select * from uzytkownik where uzytkownik_nazwa='"+txtNazwa->Text+"' and haslo = md5('"+txtHaslo->Text+"');", laczBaze);
	MySqlDataReader^ odczytanie;

	try
	{
		laczBaze->Open();
		odczytanie = zapytanie->ExecuteReader();

		if (odczytanie->Read())
		{
			int id_uzytkownika = odczytanie->GetInt32(0);

			this->Hide();
			Program^ program = gcnew Program(id_uzytkownika);
			program->ShowDialog();
			this->Close();
		}

		else
		{
			MessageBox::Show("B³êdne dane logowania");
		}
	}

	catch (Exception^ ex) 
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void txtNazwa_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtHaslo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Logowanie_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
