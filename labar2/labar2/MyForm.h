#pragma once

namespace labar2 {
#pragma once

	const int n = 10;
	int mas[n];

	

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(165, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(179, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Початковий масив";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column2,
					this->Column3
			});
			this->dataGridView2->Location = System::Drawing::Point(391, 131);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(305, 150);
			this->dataGridView2->TabIndex = 1;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Змінений масив";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Сортований масив";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(191, 302);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Заповнити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(463, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 34);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Замінити/Сортувати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(100, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(644, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Підрахувати кількість додатних елементів у даному одновимірному масиві. Виконати "
				L"сортування";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 403);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {// очистити таблицю
		dataGridView1->Rows->Clear();

		// створити 10 рядків
		dataGridView1->Rows->Add(n);

		// генератор випадкових чисел
		Random^ rand = gcnew Random();

		for (int i = 0; i < n; i++)
		{
			// випадкові числа
			mas[i] = rand->Next(-100, 100);

			// запис у таблицю
			dataGridView1->Rows[i]->Cells[0]->Value = mas[i];

			// колір комірки
			dataGridView1->Rows[i]->Cells[0]->Style->BackColor = Color::Plum;
		}
	}

private: System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {

	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();

	// Додаємо два стовпці
	dataGridView2->Columns->Add("Col1", "Початковий масив");
	dataGridView2->Columns->Add("Col2", "Відсортований масив");

	dataGridView2->Rows->Add(n);

	int tempMas[100];
	int countPositive = 0;

	// Копіюємо масив і рахуємо додатні елементи
	for (int i = 0; i < n; i++) {

		tempMas[i] = mas[i];

		if (mas[i] > 0) {
			countPositive++;
		}

		// Перший стовпець – початковий масив
		dataGridView2->Rows[i]->Cells[0]->Value = mas[i];
		dataGridView2->Rows[i]->Cells[0]->Style->BackColor = Color::Pink;
	}

	// Сортування за спаданням
	for (int i = 0; i < n - 1; i++) {

		int maxIndex = i;

		for (int j = i + 1; j < n; j++) {
			if (tempMas[j] > tempMas[maxIndex]) {
				maxIndex = j;
			}
		}

		int temp = tempMas[i];
		tempMas[i] = tempMas[maxIndex];
		tempMas[maxIndex] = temp;
	}

	// Виведення відсортованого масиву
	for (int i = 0; i < n; i++) {
		dataGridView2->Rows[i]->Cells[1]->Value = tempMas[i];
		dataGridView2->Rows[i]->Cells[1]->Style->BackColor = Color::AliceBlue;
	}

	MessageBox::Show("Кількість додатних елементів: " + countPositive);
}

};
}
