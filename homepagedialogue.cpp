#include "homepagedialogue.h"
#include "ui_homepagedialogue.h"
#include "profiledialogue.h"

homepagedialogue::homepagedialogue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homepagedialogue)
{
    ui->setupUi(this);
}

homepagedialogue::~homepagedialogue()
{
    delete ui;
}

void homepagedialogue::on_profile_clicked()
{
    profiledialogue prodialogue;
    prodialogue.setModal(true);
    prodialogue.exec();
}
