#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "inscri.h"
#include <QMainWindow>
#include <QPropertyAnimation>
#include "utilisateur.h"
#include "droitacces.h"
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

private:
    Ui::MainWindow *ui;
    QPropertyAnimation *animation,*animation1;
    Inscri *ins;
    Utilisateur tmputilisateur;
    droit_acces tmpdroit;
};
#endif // MAINWINDOW_H
