#pragma once
#include <opencv2\opencv.hpp>
#include "Check_move.cpp"

namespace Projekt2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace Collections;
	using namespace System::Windows::Forms;
	using namespace Data;
	using namespace Drawing;
	using namespace Collections::Generic;
	using namespace System::Text;
	using namespace Threading::Tasks;
	using namespace Threading;

	using namespace std;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	struct HSVvalue
	{
	public:
		unsigned int minH;
		unsigned int maxH;
		unsigned int minS;
		unsigned int maxS;
		unsigned int minV;
		unsigned int maxV;
		HSVvalue(int minH, int maxH, int minS, int maxS, int minV, int maxV)
		{
			this->minH = minH;
			this->maxH = maxH;
			this->minS = minS;
			this->maxS = maxS;
			this->minV = minV;
			this->maxV = maxV;
		};
	};


	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		Check_move* check = new Check_move();
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TrackBar^  trackBar5;
	private: System::Windows::Forms::TrackBar^  trackBar6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::TrackBar^  trackBar4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TrackBar^  trackBar13;
	private: System::Windows::Forms::TrackBar^  trackBar14;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TrackBar^  trackBar15;
	private: System::Windows::Forms::TrackBar^  trackBar16;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TrackBar^  trackBar17;
	private: System::Windows::Forms::TrackBar^  trackBar18;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TrackBar^  trackBar7;
	private: System::Windows::Forms::TrackBar^  trackBar8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TrackBar^  trackBar9;
	private: System::Windows::Forms::TrackBar^  trackBar10;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TrackBar^  trackBar11;
	private: System::Windows::Forms::TrackBar^  trackBar12;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox13;
	public:
		HSVvalue * znaczniki = new HSVvalue(90, 120, 80, 255, 100, 255);
		HSVvalue * biale = new HSVvalue(40, 90, 50, 255, 100, 255);
		HSVvalue * czarne = new HSVvalue(140, 200, 35, 255, 100, 255);
		HSVvalue * bialeD = new HSVvalue(140, 200, 35, 255, 100, 255);
		HSVvalue * czarneD = new HSVvalue(0, 35, 35, 255, 100, 255);
	private: System::Windows::Forms::TrackBar^  trackBar19;
	public:
	private: System::Windows::Forms::TrackBar^  trackBar20;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TrackBar^  trackBar21;
	private: System::Windows::Forms::TrackBar^  trackBar22;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TrackBar^  trackBar23;
	private: System::Windows::Forms::TrackBar^  trackBar24;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TrackBar^  trackBar25;
	private: System::Windows::Forms::TrackBar^  trackBar26;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TrackBar^  trackBar27;
	private: System::Windows::Forms::TrackBar^  trackBar28;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TrackBar^  trackBar29;
	private: System::Windows::Forms::TrackBar^  trackBar30;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Button^  button5;
	public:
		
		void ustawienieplanszy() {
			Image ^img = Image::FromFile("plansza.png");
			int widthThird = safe_cast<int>(safe_cast<double>(img->Width) / 8.0 + 0.5);
			int heightThird = safe_cast<int>(safe_cast<double>(img->Height) / 8.0 + 0.5);
			cli::array<Bitmap^, 2> ^bmps = gcnew cli::array<Bitmap^, 2>(10, 10);
			for (int i = 0; i < 8; i++)
				for (int j = 0; j < 8; j++)
				{
					bmps[i, j] = gcnew Bitmap(widthThird, heightThird);
					Graphics ^g = Graphics::FromImage(bmps[i, j]);
					g->DrawImage(img, Rectangle(0, 0, widthThird, heightThird), Rectangle(j * widthThird, i * heightThird, widthThird, heightThird), GraphicsUnit::Pixel);
					delete g;
				}



			pictureBox1->Image = bmps[0, 0];
			pictureBox2->Image = bmps[0, 1];
			pictureBox3->Image = bmps[0, 2];
			pictureBox4->Image = bmps[0, 3];
			pictureBox5->Image = bmps[0, 4];
			pictureBox6->Image = bmps[0, 5];
			pictureBox7->Image = bmps[0, 6];
			pictureBox8->Image = bmps[0, 7];
			pictureBox9->Image = bmps[1, 0];
			pictureBox10->Image = bmps[1, 1];
			pictureBox11->Image = bmps[1, 2];
			pictureBox12->Image = bmps[1, 3];
			pictureBox13->Image = bmps[1, 4];
			pictureBox14->Image = bmps[1, 5];
			pictureBox15->Image = bmps[1, 6];
			pictureBox16->Image = bmps[1, 7];
			pictureBox17->Image = bmps[2, 0];
			pictureBox18->Image = bmps[2, 1];
			pictureBox19->Image = bmps[2, 2];
			pictureBox20->Image = bmps[2, 3];
			pictureBox21->Image = bmps[2, 4];
			pictureBox22->Image = bmps[2, 5];
			pictureBox23->Image = bmps[2, 6];
			pictureBox24->Image = bmps[2, 7];
			pictureBox25->Image = bmps[3, 0];
			pictureBox26->Image = bmps[3, 1];
			pictureBox27->Image = bmps[3, 2];
			pictureBox28->Image = bmps[3, 3];
			pictureBox29->Image = bmps[3, 4];
			pictureBox30->Image = bmps[3, 5];
			pictureBox31->Image = bmps[3, 6];
			pictureBox32->Image = bmps[3, 7];
			pictureBox33->Image = bmps[4, 0];
			pictureBox34->Image = bmps[4, 1];
			pictureBox35->Image = bmps[4, 2];
			pictureBox36->Image = bmps[4, 3];
			pictureBox37->Image = bmps[4, 4];
			pictureBox38->Image = bmps[4, 5];
			pictureBox39->Image = bmps[4, 6];
			pictureBox40->Image = bmps[4, 7];
			pictureBox41->Image = bmps[5, 0];
			pictureBox42->Image = bmps[5, 1];
			pictureBox43->Image = bmps[5, 2];
			pictureBox44->Image = bmps[5, 3];
			pictureBox45->Image = bmps[5, 4];
			pictureBox46->Image = bmps[5, 5];
			pictureBox47->Image = bmps[5, 6];
			pictureBox48->Image = bmps[5, 7];
			pictureBox49->Image = bmps[6, 0];
			pictureBox50->Image = bmps[6, 1];
			pictureBox51->Image = bmps[6, 2];
			pictureBox52->Image = bmps[6, 3];
			pictureBox53->Image = bmps[6, 4];
			pictureBox54->Image = bmps[6, 5];
			pictureBox55->Image = bmps[6, 6];
			pictureBox56->Image = bmps[6, 7];
			pictureBox57->Image = bmps[7, 0];
			pictureBox58->Image = bmps[7, 1];
			pictureBox59->Image = bmps[7, 2];
			pictureBox60->Image = bmps[7, 3];
			pictureBox61->Image = bmps[7, 4];
			pictureBox62->Image = bmps[7, 5];
			pictureBox63->Image = bmps[7, 6];
			pictureBox64->Image = bmps[7, 7];
	}

		MyForm(void)
		{
			InitializeComponent();


			ustawienieplanszy();


			
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		cv::Mat Erosion(cv::Mat source, int erosion_elem, int erosion_size)
		{
			cv::Mat erosion_dst1;
			int erosion_type;
			if (erosion_elem == 0) { erosion_type = cv::MORPH_RECT; }
			else if (erosion_elem == 1) { erosion_type = cv::MORPH_CROSS; }
			else if (erosion_elem == 2) { erosion_type = cv::MORPH_ELLIPSE; }

			cv::Mat element = cv::getStructuringElement(erosion_type,
				cv::Size(2 * erosion_size + 1, 2 * erosion_size + 1),
				cv::Point(erosion_size, erosion_size));
			erode(source, erosion_dst1, element);
			//imshow("Erozja", erosion_dst);
			return erosion_dst1;
		}
		cv::Mat Dilation(cv::Mat source, int dilation_elem, int dilation_size)
		{
			cv::Mat dilation_dst;
			int typ_dylacji;
			if (dilation_elem == 0) { typ_dylacji = cv::MORPH_RECT; }
			else if (dilation_elem == 1) { typ_dylacji = cv::MORPH_CROSS; }
			else if (dilation_elem == 2) { typ_dylacji = cv::MORPH_ELLIPSE; }

			cv::Mat element = cv::getStructuringElement(typ_dylacji,
				cv::Size(2 * dilation_size + 1, 2 * dilation_size + 1),
				cv::Point(dilation_size, dilation_size));
			/// Apply the dilation operation
			dilate(source, dilation_dst, element);
			return dilation_dst;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox56;
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox61;
	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::PictureBox^  pictureBox63;
	private: System::Windows::Forms::PictureBox^  pictureBox64;
	private: System::Windows::Forms::PictureBox^  pictureBox65;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label1;



private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Panel^  panel1;



private: System::Windows::Forms::Label^  label6;


private: System::Windows::Forms::Label^  label4;










	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->trackBar25 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar26 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar27 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar28 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->trackBar29 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar30 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar19 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar20 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar21 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar22 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->trackBar23 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar24 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar13 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar14 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar15 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar16 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->trackBar17 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar18 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar7 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar8 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar9 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar10 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->trackBar11 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar12 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(48, 68);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(67, 62);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(115, 68);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(67, 62);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(181, 68);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(67, 62);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(248, 68);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(67, 62);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(315, 68);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(67, 62);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(381, 68);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(67, 62);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(448, 68);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(67, 62);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(515, 68);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(67, 62);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(48, 129);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(67, 62);
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(115, 129);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(67, 62);
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(181, 129);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(67, 62);
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(248, 129);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(67, 62);
			this->pictureBox12->TabIndex = 11;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(315, 129);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(67, 62);
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(381, 129);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(67, 62);
			this->pictureBox14->TabIndex = 13;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(448, 129);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(67, 62);
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Location = System::Drawing::Point(515, 129);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(67, 62);
			this->pictureBox16->TabIndex = 15;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Location = System::Drawing::Point(48, 191);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(67, 62);
			this->pictureBox17->TabIndex = 16;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Location = System::Drawing::Point(115, 191);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(67, 62);
			this->pictureBox18->TabIndex = 17;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Location = System::Drawing::Point(181, 191);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(67, 62);
			this->pictureBox19->TabIndex = 18;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Location = System::Drawing::Point(248, 191);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(67, 62);
			this->pictureBox20->TabIndex = 19;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Location = System::Drawing::Point(315, 191);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(67, 62);
			this->pictureBox21->TabIndex = 20;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Location = System::Drawing::Point(381, 191);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(67, 62);
			this->pictureBox22->TabIndex = 21;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Location = System::Drawing::Point(448, 191);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(67, 62);
			this->pictureBox23->TabIndex = 22;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Location = System::Drawing::Point(515, 191);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(67, 62);
			this->pictureBox24->TabIndex = 23;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Location = System::Drawing::Point(48, 252);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(67, 62);
			this->pictureBox25->TabIndex = 24;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Location = System::Drawing::Point(115, 252);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(67, 62);
			this->pictureBox26->TabIndex = 25;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Location = System::Drawing::Point(181, 252);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(67, 62);
			this->pictureBox27->TabIndex = 26;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Location = System::Drawing::Point(248, 252);
			this->pictureBox28->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(67, 62);
			this->pictureBox28->TabIndex = 27;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Location = System::Drawing::Point(315, 252);
			this->pictureBox29->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(67, 62);
			this->pictureBox29->TabIndex = 28;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Location = System::Drawing::Point(381, 252);
			this->pictureBox30->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(67, 62);
			this->pictureBox30->TabIndex = 29;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Location = System::Drawing::Point(448, 252);
			this->pictureBox31->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(67, 62);
			this->pictureBox31->TabIndex = 30;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Location = System::Drawing::Point(515, 252);
			this->pictureBox32->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(67, 62);
			this->pictureBox32->TabIndex = 31;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Location = System::Drawing::Point(48, 314);
			this->pictureBox33->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(67, 62);
			this->pictureBox33->TabIndex = 32;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Location = System::Drawing::Point(115, 314);
			this->pictureBox34->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(67, 62);
			this->pictureBox34->TabIndex = 33;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Location = System::Drawing::Point(181, 314);
			this->pictureBox35->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(67, 62);
			this->pictureBox35->TabIndex = 34;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Location = System::Drawing::Point(248, 314);
			this->pictureBox36->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(67, 62);
			this->pictureBox36->TabIndex = 35;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Location = System::Drawing::Point(315, 314);
			this->pictureBox37->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(67, 62);
			this->pictureBox37->TabIndex = 36;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Location = System::Drawing::Point(381, 314);
			this->pictureBox38->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(67, 62);
			this->pictureBox38->TabIndex = 37;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->Location = System::Drawing::Point(448, 314);
			this->pictureBox39->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(67, 62);
			this->pictureBox39->TabIndex = 38;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Location = System::Drawing::Point(515, 314);
			this->pictureBox40->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(67, 62);
			this->pictureBox40->TabIndex = 39;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Location = System::Drawing::Point(48, 375);
			this->pictureBox41->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(67, 62);
			this->pictureBox41->TabIndex = 40;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Location = System::Drawing::Point(115, 375);
			this->pictureBox42->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(67, 62);
			this->pictureBox42->TabIndex = 41;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Location = System::Drawing::Point(181, 375);
			this->pictureBox43->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(67, 62);
			this->pictureBox43->TabIndex = 42;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Location = System::Drawing::Point(248, 375);
			this->pictureBox44->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(67, 62);
			this->pictureBox44->TabIndex = 43;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Location = System::Drawing::Point(315, 375);
			this->pictureBox45->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(67, 62);
			this->pictureBox45->TabIndex = 44;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->Location = System::Drawing::Point(381, 375);
			this->pictureBox46->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(67, 62);
			this->pictureBox46->TabIndex = 45;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->Location = System::Drawing::Point(448, 375);
			this->pictureBox47->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(67, 62);
			this->pictureBox47->TabIndex = 46;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->Location = System::Drawing::Point(515, 375);
			this->pictureBox48->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(67, 62);
			this->pictureBox48->TabIndex = 47;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->Location = System::Drawing::Point(48, 437);
			this->pictureBox49->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(67, 62);
			this->pictureBox49->TabIndex = 48;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->Location = System::Drawing::Point(115, 437);
			this->pictureBox50->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(67, 62);
			this->pictureBox50->TabIndex = 49;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->Location = System::Drawing::Point(181, 437);
			this->pictureBox51->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(67, 62);
			this->pictureBox51->TabIndex = 50;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->Location = System::Drawing::Point(248, 437);
			this->pictureBox52->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(67, 62);
			this->pictureBox52->TabIndex = 51;
			this->pictureBox52->TabStop = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->Location = System::Drawing::Point(315, 437);
			this->pictureBox53->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(67, 62);
			this->pictureBox53->TabIndex = 52;
			this->pictureBox53->TabStop = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->Location = System::Drawing::Point(381, 437);
			this->pictureBox54->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(67, 62);
			this->pictureBox54->TabIndex = 53;
			this->pictureBox54->TabStop = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->Location = System::Drawing::Point(448, 437);
			this->pictureBox55->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(67, 62);
			this->pictureBox55->TabIndex = 54;
			this->pictureBox55->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->Location = System::Drawing::Point(515, 437);
			this->pictureBox56->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(67, 62);
			this->pictureBox56->TabIndex = 55;
			this->pictureBox56->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->Location = System::Drawing::Point(48, 498);
			this->pictureBox57->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(67, 62);
			this->pictureBox57->TabIndex = 56;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->Location = System::Drawing::Point(115, 498);
			this->pictureBox58->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(67, 62);
			this->pictureBox58->TabIndex = 57;
			this->pictureBox58->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->Location = System::Drawing::Point(181, 498);
			this->pictureBox59->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(67, 62);
			this->pictureBox59->TabIndex = 58;
			this->pictureBox59->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->Location = System::Drawing::Point(248, 498);
			this->pictureBox60->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(67, 62);
			this->pictureBox60->TabIndex = 59;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->Location = System::Drawing::Point(315, 498);
			this->pictureBox61->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(67, 62);
			this->pictureBox61->TabIndex = 60;
			this->pictureBox61->TabStop = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->Location = System::Drawing::Point(381, 498);
			this->pictureBox62->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(67, 62);
			this->pictureBox62->TabIndex = 61;
			this->pictureBox62->TabStop = false;
			// 
			// pictureBox63
			// 
			this->pictureBox63->Location = System::Drawing::Point(448, 498);
			this->pictureBox63->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(67, 62);
			this->pictureBox63->TabIndex = 62;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->Location = System::Drawing::Point(515, 498);
			this->pictureBox64->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(67, 62);
			this->pictureBox64->TabIndex = 63;
			this->pictureBox64->TabStop = false;
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.BackgroundImage")));
			this->pictureBox65->Location = System::Drawing::Point(16, 37);
			this->pictureBox65->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(599, 553);
			this->pictureBox65->TabIndex = 64;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Click += gcnew System::EventHandler(this, &MyForm::pictureBox65_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(675, 173);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 48);
			this->button1->TabIndex = 65;
			this->button1->Text = L"SprawdŸ poprawnoœæ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(680, 37);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 58);
			this->label1->TabIndex = 68;
			this->label1->Text = L"Warcaby";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(699, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 25);
			this->label2->TabIndex = 72;
			this->label2->Text = L"Niepoprawny ruch!";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->trackBar25);
			this->panel1->Controls->Add(this->trackBar26);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox26);
			this->panel1->Controls->Add(this->trackBar27);
			this->panel1->Controls->Add(this->trackBar28);
			this->panel1->Controls->Add(this->textBox27);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->textBox28);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->trackBar29);
			this->panel1->Controls->Add(this->trackBar30);
			this->panel1->Controls->Add(this->textBox29);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->textBox30);
			this->panel1->Controls->Add(this->trackBar19);
			this->panel1->Controls->Add(this->trackBar20);
			this->panel1->Controls->Add(this->textBox20);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->textBox21);
			this->panel1->Controls->Add(this->trackBar21);
			this->panel1->Controls->Add(this->trackBar22);
			this->panel1->Controls->Add(this->textBox22);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->textBox23);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->trackBar23);
			this->panel1->Controls->Add(this->trackBar24);
			this->panel1->Controls->Add(this->textBox24);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->textBox25);
			this->panel1->Controls->Add(this->trackBar13);
			this->panel1->Controls->Add(this->trackBar14);
			this->panel1->Controls->Add(this->textBox14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->trackBar15);
			this->panel1->Controls->Add(this->trackBar16);
			this->panel1->Controls->Add(this->textBox16);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->textBox17);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->trackBar17);
			this->panel1->Controls->Add(this->trackBar18);
			this->panel1->Controls->Add(this->textBox18);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->textBox19);
			this->panel1->Controls->Add(this->trackBar7);
			this->panel1->Controls->Add(this->trackBar8);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->trackBar9);
			this->panel1->Controls->Add(this->trackBar10);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->trackBar11);
			this->panel1->Controls->Add(this->trackBar12);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Controls->Add(this->trackBar5);
			this->panel1->Controls->Add(this->trackBar6);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->trackBar3);
			this->panel1->Controls->Add(this->trackBar4);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->trackBar2);
			this->panel1->Controls->Add(this->trackBar1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 601);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1206, 211);
			this->panel1->TabIndex = 80;
			// 
			// trackBar25
			// 
			this->trackBar25->Location = System::Drawing::Point(1094, 169);
			this->trackBar25->Maximum = 255;
			this->trackBar25->Name = L"trackBar25";
			this->trackBar25->Size = System::Drawing::Size(104, 56);
			this->trackBar25->TabIndex = 166;
			this->trackBar25->Value = 255;
			// 
			// trackBar26
			// 
			this->trackBar26->Location = System::Drawing::Point(1094, 137);
			this->trackBar26->Maximum = 100;
			this->trackBar26->Name = L"trackBar26";
			this->trackBar26->Size = System::Drawing::Size(104, 56);
			this->trackBar26->TabIndex = 165;
			this->trackBar26->Value = 100;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1053, 139);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(36, 22);
			this->textBox1->TabIndex = 164;
			this->textBox1->Text = L"100";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(969, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 17);
			this->label3->TabIndex = 163;
			this->label3->Text = L"V";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(991, 139);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(36, 22);
			this->textBox26->TabIndex = 162;
			this->textBox26->Text = L"100";
			// 
			// trackBar27
			// 
			this->trackBar27->Location = System::Drawing::Point(1094, 96);
			this->trackBar27->Maximum = 100;
			this->trackBar27->Name = L"trackBar27";
			this->trackBar27->Size = System::Drawing::Size(104, 56);
			this->trackBar27->TabIndex = 161;
			this->trackBar27->Value = 100;
			this->trackBar27->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar27_ValueChanged);
			// 
			// trackBar28
			// 
			this->trackBar28->Location = System::Drawing::Point(1094, 73);
			this->trackBar28->Maximum = 100;
			this->trackBar28->Name = L"trackBar28";
			this->trackBar28->Size = System::Drawing::Size(104, 56);
			this->trackBar28->TabIndex = 160;
			this->trackBar28->Value = 80;
			this->trackBar28->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar28_ValueChanged);
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(1053, 89);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(36, 22);
			this->textBox27->TabIndex = 159;
			this->textBox27->Text = L"100";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(969, 92);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(17, 17);
			this->label21->TabIndex = 158;
			this->label21->Text = L"S";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(991, 89);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(36, 22);
			this->textBox28->TabIndex = 157;
			this->textBox28->Text = L"35";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Location = System::Drawing::Point(982, 169);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(98, 30);
			this->button7->TabIndex = 156;
			this->button7->Text = L"Podgl¹d";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// trackBar29
			// 
			this->trackBar29->Location = System::Drawing::Point(1094, 43);
			this->trackBar29->Maximum = 360;
			this->trackBar29->Name = L"trackBar29";
			this->trackBar29->Size = System::Drawing::Size(104, 56);
			this->trackBar29->TabIndex = 155;
			this->trackBar29->Value = 120;
			this->trackBar29->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar29_ValueChanged);
			// 
			// trackBar30
			// 
			this->trackBar30->Location = System::Drawing::Point(1094, 11);
			this->trackBar30->Maximum = 360;
			this->trackBar30->Name = L"trackBar30";
			this->trackBar30->Size = System::Drawing::Size(104, 56);
			this->trackBar30->TabIndex = 154;
			this->trackBar30->Value = 90;
			this->trackBar30->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar30_Scroll);
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(1053, 37);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(36, 22);
			this->textBox29->TabIndex = 153;
			this->textBox29->Text = L"35";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(969, 40);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(18, 17);
			this->label22->TabIndex = 152;
			this->label22->Text = L"H";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label23->Location = System::Drawing::Point(962, 11);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(94, 20);
			this->label23->TabIndex = 151;
			this->label23->Text = L"Bia³e damki";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(991, 37);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(36, 22);
			this->textBox30->TabIndex = 150;
			this->textBox30->Text = L"0";
			// 
			// trackBar19
			// 
			this->trackBar19->Location = System::Drawing::Point(862, 169);
			this->trackBar19->Maximum = 255;
			this->trackBar19->Name = L"trackBar19";
			this->trackBar19->Size = System::Drawing::Size(104, 56);
			this->trackBar19->TabIndex = 149;
			this->trackBar19->Value = 255;
			// 
			// trackBar20
			// 
			this->trackBar20->Location = System::Drawing::Point(862, 137);
			this->trackBar20->Maximum = 100;
			this->trackBar20->Name = L"trackBar20";
			this->trackBar20->Size = System::Drawing::Size(104, 56);
			this->trackBar20->TabIndex = 148;
			this->trackBar20->Value = 100;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(821, 139);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(36, 22);
			this->textBox20->TabIndex = 147;
			this->textBox20->Text = L"100";
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox20_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(737, 142);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(17, 17);
			this->label17->TabIndex = 146;
			this->label17->Text = L"V";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(759, 139);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(36, 22);
			this->textBox21->TabIndex = 145;
			this->textBox21->Text = L"100";
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox21_TextChanged);
			// 
			// trackBar21
			// 
			this->trackBar21->Location = System::Drawing::Point(862, 96);
			this->trackBar21->Maximum = 100;
			this->trackBar21->Name = L"trackBar21";
			this->trackBar21->Size = System::Drawing::Size(104, 56);
			this->trackBar21->TabIndex = 144;
			this->trackBar21->Value = 100;
			this->trackBar21->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar21_ValueChanged);
			// 
			// trackBar22
			// 
			this->trackBar22->Location = System::Drawing::Point(862, 73);
			this->trackBar22->Maximum = 100;
			this->trackBar22->Name = L"trackBar22";
			this->trackBar22->Size = System::Drawing::Size(104, 56);
			this->trackBar22->TabIndex = 143;
			this->trackBar22->Value = 80;
			this->trackBar22->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar22_ValueChanged);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(821, 89);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(36, 22);
			this->textBox22->TabIndex = 142;
			this->textBox22->Text = L"100";
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox22_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(737, 92);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(17, 17);
			this->label18->TabIndex = 141;
			this->label18->Text = L"S";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(759, 89);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(36, 22);
			this->textBox23->TabIndex = 140;
			this->textBox23->Text = L"35";
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox23_TextChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Location = System::Drawing::Point(750, 169);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(98, 30);
			this->button6->TabIndex = 139;
			this->button6->Text = L"Podgl¹d";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// trackBar23
			// 
			this->trackBar23->Location = System::Drawing::Point(862, 43);
			this->trackBar23->Maximum = 360;
			this->trackBar23->Name = L"trackBar23";
			this->trackBar23->Size = System::Drawing::Size(104, 56);
			this->trackBar23->TabIndex = 138;
			this->trackBar23->Value = 120;
			this->trackBar23->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar23_ValueChanged);
			// 
			// trackBar24
			// 
			this->trackBar24->Location = System::Drawing::Point(862, 11);
			this->trackBar24->Maximum = 360;
			this->trackBar24->Name = L"trackBar24";
			this->trackBar24->Size = System::Drawing::Size(104, 56);
			this->trackBar24->TabIndex = 137;
			this->trackBar24->Value = 90;
			this->trackBar24->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar24_ValueChanged);
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(821, 37);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(36, 22);
			this->textBox24->TabIndex = 136;
			this->textBox24->Text = L"35";
			this->textBox24->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox24_TextChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(737, 40);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(18, 17);
			this->label19->TabIndex = 135;
			this->label19->Text = L"H";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label20->Location = System::Drawing::Point(730, 11);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(108, 20);
			this->label20->TabIndex = 134;
			this->label20->Text = L"Czarne damki";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(759, 37);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(36, 22);
			this->textBox25->TabIndex = 133;
			this->textBox25->Text = L"0";
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox25_TextChanged);
			// 
			// trackBar13
			// 
			this->trackBar13->Location = System::Drawing::Point(620, 169);
			this->trackBar13->Maximum = 255;
			this->trackBar13->Name = L"trackBar13";
			this->trackBar13->Size = System::Drawing::Size(104, 56);
			this->trackBar13->TabIndex = 132;
			this->trackBar13->Value = 255;
			// 
			// trackBar14
			// 
			this->trackBar14->Location = System::Drawing::Point(620, 137);
			this->trackBar14->Maximum = 255;
			this->trackBar14->Name = L"trackBar14";
			this->trackBar14->Size = System::Drawing::Size(104, 56);
			this->trackBar14->TabIndex = 131;
			this->trackBar14->Value = 100;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(579, 139);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(36, 22);
			this->textBox14->TabIndex = 130;
			this->textBox14->Text = L"255";
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(495, 142);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 17);
			this->label13->TabIndex = 129;
			this->label13->Text = L"V";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(517, 139);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(36, 22);
			this->textBox15->TabIndex = 128;
			this->textBox15->Text = L"100";
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// trackBar15
			// 
			this->trackBar15->Location = System::Drawing::Point(620, 96);
			this->trackBar15->Maximum = 255;
			this->trackBar15->Name = L"trackBar15";
			this->trackBar15->Size = System::Drawing::Size(104, 56);
			this->trackBar15->TabIndex = 127;
			this->trackBar15->Value = 255;
			// 
			// trackBar16
			// 
			this->trackBar16->Location = System::Drawing::Point(620, 73);
			this->trackBar16->Maximum = 255;
			this->trackBar16->Name = L"trackBar16";
			this->trackBar16->Size = System::Drawing::Size(104, 56);
			this->trackBar16->TabIndex = 126;
			this->trackBar16->Value = 80;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(579, 89);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(36, 22);
			this->textBox16->TabIndex = 125;
			this->textBox16->Text = L"255";
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox16_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(495, 92);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(17, 17);
			this->label14->TabIndex = 124;
			this->label14->Text = L"S";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(517, 89);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(36, 22);
			this->textBox17->TabIndex = 123;
			this->textBox17->Text = L"35";
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox17_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(508, 169);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 30);
			this->button4->TabIndex = 122;
			this->button4->Text = L"Podgl¹d";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// trackBar17
			// 
			this->trackBar17->Location = System::Drawing::Point(620, 43);
			this->trackBar17->Maximum = 360;
			this->trackBar17->Name = L"trackBar17";
			this->trackBar17->Size = System::Drawing::Size(104, 56);
			this->trackBar17->TabIndex = 121;
			this->trackBar17->Value = 120;
			// 
			// trackBar18
			// 
			this->trackBar18->Location = System::Drawing::Point(620, 11);
			this->trackBar18->Maximum = 360;
			this->trackBar18->Name = L"trackBar18";
			this->trackBar18->Size = System::Drawing::Size(104, 56);
			this->trackBar18->TabIndex = 120;
			this->trackBar18->Value = 90;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(579, 37);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(36, 22);
			this->textBox18->TabIndex = 119;
			this->textBox18->Text = L"200";
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox18_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(495, 40);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(18, 17);
			this->label15->TabIndex = 118;
			this->label15->Text = L"H";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label16->Location = System::Drawing::Point(488, 11);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(109, 20);
			this->label16->TabIndex = 117;
			this->label16->Text = L"Czarne pionki";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(517, 37);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(36, 22);
			this->textBox19->TabIndex = 116;
			this->textBox19->Text = L"140";
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox19_TextChanged);
			// 
			// trackBar7
			// 
			this->trackBar7->Location = System::Drawing::Point(378, 169);
			this->trackBar7->Maximum = 255;
			this->trackBar7->Name = L"trackBar7";
			this->trackBar7->Size = System::Drawing::Size(104, 56);
			this->trackBar7->TabIndex = 115;
			this->trackBar7->Value = 255;
			// 
			// trackBar8
			// 
			this->trackBar8->Location = System::Drawing::Point(378, 137);
			this->trackBar8->Maximum = 255;
			this->trackBar8->Name = L"trackBar8";
			this->trackBar8->Size = System::Drawing::Size(104, 56);
			this->trackBar8->TabIndex = 114;
			this->trackBar8->Value = 100;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(336, 139);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(36, 22);
			this->textBox8->TabIndex = 113;
			this->textBox8->Text = L"255";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(252, 142);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 17);
			this->label9->TabIndex = 112;
			this->label9->Text = L"V";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(274, 139);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(36, 22);
			this->textBox9->TabIndex = 111;
			this->textBox9->Text = L"100";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// trackBar9
			// 
			this->trackBar9->Location = System::Drawing::Point(378, 105);
			this->trackBar9->Maximum = 255;
			this->trackBar9->Name = L"trackBar9";
			this->trackBar9->Size = System::Drawing::Size(104, 56);
			this->trackBar9->TabIndex = 110;
			this->trackBar9->Value = 255;
			// 
			// trackBar10
			// 
			this->trackBar10->Location = System::Drawing::Point(378, 73);
			this->trackBar10->Maximum = 255;
			this->trackBar10->Name = L"trackBar10";
			this->trackBar10->Size = System::Drawing::Size(104, 56);
			this->trackBar10->TabIndex = 109;
			this->trackBar10->Value = 80;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(336, 89);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(36, 22);
			this->textBox10->TabIndex = 108;
			this->textBox10->Text = L"255";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(252, 92);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 17);
			this->label10->TabIndex = 107;
			this->label10->Text = L"S";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(274, 89);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(36, 22);
			this->textBox11->TabIndex = 106;
			this->textBox11->Text = L"50";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(273, 166);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 30);
			this->button3->TabIndex = 105;
			this->button3->Text = L"Podgl¹d";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// trackBar11
			// 
			this->trackBar11->Location = System::Drawing::Point(378, 43);
			this->trackBar11->Maximum = 360;
			this->trackBar11->Name = L"trackBar11";
			this->trackBar11->Size = System::Drawing::Size(104, 56);
			this->trackBar11->TabIndex = 104;
			this->trackBar11->Value = 120;
			// 
			// trackBar12
			// 
			this->trackBar12->Location = System::Drawing::Point(378, 11);
			this->trackBar12->Maximum = 360;
			this->trackBar12->Name = L"trackBar12";
			this->trackBar12->Size = System::Drawing::Size(104, 56);
			this->trackBar12->TabIndex = 103;
			this->trackBar12->Value = 90;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(336, 39);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(36, 22);
			this->textBox12->TabIndex = 102;
			this->textBox12->Text = L"90";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(252, 42);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 17);
			this->label11->TabIndex = 101;
			this->label11->Text = L"H";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(255, 11);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 20);
			this->label12->TabIndex = 100;
			this->label12->Text = L"Bia³e pionki";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(274, 39);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(36, 22);
			this->textBox13->TabIndex = 99;
			this->textBox13->Text = L"40";
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// trackBar5
			// 
			this->trackBar5->Location = System::Drawing::Point(145, 169);
			this->trackBar5->Maximum = 255;
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(104, 56);
			this->trackBar5->TabIndex = 98;
			this->trackBar5->Value = 255;
			this->trackBar5->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar5_ValueChanged);
			// 
			// trackBar6
			// 
			this->trackBar6->Location = System::Drawing::Point(145, 137);
			this->trackBar6->Maximum = 255;
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(104, 56);
			this->trackBar6->TabIndex = 97;
			this->trackBar6->Value = 100;
			this->trackBar6->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar6_ValueChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(94, 139);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(36, 22);
			this->textBox6->TabIndex = 96;
			this->textBox6->Text = L"255";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 17);
			this->label8->TabIndex = 95;
			this->label8->Text = L"V";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(32, 139);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(36, 22);
			this->textBox7->TabIndex = 94;
			this->textBox7->Text = L"100";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(145, 105);
			this->trackBar3->Maximum = 255;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(104, 56);
			this->trackBar3->TabIndex = 93;
			this->trackBar3->Value = 255;
			this->trackBar3->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar3_ValueChanged);
			// 
			// trackBar4
			// 
			this->trackBar4->Location = System::Drawing::Point(145, 73);
			this->trackBar4->Maximum = 255;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(104, 56);
			this->trackBar4->TabIndex = 92;
			this->trackBar4->Value = 80;
			this->trackBar4->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar4_ValueChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(94, 89);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(36, 22);
			this->textBox4->TabIndex = 91;
			this->textBox4->Text = L"255";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 17);
			this->label7->TabIndex = 90;
			this->label7->Text = L"S";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(32, 89);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(36, 22);
			this->textBox5->TabIndex = 89;
			this->textBox5->Text = L"80";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(32, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 32);
			this->button2->TabIndex = 88;
			this->button2->Text = L"Podgl¹d";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(145, 43);
			this->trackBar2->Maximum = 360;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(104, 56);
			this->trackBar2->TabIndex = 86;
			this->trackBar2->Value = 120;
			this->trackBar2->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar2_ValueChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(145, 11);
			this->trackBar1->Maximum = 360;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 56);
			this->trackBar1->TabIndex = 85;
			this->trackBar1->Value = 90;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &MyForm::trackBar1_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(223, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 17);
			this->label6->TabIndex = 84;
			this->label6->Text = L"-";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(94, 41);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(36, 22);
			this->textBox3->TabIndex = 83;
			this->textBox3->Text = L"120";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 17);
			this->label5->TabIndex = 82;
			this->label5->Text = L"H";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(13, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 20);
			this->label4->TabIndex = 81;
			this->label4->Text = L"Znaczniki";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(32, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(36, 22);
			this->textBox2->TabIndex = 80;
			this->textBox2->Text = L"90";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(675, 117);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(228, 48);
			this->button5->TabIndex = 81;
			this->button5->Text = L"Zasady gry";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Tan;
			this->ClientSize = System::Drawing::Size(1206, 812);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox64);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->pictureBox61);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox57);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox65);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Warcaby";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void MyForm_Load(Object^  sender, EventArgs^  e) {
	}
	private:
		

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//////////////////////////////////
		//symulacja uzupe³nionej macierzy

		cli::array<int, 2> ^macierz = gcnew cli::array<int, 2>(8, 8);
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				macierz[i, j] = 0;
			}
		}
#pragma region wykrywanko
		int map[8][8];
		int map2[8][8];
		while (1)
		{
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					map[i][j] = 0;
				}
			}

			cv::VideoCapture cap(1); // open the default camera
			if (!cap.isOpened())  // check if we succeeded
				return;
			cv::Mat src_gray, dst, dilation_dst, erosion_dst, srcHSV;
			cv::Mat bialePionki, czarnePionki, bialeDamki, czarneDamki;
			cv::Mat plansza;
			cv::Mat mask1;

			cv::Mat src;
			cap >> src; // get a new frame from camera
			cv::cvtColor(src, srcHSV, CV_BGR2HSV);
			cv::inRange(srcHSV, cv::Scalar(znaczniki->minH, znaczniki->minS, znaczniki->minV), cv::Scalar(znaczniki->maxH, znaczniki->maxS, znaczniki->maxV), mask1);
			cv::cvtColor(src, src_gray, CV_BGR2GRAY);
			mask1 = Erosion(mask1, 1, 15);
			mask1 = Dilation(mask1, 1, 7);

			std::vector<std::vector<cv::Point> > kontury;
			cv::Mat hierarchia;
			cv::findContours(mask1, kontury, hierarchia, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
			std::vector<cv::Point> srodki;

			for (int i = 0; i < kontury.size(); i++) //znalezienie srodkow markerow
			{
				srodki.push_back(cv::Point(0, 0));
				//drawContours(src, kontury, i, Scalar(0, 0, 255), 2, 8, hierarchia, 0, Point());
				int sumX = 0, sumY = 0;
				for (int j = 0; j < kontury[i].size(); j++)
				{
					sumX += kontury[i][j].x;
					sumY += kontury[i][j].y;
				}
				sumX /= kontury[i].size();
				sumY /= kontury[i].size();

				srodki[i] = cv::Point(sumX, sumY);
				//drawMarker(src, srodki[i], Scalar(0, 255, 0));
			}
			if (srodki.size() == 2)
			{
				//if(srodki[2].x>srodki[3].x)
				plansza = cv::Mat(src, cv::Rect(srodki[0], srodki[1]));

				//polylines(src, srodki, 3, Scalar(0, 255, 0),2);
				cv::imshow("plansza", plansza);
				cv::Mat planszaHSV;
				cvtColor(plansza, planszaHSV, CV_BGR2HSV);
				//inRange(plansza, Scalar(200, 100, 0), Scalar(250, 255, 255), bialePionki);
				cv::inRange(planszaHSV, cv::Scalar(biale->minH, biale->minS, biale->minV), cv::Scalar(biale->maxH, biale->maxS, biale->maxV), bialePionki);
				bialePionki = Erosion(bialePionki, 1, 5);
				bialePionki = Dilation(bialePionki, 1, 5);

				cv::inRange(planszaHSV, cv::Scalar(czarne->minH, czarne->minS, czarne->minV), cv::Scalar(czarne->maxH, czarne->maxS, czarne->maxV), czarnePionki);
				czarnePionki = Erosion(czarnePionki, 1, 5);
				czarnePionki = Dilation(czarnePionki, 1, 5);

				cv::inRange(planszaHSV, cv::Scalar(czarneD->minH, czarneD->minS, czarneD->minV), cv::Scalar(czarneD->maxH, czarneD->maxS, czarneD->maxV), czarneDamki);
				czarneDamki = Erosion(czarneDamki, 1, 5);
				czarneDamki = Dilation(czarneDamki, 1, 5);

				cv::Size wymiary = bialePionki.size();
				int wysokoscPola = wymiary.height / 8;
				int szerokoscPola = wymiary.width / 8;
				//ustawienie bialych pionków:
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						std::vector<std::vector<cv::Point> > czyWykryto;
						cv::Mat hierarchia2;
						cv::Rect rectCrop = cv::Rect(i*szerokoscPola, j*wysokoscPola, szerokoscPola, wysokoscPola);
						cv::Mat croppedImage = cv::Mat(bialePionki, rectCrop);
						findContours(croppedImage, czyWykryto, hierarchia2, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
						if (czyWykryto.size())
						{
							map[i][j] = 1;
						}
					}
				}
				//ustawienie czarne pionków:
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						std::vector<std::vector<cv::Point> > czyWykryto;
						cv::Mat hierarchia2;
						cv::Rect rectCrop = cv::Rect(i*szerokoscPola, j*wysokoscPola, szerokoscPola, wysokoscPola);
						cv::Mat croppedImage = cv::Mat(czarnePionki, rectCrop);
						findContours(croppedImage, czyWykryto, hierarchia2, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
						if (czyWykryto.size())
						{
							map[i][j] = 2;
						}
					}
				}
				//ustawienie czarnych damek:
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						std::vector<std::vector<cv::Point> > czyWykryto;
						cv::Mat hierarchia2;
						cv::Rect rectCrop = cv::Rect(i*szerokoscPola, j*wysokoscPola, szerokoscPola, wysokoscPola);
						cv::Mat croppedImage = cv::Mat(czarneDamki, rectCrop);
						findContours(croppedImage, czyWykryto, hierarchia2, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
						if (czyWykryto.size())
						{
							map[i][j] = 4;
						}
					}
				}
				for (int i = 0; i < 8; i++)for (int j = 0; j < 8; j++)map2[i][j] = map[i][j];

				for (int i = 0; i < 8; i++)
				{
					int m = 7;
					for (int j = 0; j < 8; j++)
					{
						map[i][j] = map2[i][m];
						m--;
					}
				}
			}
			cv::imshow("Erozja Maski 1", mask1);
			cv::imshow("klatka", src);
			if (!bialePionki.empty()) cv::imshow("Maska: Biale pionki", bialePionki);
			if (!czarnePionki.empty()) cv::imshow("Maska: Czarne pionki", czarnePionki);
			if (!czarneDamki.empty())cv::imshow("Maska: Czarne damki", czarneDamki);
		 

			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (i % 2 == 0)
					{
						if (j % 2 == 0) map[i][j] = 5;
					}
					else
					{
						if (j % 2 != 0) map[i][j] = 5;
					}
					macierz[i, j] = map[i][j];
				}
			}
			int nieWykrywa[8][8];
			bool czy_nie_ok = true;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					nieWykrywa[i][j] = 0;
					if (i % 2 == 0)
					{
						if (j % 2 == 0) nieWykrywa[i][j] = 5;
					}
					else
					{
						if (j % 2 != 0) nieWykrywa[i][j] = 5;
					}
					if (map[i][j] != nieWykrywa[i][j])
					{
						czy_nie_ok = false;
						break;
					}
				}
				if (!czy_nie_ok)break;
			}
			if (!czy_nie_ok)break;
		}
		for (int i = 0; i < 8; i++)
		{
			std::cout << "|";
			for (int j = 0; j < 8; j++)
			{
				std::cout << map[i][j] << "|";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
#pragma endregion


		cli::array<PictureBox^> ^boxes = {pictureBox1, pictureBox2, pictureBox3, pictureBox4, pictureBox5, pictureBox6, pictureBox7, pictureBox8, pictureBox9, pictureBox10, pictureBox11, pictureBox12, pictureBox13, pictureBox14, pictureBox15, pictureBox16, pictureBox17, pictureBox18, pictureBox19, pictureBox20, pictureBox21, pictureBox22, pictureBox23, pictureBox24, pictureBox25, pictureBox26, pictureBox27, pictureBox28, pictureBox29, pictureBox30, pictureBox31, pictureBox32, pictureBox33, pictureBox34, pictureBox35, pictureBox36, pictureBox37, pictureBox38, pictureBox39, pictureBox40, pictureBox41, pictureBox42, pictureBox43, pictureBox44, pictureBox45, pictureBox46, pictureBox47, pictureBox48, pictureBox49, pictureBox50, pictureBox51, pictureBox52, pictureBox53, pictureBox54, pictureBox55, pictureBox56, pictureBox57, pictureBox58, pictureBox59, pictureBox60, pictureBox61, pictureBox62, pictureBox63, pictureBox64 };
		//Label ^ label2;
		//wczytaj


		if (check->check(map))
		{
			label2->Visible = false;
			//ustawianie pionków
			int picture = 0;

	
			

			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (i % 2 == 0)
					{
						if (j % 2 == 1)
						{
							Image ^img = Image::FromFile("pole.png");
							boxes[picture]->Image = img;
						}
					}
					else
					{
						if (i % 2 == 1)
						{
							if (j % 2 == 0)
							{
								Image ^img = Image::FromFile("pole.png");
								boxes[picture]->Image = img;
							}
						}
					}

					if (macierz[i, j] == 1)
					{
						Image ^img = Image::FromFile("bialy2.png");
						boxes[picture]->Image = img;
					}
					if (macierz[i, j] == 2)
					{
						Image ^img = Image::FromFile("czarny2.png");
						boxes[picture]->Image = img;
					}
					if (macierz[i, j] == 3)
					{
						Image ^img = Image::FromFile("bialy_krolowa.png");
						boxes[picture]->Image = img;
					}
					if (macierz[i, j] == 4)
					{
						Image ^img = Image::FromFile("czarny_krolowa.png");
						boxes[picture]->Image = img;
					}
					picture++;
				}
			}
		}
		else label2->Visible = true;



	

	}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox65_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
			private: System::Void trackBar1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				textBox2->Text = trackBar1->Value.ToString();
				znaczniki->minH = Convert::ToInt32(textBox2->Text);
			}
			private: System::Void trackBar2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				textBox3->Text = trackBar2->Value.ToString();
				znaczniki->maxH = Convert::ToInt32(textBox3->Text);
			}
			private: void test()
			{
					cv::VideoCapture cap(1); // open the default camera
					if (!cap.isOpened())  // check if we succeeded
						return;
					cv::Mat src_gray, dst, dilation_dst, erosion_dst, srcHSV;
					cv::Mat mask1;

					cv::Mat src;
					cap >> src; // get a new frame from camera
					cv::cvtColor(src, srcHSV, CV_BGR2HSV);
					cv::inRange(srcHSV, cv::Scalar(znaczniki->minH, znaczniki->minS, znaczniki->minV), cv::Scalar(znaczniki->maxH, znaczniki->maxS, znaczniki->maxV), mask1);
					cv::cvtColor(src, src_gray, CV_BGR2GRAY);
					mask1 = Erosion(mask1, 1, 15);
					mask1 = Dilation(mask1, 1, 7);
					//cv::imwrite("znaczniki.bmp", src);
					cv::imshow("src", src);
					cv::imshow("test", mask1);
					//pictureBox66->Image = Image::FromFile("znaczniki.bmp");
			}
			private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				test();
			}

private: System::Void trackBar4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox5->Text = trackBar4->Value.ToString();
	znaczniki->minS = Convert::ToInt32(textBox5->Text);
}
private: System::Void trackBar3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox4->Text = trackBar3->Value.ToString();
	znaczniki->maxS = Convert::ToInt32(textBox4->Text);
}
private: System::Void trackBar6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox7->Text = trackBar6->Value.ToString();
	znaczniki->minV = Convert::ToInt32(textBox7->Text);
}
private: System::Void trackBar5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox6->Text = trackBar5->Value.ToString();
	znaczniki->maxV = Convert::ToInt32(textBox6->Text);
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	znaczniki->minH = Convert::ToInt32(textBox2->Text);
	trackBar1->Value = Convert::ToInt32(textBox2->Text);
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	znaczniki->maxH = Convert::ToInt32(textBox3->Text);
	trackBar2->Value = Convert::ToInt32(textBox3->Text);
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	znaczniki->minS = Convert::ToInt32(textBox5->Text);
	trackBar4->Value = Convert::ToInt32(textBox5->Text);
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	znaczniki->maxS = Convert::ToInt32(textBox4->Text);
	trackBar3->Value = Convert::ToInt32(textBox4->Text);
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	znaczniki->minV = Convert::ToInt32(textBox7->Text);
	trackBar6->Value = Convert::ToInt32(textBox7->Text);
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	znaczniki->maxV = Convert::ToInt32(textBox6->Text);
	trackBar5->Value = Convert::ToInt32(textBox6->Text);
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	biale->minV = Convert::ToInt32(textBox9->Text);
	trackBar8->Value = Convert::ToInt32(textBox9->Text);
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	biale->maxV = Convert::ToInt32(textBox8->Text);
	trackBar7->Value = Convert::ToInt32(textBox8->Text);
}
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	biale->minS = Convert::ToInt32(textBox11->Text);
	trackBar10->Value = Convert::ToInt32(textBox11->Text);
}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	biale->maxS = Convert::ToInt32(textBox10->Text);
	trackBar9->Value = Convert::ToInt32(textBox10->Text);
}
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	biale->minH = Convert::ToInt32(textBox13->Text);
	trackBar12->Value = Convert::ToInt32(textBox13->Text);
}
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	biale->maxH = Convert::ToInt32(textBox12->Text);
	trackBar11->Value = Convert::ToInt32(textBox12->Text);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("– Gra bêdzie rozgrywana na czarnych polach, 12 bia³ymi i 12 czarnymi pionkami \n " +
		" – Ustawiamy pionki na planszy w 3 rzêdach naprzeciw siebie.\n " +
		" – Grê rozpoczyna zawodnik z bia³ymi pionkami\n " +
		" – Pionki poruszaj¹ do przodu po przek¹tnych czarnych kwadratów o jedno pole\n " +
		" – Nie wolno wykonywaæ ruchów do ty³u\n " +
		" – Pionek stoj¹cy przed naszym, lub za naszym, gdy za nim jest wolne pole musi zbiæ Przeskakujemy pionek przeciwnika i stajemy za zbitym pionkiem.Zbity pionek odk³adamy.Bicie jest obowi¹zkowe.Mo¿emy zbiæ kilka pionków.\n " +
		" – W momencie, gdy nie zbijemy pionka przeciwnika – tracimy w³asny pionek.\n " +
		" – Pionek, który dojdzie do ostatniego rzêdu przeciwnika zmienia siê w Królow¹\n " +
		" – Królow¹ poruszamy siê tak jak pionkiem, ale o dowoln¹ iloœæ pól, mo¿emy wykonywaæ ruchy do ty³u.Napotkany na swojej drodze pionek przeciwnika nale¿y zbiæ.\n " +
		" – Wygrywa to osoba, która wyeliminuje pionki przeciwnika.\n " +
		" – Pionek który dojedzie do ostatniego rzêdu staje siê królow¹\n " +
		" – Królow¹ poruszamy siê jak pionkiem, ale o dowoln¹ liczbê pól, mo¿emy poruszaæ siê do ty³u.\n " +
		" – Bicia s¹ obowi¹zkowe\n " +
		" – Gdy po biciu mo¿liwe jest kolejne bicie to ruch wykonuje ta sama osoba, musi wykonaæ to bicie \n " +
		" – Ka¿dy gracz rozpoczyna grê z dwunastoma pionami(jeden koloru bia³ego, drugi – czerwonego) ustawionymi na ciemniejszych polach planszy, w sposób przedstawiony na poni¿szej ilustracji.\n " +
		" – Gra rozgrywana jest na ciemnych polach planszy o rozmiarze 8 × 8 pól.\n " +
		" – Piony mog¹ poruszaæ siê o jedno pole do przodu po przek¹tnej(na ukos) na wolne pola.\n " +
		" – Bicie pionem nastêpuje przez przeskoczenie s¹siedniego pionu(lub damki) przeciwnika na pole znajduj¹ce siê tu¿ za nim po przek¹tnej(pole to musi byæ wolne).Zbite piony s¹ usuwane z planszy po zakoñczeniu ruchu.\n " +
		" – Piony mog¹ biæ zarówno do przodu, jak i do ty³u.\n ");
}
private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarne->minV = Convert::ToInt32(textBox15->Text);
	trackBar14->Value = Convert::ToInt32(textBox15->Text);
}
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarne->maxV = Convert::ToInt32(textBox14->Text);
	trackBar13->Value = Convert::ToInt32(textBox14->Text);
}
private: System::Void textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarne->minS = Convert::ToInt32(textBox17->Text);
	trackBar16->Value = Convert::ToInt32(textBox17->Text);
}
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarne->maxS = Convert::ToInt32(textBox16->Text);
	trackBar15->Value = Convert::ToInt32(textBox16->Text);
}
private: System::Void textBox19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarne->minH = Convert::ToInt32(textBox19->Text);
	trackBar18->Value = Convert::ToInt32(textBox19->Text);
}
private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarne->maxH = Convert::ToInt32(textBox18->Text);
	trackBar17->Value = Convert::ToInt32(textBox18->Text);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	cv::VideoCapture cap(1); // open the default camera
	if (!cap.isOpened())  // check if we succeeded
		return;
	cv::Mat src_gray, dst, dilation_dst, erosion_dst, srcHSV;
	cv::Mat mask1;

	cv::Mat src;
	cap >> src; // get a new frame from camera
	cv::cvtColor(src, srcHSV, CV_BGR2HSV);
	cv::inRange(srcHSV, cv::Scalar(biale->minH, biale->minS, biale->minV), cv::Scalar(biale->maxH, biale->maxS, biale->maxV), mask1);
	mask1 = Erosion(mask1, 1, 5);
	mask1 = Dilation(mask1, 1, 5);
	//cv::imwrite("znaczniki.bmp", src);
	cv::imshow("src", src);
	cv::imshow("test", mask1);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	cv::VideoCapture cap(1); // open the default camera
	if (!cap.isOpened())  // check if we succeeded
		return;
	cv::Mat src_gray, dst, dilation_dst, erosion_dst, srcHSV;
	cv::Mat mask1;
	cv::Mat src;
	cap >> src; // get a new frame from camera
	cv::cvtColor(src, srcHSV, CV_BGR2HSV);
	cv::inRange(srcHSV, cv::Scalar(czarne->minH, czarne->minS, czarne->minV), cv::Scalar(czarne->maxH, czarne->maxS, czarne->maxV), mask1);
	mask1 = Erosion(mask1, 1, 5);
	mask1 = Dilation(mask1, 1, 5);
				//cv::imwrite("znaczniki.bmp", src);
	cv::imshow("src", src);
	cv::imshow("test", mask1);
}
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	cv::VideoCapture cap(1); // open the default camera
	if (!cap.isOpened())  // check if we succeeded
		return;
	cv::Mat src_gray, dst, dilation_dst, erosion_dst, srcHSV;
	cv::Mat mask1;
	cv::Mat src;
	cap >> src; // get a new frame from camera
	cv::cvtColor(src, srcHSV, CV_BGR2HSV);
	cv::inRange(srcHSV, cv::Scalar(czarneD->minH, czarneD->minS, czarneD->minV), cv::Scalar(czarneD->maxH, czarneD->maxS, czarneD->maxV), mask1);
	mask1 = Erosion(mask1, 1, 5);
	mask1 = Dilation(mask1, 1, 5);
	//cv::imwrite("znaczniki.bmp", src);
	cv::imshow("src", src);
	cv::imshow("test", mask1);
}
private: System::Void textBox25_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarneD->minH = Convert::ToInt32(textBox25->Text);
	trackBar24->Value = Convert::ToInt32(textBox25->Text);
}
private: System::Void textBox24_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarneD->maxH = Convert::ToInt32(textBox24->Text);
	trackBar23->Value = Convert::ToInt32(textBox24->Text);
}
private: System::Void textBox23_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarneD->minS = Convert::ToInt32(textBox23->Text);
	trackBar22->Value = Convert::ToInt32(textBox23->Text);
}
private: System::Void textBox22_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarneD->maxS = Convert::ToInt32(textBox22->Text);
	trackBar21->Value = Convert::ToInt32(textBox22->Text);
}
private: System::Void textBox21_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarneD->minV = Convert::ToInt32(textBox21->Text);
	trackBar20->Value = Convert::ToInt32(textBox21->Text);
}
private: System::Void textBox20_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	czarneD->maxH = Convert::ToInt32(textBox20->Text);
	trackBar19->Value = Convert::ToInt32(textBox20->Text);
}
private: System::Void trackBar24_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox25->Text = trackBar24->Value.ToString();
	czarneD->minH = Convert::ToInt32(textBox25->Text);
}
private: System::Void trackBar23_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox24->Text = trackBar23->Value.ToString();
	czarneD->maxH = Convert::ToInt32(textBox24->Text);
}
private: System::Void trackBar22_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox23->Text = trackBar22->Value.ToString();
	czarneD->minS = Convert::ToInt32(textBox23->Text);
}
private: System::Void trackBar21_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox22->Text = trackBar21->Value.ToString();
	czarneD->maxS = Convert::ToInt32(textBox22->Text);
}
private: System::Void trackBar30_Scroll(System::Object^  sender, System::EventArgs^  e) {
	textBox30->Text = trackBar30->Value.ToString();
	bialeD->minH = Convert::ToInt32(textBox30->Text);
}
private: System::Void trackBar29_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox29->Text = trackBar29->Value.ToString();
	bialeD->maxH = Convert::ToInt32(textBox29->Text);
}
private: System::Void trackBar28_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox28->Text = trackBar28->Value.ToString();
	bialeD->minS = Convert::ToInt32(textBox28->Text);
}
private: System::Void trackBar27_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox27->Text = trackBar27->Value.ToString();
	bialeD->maxS = Convert::ToInt32(textBox27->Text);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	cv::VideoCapture cap(1); // open the default camera
	if (!cap.isOpened())  // check if we succeeded
		return;
	cv::Mat src_gray, dst, dilation_dst, erosion_dst, srcHSV;
	cv::Mat mask1;
	cv::Mat src;
	cap >> src; // get a new frame from camera
	cv::cvtColor(src, srcHSV, CV_BGR2HSV);
	cv::inRange(srcHSV, cv::Scalar(bialeD->minH, bialeD->minS, bialeD->minV), cv::Scalar(bialeD->maxH, bialeD->maxS, bialeD->maxV), mask1);
	mask1 = Erosion(mask1, 1, 5);
	mask1 = Dilation(mask1, 1, 5);
	//cv::imwrite("znaczniki.bmp", src);
	cv::imshow("src", src);
	cv::imshow("test", mask1);
}
};
}