#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include <QDialog>
#include "transaction.h"
namespace Ui {
class affichage;
}

class affichage : public QDialog
{
    Q_OBJECT

public:
    explicit affichage(QWidget *parent = nullptr);
    ~affichage();
void setclient(client c);
private:
    Ui::affichage *ui;
};

#endif // AFFICHAGE_H
