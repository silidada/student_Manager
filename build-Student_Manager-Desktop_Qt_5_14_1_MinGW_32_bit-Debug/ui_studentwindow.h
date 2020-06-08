/********************************************************************************
** Form generated from reading UI file 'studentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTWINDOW_H
#define UI_STUDENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_dormitory;
    QPushButton *btn_score;
    QPushButton *btn_class_schedule;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_class_consition;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_sel_imformation;
    QPushButton *btn_test_schedule;
    QWidget *page_2;
    QTableView *table_class_schedule;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *page_5;
    QWidget *page_6;
    QWidget *page_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudentWindow)
    {
        if (StudentWindow->objectName().isEmpty())
            StudentWindow->setObjectName(QString::fromUtf8("StudentWindow"));
        StudentWindow->resize(800, 600);
        centralwidget = new QWidget(StudentWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(frame_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_3 = new QFrame(page);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_title = new QLabel(frame_3);
        label_title->setObjectName(QString::fromUtf8("label_title"));

        horizontalLayout_2->addWidget(label_title);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addWidget(frame_3);

        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        btn_dormitory = new QPushButton(frame);
        btn_dormitory->setObjectName(QString::fromUtf8("btn_dormitory"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_dormitory->sizePolicy().hasHeightForWidth());
        btn_dormitory->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_dormitory, 3, 3, 1, 1);

        btn_score = new QPushButton(frame);
        btn_score->setObjectName(QString::fromUtf8("btn_score"));
        sizePolicy.setHeightForWidth(btn_score->sizePolicy().hasHeightForWidth());
        btn_score->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_score, 0, 3, 1, 2);

        btn_class_schedule = new QPushButton(frame);
        btn_class_schedule->setObjectName(QString::fromUtf8("btn_class_schedule"));
        sizePolicy.setHeightForWidth(btn_class_schedule->sizePolicy().hasHeightForWidth());
        btn_class_schedule->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_class_schedule, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        btn_class_consition = new QPushButton(frame);
        btn_class_consition->setObjectName(QString::fromUtf8("btn_class_consition"));
        sizePolicy.setHeightForWidth(btn_class_consition->sizePolicy().hasHeightForWidth());
        btn_class_consition->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_class_consition, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        btn_sel_imformation = new QPushButton(frame);
        btn_sel_imformation->setObjectName(QString::fromUtf8("btn_sel_imformation"));
        sizePolicy.setHeightForWidth(btn_sel_imformation->sizePolicy().hasHeightForWidth());
        btn_sel_imformation->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_sel_imformation, 1, 1, 1, 1);

        btn_test_schedule = new QPushButton(frame);
        btn_test_schedule->setObjectName(QString::fromUtf8("btn_test_schedule"));
        sizePolicy.setHeightForWidth(btn_test_schedule->sizePolicy().hasHeightForWidth());
        btn_test_schedule->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_test_schedule, 3, 1, 1, 1);


        verticalLayout_2->addWidget(frame);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        table_class_schedule = new QTableView(page_2);
        table_class_schedule->setObjectName(QString::fromUtf8("table_class_schedule"));
        table_class_schedule->setGeometry(QRect(90, 40, 531, 421));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        stackedWidget->addWidget(page_7);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addWidget(frame_2);

        StudentWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StudentWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        StudentWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StudentWindow->setStatusBar(statusbar);

        retranslateUi(StudentWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(StudentWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StudentWindow)
    {
        StudentWindow->setWindowTitle(QCoreApplication::translate("StudentWindow", "MainWindow", nullptr));
        label_title->setText(QCoreApplication::translate("StudentWindow", "TextLabel", nullptr));
        btn_dormitory->setText(QCoreApplication::translate("StudentWindow", "\345\256\277\350\210\215\346\203\205\345\206\265", nullptr));
        btn_score->setText(QCoreApplication::translate("StudentWindow", "\346\237\245\350\257\242\346\210\220\347\273\251", nullptr));
        btn_class_schedule->setText(QCoreApplication::translate("StudentWindow", "\346\237\245\350\257\242\350\257\276\350\241\250", nullptr));
        btn_class_consition->setText(QCoreApplication::translate("StudentWindow", "\347\217\255\347\272\247\346\203\205\345\206\265", nullptr));
        btn_sel_imformation->setText(QCoreApplication::translate("StudentWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        btn_test_schedule->setText(QCoreApplication::translate("StudentWindow", "\350\200\203\350\257\225\345\256\211\346\216\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentWindow: public Ui_StudentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWINDOW_H
