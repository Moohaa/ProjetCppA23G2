#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stock.h"
#include "produit.h"
#include <QMediaPlayer>
#include <QTableView>
#include "transactionmain.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_TRI_clicked();

    void on_TRI_2_clicked();

    void on_tableView_B_doubleClicked();

    void on_tableView_A_doubleClicked();

    void on_play_clicked();

    void on_pause_clicked();

    void on_mute_clicked();

    void on_tableView_B_clicked();

    void on_tableView_A_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

//----------------------------------------AHMED------------------------------------------------

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();
    void on_tableView_2_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *media;


};

#endif // MAINWINDOW_H
