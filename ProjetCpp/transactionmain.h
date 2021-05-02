#ifndef TRANSACTIONMAIN_H
#define TRANSACTIONMAIN_H


#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();

private slots:
    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    //void on_rechercher_clicked();

   // void on_rechercher_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // TRANSACTIONMAIN_H
