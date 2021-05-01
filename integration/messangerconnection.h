#ifndef MESSANGERCONNECTION_H
#define MESSANGERCONNECTION_H


#include <QDialog>

namespace Ui {
class messangerconnection;
}
namespace Duartecorporation
{
class messangerconnection : public QDialog
{
    Q_OBJECT

public:
    explicit messangerconnection(QWidget *parent = nullptr);
    ~messangerconnection();
    QString hostname () const {return  mHostname;}
    quint16 port () const{return  mport;}
private slots:
    void on_ok_clicked();

    void on_cancel_clicked();

private:
    Ui::messangerconnection *ui;
    QString mHostname;
    quint16 mport;
};
}


#endif // MESSANGERCONNECTION_H
