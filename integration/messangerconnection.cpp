#include "messangerconnection.h"
#include "ui_messangerconnection.h"
namespace Duartecorporation
{
messangerconnection::messangerconnection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::messangerconnection)
{
    ui->setupUi(this);
}

messangerconnection::~messangerconnection()
{
    delete ui;
}

void messangerconnection::on_ok_clicked()
{
mHostname = "localhost";
mport = 3333;
accept();
}

void messangerconnection::on_cancel_clicked()
{
reject();
}
}
