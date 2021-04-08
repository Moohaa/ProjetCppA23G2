#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#
#-------------------------------------------------
QT += core gui
QT+= sql
QT       += core gui printsupport
QT       += core gui network
QT       +=  network
QT       += core gui widgets texttospeech
QT += core gui widgets
QT += multimedia
QT       += core gui sql serialport
QT += serialport
QT += core gui charts
QT       += core gui sql
<<<<<<< HEAD:Projet/Atelier_Connexion.pro
QT+= sql
CONFIG += console
=======

QT       += network

QT       += multimedia multimediawidgets printsupport serialport charts

CONFIG += stl
>>>>>>> Ahmed_Elmoez_Noomen:Projet/ProjetCpp/ProjetCpp2A.pro
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Atelier_Connexion
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

OPENSSL_LIBS='-L/opt/ssl/lib -lssl -lcrypto' ./configure -openssl-linked
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
<<<<<<< HEAD:Projet/Atelier_Connexion.pro
    droitacces.cpp \
    fournisseur.cpp \
    login.cpp \
        main.cpp \
    connection.cpp \
    utilisateur.cpp
=======
    commande.cpp \
    commandefournisseur.cpp \
    evaluation.cpp \
    fournisseur.cpp \
    menu.cpp \
    offrefournisseur.cpp \
    plat.cpp \
    smtp.cpp \
    stock.cpp\
    produit.cpp\
    connection.cpp\
    main.cpp \
    mainwindow.cpp \
    table.cpp \
    transaction.cpp
>>>>>>> Ahmed_Elmoez_Noomen:Projet/ProjetCpp/ProjetCpp2A.pro





HEADERS += \
<<<<<<< HEAD:Projet/Atelier_Connexion.pro
    droitacces.h \
    fournisseur.h \
    connection.h \
    login.h \
    utilisateur.h
=======
    commande.h \
    commandefournisseur.h \
    evaluation.h \
    fournisseur.h \
    menu.h \
    offrefournisseur.h \
    plat.h \
    smtp.h \
    stock.h\
    produit.h\
    mainwindow.h \
    connection.h \
    table.h \
    transaction.h
>>>>>>> Ahmed_Elmoez_Noomen:Projet/ProjetCpp/ProjetCpp2A.pro






FORMS += \
    login.ui



QMAKE_CXXFLAGS += -std=gnu++11
QMAKE_CXXFLAGS += -std=gnu++14

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=

DISTFILES += \
    ../Calque 0.png \
    ../Photos/hhhhhh.png
