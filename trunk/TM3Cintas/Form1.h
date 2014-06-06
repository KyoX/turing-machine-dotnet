#pragma once
#include <malloc.h>
#include <stdlib.h>
#include "mostrarMatematico.h"
#include "TMBasic.h"
#define ACEPTADO 15
#define RECHAZADO -10
#define EN_PROGRESO 20
#define HALT -20

namespace TM3Cintas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
		
	
	int cantidadEstados = -1;
	int estadosFinales[11];
	int cont=-2;
	int estadoActual=0; // estado de la TM en el que se encuentra
	int tmHalt = 0;
	
	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		String^ funcTrans;

		TMBasic ^ w0;
		TMBasic ^ w1;
	private: System::Windows::Forms::Button^  button2;
	public: 
		TMBasic ^ w2;

		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cargarArchivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mostrarTMConNotaciónMatemáticaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ejecutarTMToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripMenuItem^  ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  comoUsarEsteProgramaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  acercaDeToolStripMenuItem;

	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cargarArchivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mostrarTMConNotaciónMatemáticaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ejecutarTMToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comoUsarEsteProgramaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->archivoToolStripMenuItem, 
				this->opcionesToolStripMenuItem, this->ayudaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(704, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->cargarArchivoToolStripMenuItem, 
				this->salirToolStripMenuItem});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// cargarArchivoToolStripMenuItem
			// 
			this->cargarArchivoToolStripMenuItem->Name = L"cargarArchivoToolStripMenuItem";
			this->cargarArchivoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->cargarArchivoToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->cargarArchivoToolStripMenuItem->Text = L"Cargar Archivo";
			this->cargarArchivoToolStripMenuItem->ToolTipText = L"Lee un archivo que posee la definición de la máquina de Turing que se desea usar." 
				L"";
			this->cargarArchivoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cargarArchivoToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->salirToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::salirToolStripMenuItem_Click);
			// 
			// opcionesToolStripMenuItem
			// 
			this->opcionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->mostrarTMConNotaciónMatemáticaToolStripMenuItem, 
				this->ejecutarTMToolStripMenuItem});
			this->opcionesToolStripMenuItem->Name = L"opcionesToolStripMenuItem";
			this->opcionesToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->opcionesToolStripMenuItem->Text = L"Acciones";
			// 
			// mostrarTMConNotaciónMatemáticaToolStripMenuItem
			// 
			this->mostrarTMConNotaciónMatemáticaToolStripMenuItem->Enabled = false;
			this->mostrarTMConNotaciónMatemáticaToolStripMenuItem->Name = L"mostrarTMConNotaciónMatemáticaToolStripMenuItem";
			this->mostrarTMConNotaciónMatemáticaToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->mostrarTMConNotaciónMatemáticaToolStripMenuItem->Size = System::Drawing::Size(294, 22);
			this->mostrarTMConNotaciónMatemáticaToolStripMenuItem->Text = L"Mostrar TM con notación matemática";
			this->mostrarTMConNotaciónMatemáticaToolStripMenuItem->ToolTipText = L"Muestra de forma matemática la definición de la máquina\r\nde Turing que se ha leid" 
				L"o de un archivo de texto.";
			this->mostrarTMConNotaciónMatemáticaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mostrarTMConNotaciónMatemáticaToolStripMenuItem_Click);
			// 
			// ejecutarTMToolStripMenuItem
			// 
			this->ejecutarTMToolStripMenuItem->Enabled = false;
			this->ejecutarTMToolStripMenuItem->Name = L"ejecutarTMToolStripMenuItem";
			this->ejecutarTMToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F5;
			this->ejecutarTMToolStripMenuItem->Size = System::Drawing::Size(294, 22);
			this->ejecutarTMToolStripMenuItem->Text = L"Ejecutar TM";
			this->ejecutarTMToolStripMenuItem->ToolTipText = L"Ejecuta una máquina de Turing para los string en las cintas, basandose en\r\nlas de" 
				L"finiciones cargadas desde un archivo.";
			this->ejecutarTMToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ejecutarTMToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->comoUsarEsteProgramaToolStripMenuItem, 
				this->acercaDeToolStripMenuItem});
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// comoUsarEsteProgramaToolStripMenuItem
			// 
			this->comoUsarEsteProgramaToolStripMenuItem->Name = L"comoUsarEsteProgramaToolStripMenuItem";
			this->comoUsarEsteProgramaToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->comoUsarEsteProgramaToolStripMenuItem->Size = System::Drawing::Size(230, 22);
			this->comoUsarEsteProgramaToolStripMenuItem->Text = L"Como usar este programa";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(230, 22);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			this->acercaDeToolStripMenuItem->ToolTipText = L"Información sobre los autores y este programa.";
			this->acercaDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::acercaDeToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(202, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Contenido de las cintas:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(60, 141);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(501, 26);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(60, 184);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(501, 26);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(60, 223);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(501, 26);
			this->textBox3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"W0:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"W1:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"W2:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(60, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Ejecutar TM";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->toolStripStatusLabel4, 
				this->toolStripStatusLabel1, this->toolStripProgressBar1, this->toolStripStatusLabel2, this->toolStripStatusLabel3});
			this->statusStrip1->Location = System::Drawing::Point(0, 275);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(704, 22);
			this->statusStrip1->TabIndex = 9;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(45, 17);
			this->toolStripStatusLabel4->Text = L"Estado:";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(32, 17);
			this->toolStripStatusLabel1->Text = L"Listo";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(253, 17);
			this->toolStripStatusLabel2->Text = L"                                                   Archivo cargado: ";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(22, 17);
			this->toolStripStatusLabel3->Text = L"---";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(596, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Estado:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(599, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"---";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(599, 187);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"---";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(599, 226);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"---";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(335, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Reiniciar TM";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 297);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TM";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void ejecutarTansicion(void){
			int i;
			int entra=0;
			int estado;
			String^ car0;
			String^ car1;
			String^ car2;
			String^ num0;
			String^ num1;
			String^ num2;

			//quito los simbolos especiales
			this->textBox1->Text=this->textBox1->Text->Replace("|","");
			this->textBox2->Text=this->textBox2->Text->Replace("|","");
			this->textBox3->Text=this->textBox3->Text->Replace("|","");

			if(tmHalt!=HALT){ //mientras no haya terminado

				for(i=0;i<cont;i++){
					try { 
						estado = int::Parse(""+funcTrans[(i*13)]);
						car0 = ""+funcTrans[(i*13)+1];
						car1 = ""+funcTrans[(i*13)+2];
						car2 = ""+funcTrans[(i*13)+3];

						

						num0 = ""+this->textBox1->Text[w0->getPosicion()];
						num1 = ""+this->textBox2->Text[w1->getPosicion()];
						num2 = ""+this->textBox3->Text[w2->getPosicion()];


						if(estadoActual==estado 
							&& String::Equals(car0,num0) 
							&& String::Equals(car1,num1) 
							&& String::Equals(car2,num2)){ //busca la transicion actual
							entra=1;
							estadoActual=int::Parse(""+funcTrans[(i*13)+4]); //cambio el estado actual

							if(w0->getPosicion()==0 && String::Equals(""+funcTrans[(i*13)+8],"L")){
								this->textBox1->Text="|B|"+this->textBox1->Text;
							}else{
								if(w0->getPosicion()==this->textBox1->Text->Length-1 
									&& String::Equals(""+funcTrans[(i*13)+8],"R")){
										this->textBox1->Text=this->textBox1->Text+"|B|";
								} else {
									//nuevo valor en la cinta
									this->textBox1->Text=this->textBox1->Text->Substring(0,w0->getPosicion())
										+"|"+funcTrans[(i*13)+5]+"|"+this->textBox1->Text->Substring(w0->getPosicion()+1);
									// me muevo derecha o izquierda
									if(String::Equals(""+funcTrans[(i*13)+8],"L")){
										w0->setPosicion(w0->getPosicion()-1);
									} else {
										w0->setPosicion(w0->getPosicion()+1);
									}
								}
							}

							if(w1->getPosicion()==0 && String::Equals(""+funcTrans[(i*13)+9],"L")){
								this->textBox2->Text="|B|"+this->textBox2->Text;
							}else{
								if(w1->getPosicion()==this->textBox2->Text->Length-1 
									&& String::Equals(""+funcTrans[(i*13)+9],"R")){
										this->textBox2->Text=this->textBox2->Text+"|B|";
								} else {
									//nuevo valor en la cinta
									this->textBox2->Text=this->textBox2->Text->Substring(0,w1->getPosicion())
										+"|"+funcTrans[(i*13)+6]+"|"+this->textBox2->Text->Substring(w1->getPosicion()+1);
									// me muevo derecha o izquierda
									if(String::Equals(""+funcTrans[(i*13)+9],"L")){
										w1->setPosicion(w1->getPosicion()-1);
									} else {
										w1->setPosicion(w1->getPosicion()+1);
									}
								}
							}

							if(w2->getPosicion()==0 && String::Equals(""+funcTrans[(i*13)+10],"L")){
								this->textBox3->Text="|B|"+this->textBox3->Text;
							}else{
								if(w2->getPosicion()==this->textBox3->Text->Length-1 
									&& String::Equals(""+funcTrans[(i*13)+10],"R")){
										this->textBox3->Text=this->textBox3->Text+"|B|";
								} else {
									//nuevo valor en la cinta
									this->textBox3->Text=this->textBox3->Text->Substring(0,w2->getPosicion())
										+"|"+funcTrans[(i*13)+7]+"|"+this->textBox3->Text->Substring(w2->getPosicion()+1);
									// me muevo derecha o izquierda
									if(String::Equals(""+funcTrans[(i*13)+10],"L")){
										w2->setPosicion(w2->getPosicion()-1);
									} else {
										w2->setPosicion(w2->getPosicion()+1);
									}
								}
							}
						}

					} catch(Exception^ e) {	}
				}
				if(entra==0){ //no entró
					tmHalt=HALT;
				}
				//ejecutarTansicion(); //mando a que se ejecute recursivamente la misma función

			} else { //ya murio la TM
				this->textBox1->ReadOnly = false;
				this->textBox2->ReadOnly = false;
				this->textBox3->ReadOnly = false;

				//busca en los estados finales a ver si quedó en uno de ellos
				i=0;
				while(estadosFinales[i]>=0){ // si tiene -1 deja de buscar, ya no hay estados finales

					// Si este estado en el que estoy es un estado final se aceptan
					if(estadosFinales[i]==estadoActual){
						this->label6->Text = "Aceptada";
						w0->setEstadoPalabra(ACEPTADO);
						this->label7->Text = "Aceptada";
						w1->setEstadoPalabra(ACEPTADO);
						this->label8->Text = "Aceptada";
						w2->setEstadoPalabra(ACEPTADO);

						break;

					} else {
						this->label6->Text = "Rechazado";
						w0->setEstadoPalabra(RECHAZADO);
						this->label7->Text = "Rechazado";
						w1->setEstadoPalabra(RECHAZADO);
						this->label8->Text = "Rechazado";
						w2->setEstadoPalabra(RECHAZADO);
					}

					i=i++;

				}

				//Muestra que termino de buscar
				MessageBox::Show("No hay más transiciones, la maquina esta en estado HALT");
			}
	
		}


#pragma endregion
	private: System::Void cargarArchivoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 tmHalt=0;

				this->button1->Enabled = false;
				this->ejecutarTMToolStripMenuItem->Enabled = false;
				this->mostrarTMConNotaciónMatemáticaToolStripMenuItem->Enabled = false;
				this->toolStripStatusLabel3->Text = "---";
				cantidadEstados = -1;
				estadosFinales[0]=-1;
				cont=-2;
				funcTrans="";
			 this->toolStripProgressBar1->Visible=true;
			 this->toolStripStatusLabel1->Text="Leyendo archivo";
			 Stream^ myStream;
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			 openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			 openFileDialog1->FilterIndex = 2;
			 openFileDialog1->RestoreDirectory = true;
			 String^ temp;
			 int i = 0;

			 char estadoTemp;
			 try{
				 if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ) {
					 if ( (myStream = openFileDialog1->OpenFile()) != nullptr ){
						 StreamReader ^ srCont = gcnew StreamReader(openFileDialog1->FileName);

						 
						 while(!srCont->EndOfStream){
							 temp = srCont->ReadLine();
							 cont=cont+1;
						 }


						 StreamReader ^ sr = gcnew StreamReader(openFileDialog1->FileName);
						 try {
							 cantidadEstados = int::Parse(sr->ReadLine()); //lee la cantidad de estados
							 
						 } catch(Exception^ e) {
							 MessageBox::Show("La cantidad de estados no es un número valido", "Error en la lectura del archivo", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
							 this->toolStripStatusLabel1->Text="Listo";
							 this->toolStripProgressBar1->Visible=false;
							 myStream->Close();
							 return;
						 }

						 estadoTemp = sr->Read();
						 while(estadoTemp!=13){
							 if(i<10 && (estadoTemp<48 || estadoTemp>57)){ // introduce letras o caracteres extraños
								 MessageBox::Show("Un estado final es invalido, tiene que estar entre 0 y 9.", "Error en la estructura", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
								 this->toolStripStatusLabel1->Text="Listo";
								 this->toolStripProgressBar1->Visible=false;
								 myStream->Close();
								 return;
							 } else { //carga en memoria los estados finales
								 estadosFinales[i] = (int)estadoTemp-48;
								 if(estadosFinales[i]>=cantidadEstados){
									 MessageBox::Show("El estado final q"
										 + estadosFinales[i] + 
										 " tinene un indice mayor a la cantidad de estados.", "Error en la estructura", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
									 this->toolStripStatusLabel1->Text="Listo";
									 this->toolStripProgressBar1->Visible=false;
									 myStream->Close();
									 return;
								 }
								 i=i+1;
							 }
							 estadoTemp = sr->Read();
						 }
						 if(i==0) { //Si no hay estados finales no se sigue
							  MessageBox::Show("Este automata no tiene estados finales.", "Error en la estructura", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
							  this->toolStripStatusLabel1->Text="Listo";
							  this->toolStripProgressBar1->Visible=false;
							  myStream->Close();
							  return;
						 }else{
							 if(i>cantidadEstados){
								 MessageBox::Show("Hay demaciados estados finales.", "Error en la estructura", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
								 this->toolStripStatusLabel1->Text="Listo";
								 this->toolStripProgressBar1->Visible=false;
								 myStream->Close();
								 return;
							 }
						 }

						 estadosFinales[i]=-1;
						 
						 temp = sr->ReadLine(); //limpio lo que queda en la línea

						 funcTrans = sr->ReadToEnd();
						 
						 myStream->Close();
						 

						 this->button1->Enabled = true;
						 this->ejecutarTMToolStripMenuItem->Enabled = true;
						 this->mostrarTMConNotaciónMatemáticaToolStripMenuItem->Enabled = true;
						 this->toolStripStatusLabel3->Text = openFileDialog1->FileName;

					 } else {
						 MessageBox::Show("El archivo no se pudo leer, puede que este corrupto.", "Error en la apertura", MessageBoxButtons::OKCancel, MessageBoxIcon::Asterisk);
					 }
				 }
			 }catch(Exception^ e){
				MessageBox::Show("Ocurrio un erro al momento de la lectura del archivo", "Error en la apertura", MessageBoxButtons::OKCancel, MessageBoxIcon::Asterisk);
			 }
			 this->toolStripStatusLabel1->Text="Listo";
			 this->toolStripProgressBar1->Visible=false;

			 w0 = gcnew TMBasic();
			 w0->setFuncTrans(funcTrans);
			 w0->setIdCinta(1);

			 w1 = gcnew TMBasic();
			 w1->setFuncTrans(funcTrans);
			 w1->setIdCinta(2);

			 w2 = gcnew TMBasic();
			 w2->setFuncTrans(funcTrans);
			 w2->setIdCinta(3);

			 }
	private: System::Void salirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->toolStripProgressBar1->Visible=false;
		
			 }
private: System::Void mostrarTMConNotaciónMatemáticaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 mostrarMatematico ^ f = gcnew mostrarMatematico(cantidadEstados, estadosFinales, funcTrans, cont);
			 f->Show();
		 }
private: System::Void ejecutarTMToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 ejecutarTansicion();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->textBox1->Text->Length==0){
				 this->textBox1->Text = "|B|";
			 }
			 if(this->textBox2->Text->Length==0){
				 this->textBox2->Text = "|B|";
			 }
			 if(this->textBox3->Text->Length==0){
				 this->textBox3->Text = "|B|";
			 }
			 this->textBox1->ReadOnly = true;
			 this->textBox2->ReadOnly = true;
			 this->textBox3->ReadOnly = true;
			 ejecutarTansicion();
		 }
private: System::Void acercaDeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("              Universidad Centroamericana\n\r"
							  "                  \"José Simeón Cañas\"\n\r\n"
							  "PROYECTO:\n\r"
							  "\tTuring Machine de 3 cintas\n\r\n"
							  "\tTeoría Matemática de la computación\n\r\n "
							  "Catedrático:\n\r           Roberto Alfonso Abarca Juarez\n\r\n\r"
							  "Presentado por:\n\r "      
							  "\tNelson Josue Serrano Rivas\r\n\t Eduardo Alberto Mina Mejía ","Acerca de");
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 cantidadEstados = -1;
			 estadosFinales[0]=-1;
			 cont=-2;
			 estadoActual=0; // estado de la TM en el que se encuentra
			 tmHalt = 0;
			 this->button1->Enabled = false;
			 this->ejecutarTMToolStripMenuItem->Enabled = false;
			 this->mostrarTMConNotaciónMatemáticaToolStripMenuItem->Enabled = false;
			 this->toolStripStatusLabel3->Text = "---";
			 funcTrans="";
		 }
};
}

