using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Warcaby_Wizualizacja
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        //podziel planszę na pola
        private void button1_Click(object sender, EventArgs e)
        {
            Image img = Image.FromFile("C:\\Users\\G\\Desktop\\plansza.png");
            int widthThird = (int)((double)img.Width / 8.0 + 0.5);
            int heightThird = (int)((double)img.Height / 8.0 + 0.5);
            Bitmap[,] bmps = new Bitmap[8, 8];
            for (int i = 0; i < 8; i++)
                for (int j = 0; j < 8; j++)
                {
                    bmps[i, j] = new Bitmap(widthThird, heightThird);
                    Graphics g = Graphics.FromImage(bmps[i, j]);
                    g.DrawImage(img, new Rectangle(0, 0, widthThird, heightThird), new Rectangle(j * widthThird, i * heightThird, widthThird, heightThird), GraphicsUnit.Pixel);
                    g.Dispose();
                }
            pictureBox1.Image = bmps[0, 0];
            pictureBox2.Image = bmps[0, 1];
            pictureBox3.Image = bmps[0, 2];
            pictureBox4.Image = bmps[0, 3];
            pictureBox5.Image = bmps[0, 4];
            pictureBox6.Image = bmps[0, 5];
            pictureBox7.Image = bmps[0, 6];
            pictureBox8.Image = bmps[0, 7];
            pictureBox9.Image = bmps[1, 0];
            pictureBox10.Image = bmps[1, 1];
            pictureBox11.Image = bmps[1, 2];
            pictureBox12.Image = bmps[1, 3];
            pictureBox13.Image = bmps[1, 4];
            pictureBox14.Image = bmps[1, 5];
            pictureBox15.Image = bmps[1, 6];
            pictureBox16.Image = bmps[1, 7];
            pictureBox17.Image = bmps[2, 0];
            pictureBox18.Image = bmps[2, 1];
            pictureBox19.Image = bmps[2, 2];
            pictureBox20.Image = bmps[2, 3];
            pictureBox21.Image = bmps[2, 4];
            pictureBox22.Image = bmps[2, 5];
            pictureBox23.Image = bmps[2, 6];
            pictureBox24.Image = bmps[2, 7];
            pictureBox25.Image = bmps[3, 0];
            pictureBox26.Image = bmps[3, 1];
            pictureBox27.Image = bmps[3, 2];
            pictureBox28.Image = bmps[3, 3];
            pictureBox29.Image = bmps[3, 4];
            pictureBox30.Image = bmps[3, 5];
            pictureBox31.Image = bmps[3, 6];
            pictureBox32.Image = bmps[3, 7];
            pictureBox33.Image = bmps[4, 0];
            pictureBox34.Image = bmps[4, 1];
            pictureBox35.Image = bmps[4, 2];
            pictureBox36.Image = bmps[4, 3];
            pictureBox37.Image = bmps[4, 4];
            pictureBox38.Image = bmps[4, 5];
            pictureBox39.Image = bmps[4, 6];
            pictureBox40.Image = bmps[4, 7];
            pictureBox41.Image = bmps[5, 0];
            pictureBox42.Image = bmps[5, 1];
            pictureBox43.Image = bmps[5, 2];
            pictureBox44.Image = bmps[5, 3];
            pictureBox45.Image = bmps[5, 4];
            pictureBox46.Image = bmps[5, 5];
            pictureBox47.Image = bmps[5, 6];
            pictureBox48.Image = bmps[5, 7];
            pictureBox49.Image = bmps[6, 0];
            pictureBox50.Image = bmps[6, 1];
            pictureBox51.Image = bmps[6, 2];
            pictureBox52.Image = bmps[6, 3];
            pictureBox53.Image = bmps[6, 4];
            pictureBox54.Image = bmps[6, 5];
            pictureBox55.Image = bmps[6, 6];
            pictureBox56.Image = bmps[6, 7];
            pictureBox57.Image = bmps[7, 0];
            pictureBox58.Image = bmps[7, 1];
            pictureBox59.Image = bmps[7, 2];
            pictureBox60.Image = bmps[7, 3];
            pictureBox61.Image = bmps[7, 4];
            pictureBox62.Image = bmps[7, 5];
            pictureBox63.Image = bmps[7, 6];
            pictureBox64.Image = bmps[7, 7];
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //////////////////////////////////
            //symulacja uzupełnionej macierzy

            int[,] macierz=new int [8,8];
            for(int i = 0;i<8;i++){
                for(int j = 0; j < 8; j++)
                {
                    macierz[i, j] = 0;
                }
            }
            macierz[0, 1] = 1;
            macierz[0, 3] = 1;
            macierz[0, 5] = 1;
            macierz[0, 7] = 1;
            macierz[1, 0] = 1;
            macierz[1, 2] = 1;
            macierz[1, 4] = 1;
            macierz[1, 6] = 1;
            macierz[2, 1] = 1;
            macierz[2, 3] = 1;
            macierz[2, 5] = 1;
            macierz[2, 7] = 1;

            macierz[5, 0] = 2;
            macierz[5, 2] = 2;
            macierz[5, 4] = 2;
            macierz[5, 6] = 2;
            macierz[6, 1] = 2;
            macierz[6, 3] = 2;
            macierz[6, 5] = 2;
            macierz[6, 7] = 2;
            macierz[7, 0] = 2;
            macierz[7, 2] = 2;
            macierz[7, 4] = 2;
            macierz[7, 6] = 2;
            /////////////////////////////////

            PictureBox[] boxes = {
              pictureBox1, pictureBox2, pictureBox3, pictureBox4, pictureBox5, pictureBox6, pictureBox7, pictureBox8, pictureBox9,
              pictureBox10, pictureBox11, pictureBox12, pictureBox13, pictureBox14, pictureBox15, pictureBox16, pictureBox17,
              pictureBox18, pictureBox19, pictureBox20, pictureBox21, pictureBox22, pictureBox23, pictureBox24, pictureBox25,
              pictureBox26, pictureBox27, pictureBox28, pictureBox29, pictureBox30, pictureBox31, pictureBox32, pictureBox33,
              pictureBox34, pictureBox35, pictureBox36, pictureBox37, pictureBox38, pictureBox39, pictureBox40, pictureBox41,
              pictureBox42, pictureBox43, pictureBox44, pictureBox45, pictureBox46, pictureBox47, pictureBox48, pictureBox49,
              pictureBox50, pictureBox51, pictureBox52, pictureBox53, pictureBox54, pictureBox55, pictureBox56, pictureBox57,
              pictureBox58, pictureBox59, pictureBox60, pictureBox61, pictureBox62, pictureBox63, pictureBox64
            };

            //ustawianie pionków
            int picture = 0;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if(macierz[i, j] == 1)
                    {
                        Image img = Image.FromFile("C:\\Users\\G\\Desktop\\bialy2.png");
                        boxes[picture].Image = img;
                    }
                    if (macierz[i, j] == 2)
                    {
                        Image img = Image.FromFile("C:\\Users\\G\\Desktop\\czarny2.png");
                        boxes[picture].Image = img;
                    }
                    picture++;
                }
            }
        }
    }
}
