#include "mainwindow.h"
#include "./ui_mainwindow.h"


double MainWindow::opration(double val1 , double val2){
    switch (exp){
    case '+' : return val1 + val2;
        break;
    case '-' : return val1 - val2;
        break;
    case '*' : return val1 * val2;
        break;
    case '/' : return val1 / val2;
        break;
    default: return val1 + val2;
        break;
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_b0_clicked()
{
    if(this->ui->textView->text().size()!=1 || !this->ui->textView->text().endsWith('0'))
        this->ui->textView->setText(this->ui->textView->text().append(this->ui->b0->text()));
}


void MainWindow::on_bdot_clicked()
{
    if(!this->ui->textView->text().contains('.')){
            if(this->ui->textView->text().isEmpty()){
                this->ui->textView->setText(this->ui->textView->text().append(this->ui->b0->text().append(this->ui->bdot->text())));
            }else{
                this->ui->textView->setText(this->ui->textView->text().append(this->ui->bdot->text()));
            }
        }
}


void MainWindow::on_bdiv_clicked()
{
    if(this->ui->textView->text().endsWith('.'))
            this->ui->textView->text().append('0');
        if(!this->ui->textView->text().isEmpty()){
            if(val1 == 0){
                val1 = this->ui->textView->text().toDouble();
            }else{
                val1 = opration(val1 , this->ui->textView->text().toDouble());
            }
        }
        this->ui->textView->clear();
        exp = '/';
}


void MainWindow::on_bequl_clicked()
{
    if(!this->ui->textView->text().isEmpty()){
            val2 = this->ui->textView->text().toDouble();
            this->ui->textView->setText(QString::number(opration(val1, val2)));
        }else{
            this->ui->textView->setText(QString::number(opration(val1, val2)));
        }
        val1 = 0;
        val2 = 0;
        exp = '+';
}


void MainWindow::on_bplus_clicked()
{
    if(this->ui->textView->text().endsWith('.'))
            this->ui->textView->text().append('0');
        if(!this->ui->textView->text().isEmpty()){
            if(val1 == 0){
                val1 = this->ui->textView->text().toDouble();
            }else{
                val1 = opration(val1 , this->ui->textView->text().toDouble());
            }
        }
        this->ui->textView->clear();
        exp = '+';
}


void MainWindow::on_b3_clicked()
{
    if(this->ui->textView->text().size()==1 && this->ui->textView->text().endsWith('0'))
            this->ui->textView->setText("");
        this->ui->textView->setText(this->ui->textView->text().append(this->ui->b3->text()));

}


void MainWindow::on_b7_clicked()
{
    if(this->ui->textView->text().size()==1 && this->ui->textView->text().endsWith('0'))
            this->ui->textView->setText("");
        this->ui->textView->setText(this->ui->textView->text().append(this->ui->b7->text()));

}


void MainWindow::on_b2_clicked()
{
    if(this->ui->textView->text().size()==1 && this->ui->textView->text().endsWith('0'))
            this->ui->textView->setText("");
        this->ui->textView->setText(this->ui->textView->text().append(this->ui->b2->text()));

}


void MainWindow::on_b1_clicked()
{
    if(this->ui->textView->text().size()==1 && this->ui->textView->text().endsWith('0'))
            this->ui->textView->setText("");
        this->ui->textView->setText(this->ui->textView->text().append(this->ui->b1->text()));

}


void MainWindow::on_bmina_clicked()
{
    if(this->ui->textView->text().endsWith('.'))
            this->ui->textView->text().append('0');
        if(!this->ui->textView->text().isEmpty()){
            if(val1 == 0){
                val1 = this->ui->textView->text().toDouble();
            }else{
                val1 = opration(val1 , this->ui->textView->text().toDouble());
            }
        }
        this->ui->textView->clear();
        exp = '-';
}


void MainWindow::on_b6_clicked()
{
    if(this->ui->textView->text().size()==1 && this->ui->textView->text().endsWith('0'))
            this->ui->textView->setText("");
        this->ui->textView->setText(this->ui->textView->text().append(this->ui->b6->text()));

}


void MainWindow::on_b5_clicked()
{
    if(this->ui->textView->text().size()==1 && this->ui->textView->text().endsWith('0'))
            this->ui->textView->setText("");
        this->ui->textView->setText(this->ui->textView->text().append(this->ui->b5->text()));

}


void MainWindow::on_b4_clicked()
{
    if(this->ui->textView->text().size()==1 && this->ui->textView->text().endsWith('0'))
            this->ui->textView->setText("");
        this->ui->textView->setText(this->ui->textView->text().append(this->ui->b4->text()));

}


void MainWindow::on_bmulti_clicked()
{
    if(this->ui->textView->text().endsWith('.'))
            this->ui->textView->text().append('0');
        if(!this->ui->textView->text().isEmpty()){
            if(val1 == 0){
                val1 = this->ui->textView->text().toDouble();
            }else{
                val1 = opration(val1 , this->ui->textView->text().toDouble());
            }
        }
        this->ui->textView->clear();
        exp = '*';
}


void MainWindow::on_b9_clicked()
{
    if(this->ui->textView->text().size()==1 && this->ui->textView->text().endsWith('0'))
           this->ui->textView->setText("");
       this->ui->textView->setText(this->ui->textView->text().append(this->ui->b9->text()));

}


void MainWindow::on_b8_clicked()
{
    if(this->ui->textView->text().size()==1 && this->ui->textView->text().endsWith('0'))
            this->ui->textView->setText("");
        this->ui->textView->setText(this->ui->textView->text().append(this->ui->b8->text()));

}


void MainWindow::on_clear_clicked()
{
    this->ui->textView->clear();
        val1 = 0;
        val2 = 0;
        exp = '+';
}

