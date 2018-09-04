#pragma once

#define TEXT_TEATIME_EXIT "Exit"
#define TEXT_TEATIME_SETTINGS "Settings"

namespace TeaTime {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeaTime
	/// </summary>
	public ref class TeaTime : public System::Windows::Forms::Form
	{
	public:
		TeaTime(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeaTime()
		{
			if (components)
			{
				delete components;
			}
		}

		static void exit(System::Object^ sender, System::EventArgs^ args) {
			System::Windows::Forms::Application::Exit();
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Custom components
		// custom component declaration
		System::Windows::Forms::NotifyIcon ^mWinTrayObject;
		System::Windows::Forms::ContextMenu ^mWinContextMenu;


#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// TeaTime
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(318, 217);
			this->Name = L"TeaTime";
			this->Text = L"TeaTime";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
