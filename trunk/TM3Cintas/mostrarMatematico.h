#pragma once

namespace TM3Cintas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de mostrarMatematico
	/// </summary>
	public ref class mostrarMatematico : public System::Windows::Forms::Form
	{
	public:
		mostrarMatematico(int cantidadEstados, int estadosFinales[11], String^ funcTrans, int cantLin)
		{
			InitializeComponent();
			try{
				this->textBox1->Text="=== MAQUINA DE TURING ===" + "\r\n" + "\r\n"
					+ "M = ( Q, E, T, q0, B, F, D )"+ "\r\n" + "\r\n";
			
				int i=0;

				// Estados Q
				this->textBox1->AppendText("Q = {");
				while(i<cantidadEstados){
					this->textBox1->AppendText(" q" + i);
					if((i+1)==cantidadEstados){
						this->textBox1->AppendText(" ");
					}else{
						this->textBox1->AppendText(", ");
					}
					i=i+1;
				}			
				this->textBox1->AppendText(" }" + "\r\n");


				// Alfabeto E
				this->textBox1->AppendText("E = { 0, 1 }" + "\r\n");

				// Alfabeto de la cinta
				this->textBox1->AppendText("T = { 0, 1, B }" + "\r\n");

				i=0;
				// Estados finales
				this->textBox1->AppendText("F = {");
				while(estadosFinales[i]!=-1){
					this->textBox1->AppendText(" q" + estadosFinales[i]);
					if(estadosFinales[i+1]==-1){
						this->textBox1->AppendText(" ");
					}else{
						this->textBox1->AppendText(", ");
					}
					i=i+1;
				}
				this->textBox1->AppendText(" }" + "\r\n" + "\r\n");

				// Transiciones

				this->textBox1->AppendText("----- Transiciones -----" + "\r\n" + "\r\n");

				for(i=0;i<cantLin;i++){
					this->textBox1->AppendText("" + i +":"
						+ "\t D(q"+funcTrans[(i*13)]
					+","+funcTrans[(i*13)+1]
					+","+funcTrans[(i*13)+2]
					+","+funcTrans[(i*13)+3]
					+")=( q"+funcTrans[(i*13)+4]
					+","+funcTrans[(i*13)+5]
					+","+funcTrans[(i*13)+6]
					+","+funcTrans[(i*13)+7]
					+","+funcTrans[(i*13)+8]
					+","+funcTrans[(i*13)+9]
					+","+funcTrans[(i*13)+10]
					+")"
					+ "\r\n");
				
				}

			} catch(Exception^ e) {
			}

				
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~mostrarMatematico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 

	protected: 

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mostrarMatematico::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(298, 382);
			this->textBox1->TabIndex = 0;
			this->textBox1->TabStop = false;
			// 
			// mostrarMatematico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 406);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"mostrarMatematico";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TM";
			this->Load += gcnew System::EventHandler(this, &mostrarMatematico::mostrarMatematico_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
			 }
	private: System::Void mostrarMatematico_Load(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
	};
}
