﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = "Hello";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            label1.Text = "no Hello";
        }

        private void label1_Click(object sender, EventArgs e)
        {
            button1.Text = "S'uda zhmi";
            button2.Text = "Ili s'uda";

                    }
    }
}
