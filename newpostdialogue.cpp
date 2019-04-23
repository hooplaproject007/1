#include "newpostdialogue.h"
#include "ui_newpostdialogue.h"

newpostdialogue::newpostdialogue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newpostdialogue)
{
    ui->setupUi(this);
}

newpostdialogue::~newpostdialogue()
{
    delete ui;
}

void newpostdialogue::on_post_clicked()
{

}
