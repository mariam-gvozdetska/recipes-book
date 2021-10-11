#pragma once

namespace RecipesBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddRecipe
	/// </summary>
	public ref class AddRecipe : public System::Windows::Forms::Form
	{
	public:
		AddRecipe(void)
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
		~AddRecipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NameLabel;
	protected:
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ ingredientsTextBox;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ cookingStepsTextBox;

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
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ingredientsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cookingStepsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// NameLabel
			// 
			this->NameLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameLabel->Location = System::Drawing::Point(15, 89);
			this->NameLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(245, 61);
			this->NameLabel->TabIndex = 20;
			this->NameLabel->Text = L"Enter title:";
			this->NameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nameTextBox
			// 
			this->nameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTextBox->Location = System::Drawing::Point(15, 156);
			this->nameTextBox->Margin = System::Windows::Forms::Padding(6);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(384, 56);
			this->nameTextBox->TabIndex = 18;
			// 
			// CancelButton
			// 
			this->CancelButton->BackColor = System::Drawing::Color::Red;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelButton->Location = System::Drawing::Point(15, 744);
			this->CancelButton->Margin = System::Windows::Forms::Padding(6);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(384, 74);
			this->CancelButton->TabIndex = 17;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = false;
			this->CancelButton->Click += gcnew System::EventHandler(this, &AddRecipe::CancelButton_Click);
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->Location = System::Drawing::Point(15, 658);
			this->addButton->Margin = System::Windows::Forms::Padding(6);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(384, 74);
			this->addButton->TabIndex = 16;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &AddRecipe::addButton_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 9);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(530, 62);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Add new recipe to the recipe book";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 218);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(384, 61);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Enter ingredient:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ingredientsTextBox
			// 
			this->ingredientsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ingredientsTextBox->Location = System::Drawing::Point(15, 285);
			this->ingredientsTextBox->Margin = System::Windows::Forms::Padding(6);
			this->ingredientsTextBox->Name = L"ingredientsTextBox";
			this->ingredientsTextBox->Size = System::Drawing::Size(384, 56);
			this->ingredientsTextBox->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 347);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(384, 61);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Enter cooking steps:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cookingStepsTextBox
			// 
			this->cookingStepsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cookingStepsTextBox->Location = System::Drawing::Point(15, 414);
			this->cookingStepsTextBox->Margin = System::Windows::Forms::Padding(6);
			this->cookingStepsTextBox->Multiline = true;
			this->cookingStepsTextBox->Name = L"cookingStepsTextBox";
			this->cookingStepsTextBox->Size = System::Drawing::Size(384, 232);
			this->cookingStepsTextBox->TabIndex = 28;
			// 
			// AddRecipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 832);
			this->Controls->Add(this->cookingStepsTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ingredientsTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NameLabel);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->addButton);
			this->Name = L"AddRecipe";
			this->Text = L"AddRecipe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			MessageBox::Show("You have successfully added new recipe.");
		}
		private: System::Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
};
}
