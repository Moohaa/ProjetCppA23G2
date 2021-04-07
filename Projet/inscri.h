#ifndef INSCRI_H
#define INSCRI_H
#include <QPropertyAnimation>
#include <QDialog>

namespace Ui {
class Inscri;
}

class Inscri : public QDialog
{
    Q_OBJECT

public:
    explicit Inscri(QWidget *parent = nullptr);
    ~Inscri();

private slots:
    void on_inscription_inscrit_clicked();

private:
    Ui::Inscri *ui;
    QPropertyAnimation *animation2;
};

#endif // INSCRI_H
