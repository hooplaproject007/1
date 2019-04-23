#include "profiledialogue.h"
#include "ui_profiledialogue.h"
#include "newpostdialogue.h"

profiledialogue::profiledialogue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profiledialogue)
{
    ui->setupUi(this);
}

profiledialogue::~profiledialogue()
{
    delete ui;
}

void profiledialogue::on_newpost_clicked()
{
    newpostdialogue posdialogue;
    posdialogue.setModal(true);
    posdialogue.exec();
}
