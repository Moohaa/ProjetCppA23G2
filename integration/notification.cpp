#include "notification.h"
#include <QSystemTrayIcon>
notification::notification()
{

}
void notification::ajout_notification()
{

      QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

      //notifyIcon->setIcon(QIcon("C:\\iintegration\\SBS\\img\\icon.jpg"));
      notifyIcon->show();

      notifyIcon->showMessage("Utilisateur Ajoutee ","Un nouveau utilisateur a été ajoutée",QSystemTrayIcon::Information,15000);

}
void notification::notification_supprimer()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    //notifyIcon->setIcon(QIcon("C:\\iintegration\\SBS\\img\\icon.jpg"));
    notifyIcon->show();
    notifyIcon->showMessage("Utilisateur supprimee","Un nouveau utilisateur a été supprimé ",QSystemTrayIcon::Critical,15000);
}
void notification::notification_modifier()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    //notifyIcon->setIcon(QIcon("C:\\iintegration\\SBS\\img\\icon.jpg"));
    notifyIcon->show();
    notifyIcon->showMessage("Utilisateur modifiee","Un nouveau utilisateur a été modifié ",QSystemTrayIcon::Warning,15000);
}
