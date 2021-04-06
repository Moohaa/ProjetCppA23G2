#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "inscri.h"
#include <QMainWindow>
#include <QPropertyAnimation>
#include "utilisateur.h"
#include "droitacces.h"
#include <QMainWindow>
#include <windows.h>
#include <QFile>
#include <QPrinter>
#include <QPrintDialog>
#include<QPropertyAnimation>
#include<QParallelAnimationGroup>
#include <QMediaPlayer>
#include"fournisseur.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Login_ins_clicked();

    void on_Login_connexion_clicked();

    void on_affiche_utilisateur_clicked();

    void on_pushButton_clicked();

    void on_tab_affiche_doubleClicked(const QModelIndex &index);

    void on_modifier_utilisateur_clicked();

    void on_ajouter_droit_clicked();

    void on_inscription_inscrit_2_clicked();

    void on_inscription_inscrit_clicked();

    void on_liste_droit_currentIndexChanged(const QString &arg1);

    void on_ajoute_droit_clicked();

    void on_supp_droit_clicked();

    void on_modifier_droit_clicked();

    void on_tab_droit_doubleClicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_supprimer_droit_clicked();

    void on_ajout_droit_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_tri_clicked();

    void on_recherche_clicked();

    void on_Supp_droitut_clicked();

    void on_pushButton_6_clicked();

    void on_ajoute_droit_3_clicked();

    void on_liste_droit_3_currentIndexChanged(const QString &arg2);

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
    QPropertyAnimation *animation,*animation1;
    Inscri *ins;
    Utilisateur tmputilisateur,tmpdroit_u;
    droit_acces tmpdroit;
};
#endif // MAINWINDOW_H
