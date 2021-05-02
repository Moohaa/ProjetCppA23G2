#include "notification.h"
#include <QSystemTrayIcon>
notification::notification()
{

}
void notification::stock_manquant()
{
      QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

      notifyIcon->setIcon(QIcon("C:/Users/PC/Desktop/ProjetSmartRestaurant2A23/ProjetCppA23G2/Projet/ProjetCpp/hat.png"));
      notifyIcon->show();

      notifyIcon->showMessage("Stock Manquant ","La quantité de stock est inferieur à 50!\nVeuillez Commandez une nouvelle Fourniture! ",QSystemTrayIcon::Information,15000);
}
void notification::stock_exces()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->setIcon(QIcon("C:/Users/PC/Desktop/ProjetSmartRestaurant2A23/ProjetCppA23G2/Projet/ProjetCpp/hat.png"));
    notifyIcon->show();
    notifyIcon->showMessage("Utilisateur supprimee","Un nouveau stock a été supprimé ",QSystemTrayIcon::Critical,15000);
}
void notification::notification_modifier()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("C:/Users/PC/Desktop/ProjetSmartRestaurant2A23/ProjetCppA23G2/Projet/ProjetCpp/koujinti.png"));
    notifyIcon->show();
    notifyIcon->showMessage("Utilisateur modifiee","Un nouveau stock a été modifié ",QSystemTrayIcon::Warning,15000);
}

