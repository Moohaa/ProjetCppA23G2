#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QSystemTrayIcon>
#include "smtp.h"
#include <QPropertyAnimation>
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
    void sendMail();
    void mailSent(QString);
//----------------------------------------MENU---------------------------------------------------
    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

//---------------------------------------------~MARIEM~-----------------------------------------------------
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

   //void on_tableView_A_clicked();

    void on_rechercherStock_clicked();
//----------------------------------------AHMED------------------------------------------------
    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    //void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_rechercher_clicked();

    //void on_lineEdit_10_cursorPositionChanged(int arg1, int arg2);

    void on_rechercher_2_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_57_clicked();
//------------------------------------------AZIZ----------------------------------------------------
    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_30_clicked();

    void on_tableView_3_clicked();

    void on_tableView_4_clicked();

    void on_PDF_aziz_clicked();

    void on_tri_aziz_clicked();

    void on_tri_aziz_1_clicked();

    void on_afficher_menu_clicked();
//--------------------------------------------FADWA-------------------------------------------------------------------

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_39_clicked();

//-------------------------------------------------------------------------------------------------------------------------


    void on_F_ADD_clicked();

    void on_F_UPDATE_clicked();

    void on_pushButton_44_clicked();

    void on_CF_ADD_clicked();

    void on_pushButton_46_clicked();

    void on_pushButton_47_clicked();

    void on_sendBtn_2_clicked();

    void on_OF_ADD_clicked();

    void on_OF_UPDATE_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_51_clicked();

    void on_pushButton_52_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_55_clicked();

    void on_pushButton_56_clicked();

//------------------------------------------------------------------------------------------------------------------------------------------



    void on_pushButton_42_clicked();

    void on_pushButton_43_clicked();



    void on_recherche_produit_clicked();

    void on_pushButton_58_clicked();

    void on_pushButton_59_clicked();

    void on_rechercher_5_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *media;
    QMovie *myMoviebg;
    QSystemTrayIcon *mSystemTrayIcon;
    QPropertyAnimation *animation;
};

#endif // MAINWINDOW_H
