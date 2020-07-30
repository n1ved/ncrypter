#include "ncrypter.h"
#include "ui_ncrypter.h"

ncrypter::ncrypter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ncrypter)
{
    ui->setupUi(this);
}

ncrypter::~ncrypter()
{
    delete ui;
}
//--------------Basic code (same as the one used ncrypter terminal app)----------------

QString ncrypter::encrypt(QString text){
    for(int i=0 ; i<text.size() ; ++i){
        int key = i%4;
        QChar tempchar = QChar(text[i]);
        int num = tempchar.toLatin1();
        switch(key){
            case 0 : num ++;
            break;
            case 1 : num += 2;
            break;
            case 2 : num += 3;
            break;
            case 3 : num += 4;
            break;
        }
    char newchar = num;
    text[i] = newchar;
    }
    return text;
}


QString ncrypter::decrypt(QString text){
    for(int i=0 ; i<text.size() ; ++i){
        int key = i%4;
        QChar tempchar = QChar(text[i]);
        int num = tempchar.toLatin1();
        switch(key){
            case 0 : num --;
            break;
            case 1 : num -= 2;
            break;
            case 2 : num -= 3;
            break;
            case 3 : num -= 4;
            break;
        }
    char newchar = num;
    text[i] = newchar;
    }
    return text;
}


//--------------Button Actions ----------------------------

void ncrypter::on_encrypt_clicked()
{
    QString text;
    text = ui->input->toPlainText();
    text = ncrypter::encrypt(text);
    ui->output->setPlainText(text);

}


void ncrypter::on_decrypt_clicked()
{
    QString text;
    text = ui->input->toPlainText();
    text=ncrypter::decrypt(text);
    ui->output->setPlainText(text);
}

//----------------------------END-------------------------
