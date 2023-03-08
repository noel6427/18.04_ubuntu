/********************************************************************************
** Form generated from reading UI file 'sc_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SC_DIALOG_H
#define UI_SC_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Sc_Dialog
{
public:
    QLabel *label_sc;

    void setupUi(QDialog *Sc_Dialog)
    {
        if (Sc_Dialog->objectName().isEmpty())
            Sc_Dialog->setObjectName(QString::fromUtf8("Sc_Dialog"));
        Sc_Dialog->resize(985, 562);
        label_sc = new QLabel(Sc_Dialog);
        label_sc->setObjectName(QString::fromUtf8("label_sc"));
        label_sc->setGeometry(QRect(10, 10, 960, 540));
        label_sc->setFrameShape(QFrame::Box);

        retranslateUi(Sc_Dialog);

        QMetaObject::connectSlotsByName(Sc_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Sc_Dialog)
    {
        Sc_Dialog->setWindowTitle(QApplication::translate("Sc_Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_sc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Sc_Dialog: public Ui_Sc_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SC_DIALOG_H
