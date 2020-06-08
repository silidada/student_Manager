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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
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
    QGridLayout *gridLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
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
    QVBoxLayout *verticalLayout;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_3;
    QCommandLinkButton *link_back;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *comboBox_schedule;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QTableView *table_class_schedule;
    QSpacerItem *horizontalSpacer_10;
    QWidget *page_3;
    QCommandLinkButton *link_back_2;
    QWidget *page_4;
    QCommandLinkButton *link_back_3;
    QWidget *page_5;
    QCommandLinkButton *link_back_4;
    QWidget *page_6;
    QCommandLinkButton *link_back_5;
    QWidget *page_7;
    QCommandLinkButton *link_back_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudentWindow)
    {
        if (StudentWindow->objectName().isEmpty())
            StudentWindow->setObjectName(QString::fromUtf8("StudentWindow"));
        StudentWindow->resize(800, 600);
        centralwidget = new QWidget(StudentWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        stackedWidget = new QStackedWidget(frame_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_3 = new QFrame(page);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
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
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_dormitory->sizePolicy().hasHeightForWidth());
        btn_dormitory->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_dormitory, 3, 3, 1, 1);

        btn_score = new QPushButton(frame);
        btn_score->setObjectName(QString::fromUtf8("btn_score"));
        sizePolicy1.setHeightForWidth(btn_score->sizePolicy().hasHeightForWidth());
        btn_score->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_score, 0, 3, 1, 2);

        btn_class_schedule = new QPushButton(frame);
        btn_class_schedule->setObjectName(QString::fromUtf8("btn_class_schedule"));
        sizePolicy1.setHeightForWidth(btn_class_schedule->sizePolicy().hasHeightForWidth());
        btn_class_schedule->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_class_schedule, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        btn_class_consition = new QPushButton(frame);
        btn_class_consition->setObjectName(QString::fromUtf8("btn_class_consition"));
        sizePolicy1.setHeightForWidth(btn_class_consition->sizePolicy().hasHeightForWidth());
        btn_class_consition->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_class_consition, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        btn_sel_imformation = new QPushButton(frame);
        btn_sel_imformation->setObjectName(QString::fromUtf8("btn_sel_imformation"));
        sizePolicy1.setHeightForWidth(btn_sel_imformation->sizePolicy().hasHeightForWidth());
        btn_sel_imformation->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_sel_imformation, 1, 1, 1, 1);

        btn_test_schedule = new QPushButton(frame);
        btn_test_schedule->setObjectName(QString::fromUtf8("btn_test_schedule"));
        sizePolicy1.setHeightForWidth(btn_test_schedule->sizePolicy().hasHeightForWidth());
        btn_test_schedule->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_test_schedule, 3, 1, 1, 1);


        verticalLayout_2->addWidget(frame);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_6 = new QFrame(page_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        sizePolicy.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy);
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        link_back = new QCommandLinkButton(frame_6);
        link_back->setObjectName(QString::fromUtf8("link_back"));
        sizePolicy.setHeightForWidth(link_back->sizePolicy().hasHeightForWidth());
        link_back->setSizePolicy(sizePolicy);
        link_back->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(link_back);

        horizontalSpacer_6 = new QSpacerItem(110, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label = new QLabel(frame_6);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(frame_6);

        frame_7 = new QFrame(page_2);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        sizePolicy.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy);
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        comboBox_schedule = new QComboBox(frame_7);
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->addItem(QString());
        comboBox_schedule->setObjectName(QString::fromUtf8("comboBox_schedule"));
        sizePolicy1.setHeightForWidth(comboBox_schedule->sizePolicy().hasHeightForWidth());
        comboBox_schedule->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(comboBox_schedule);


        verticalLayout->addWidget(frame_7);

        frame_5 = new QFrame(page_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        table_class_schedule = new QTableView(frame_5);
        table_class_schedule->setObjectName(QString::fromUtf8("table_class_schedule"));

        horizontalLayout_5->addWidget(table_class_schedule);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addWidget(frame_5);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        link_back_2 = new QCommandLinkButton(page_3);
        link_back_2->setObjectName(QString::fromUtf8("link_back_2"));
        link_back_2->setGeometry(QRect(670, 30, 71, 41));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        link_back_3 = new QCommandLinkButton(page_4);
        link_back_3->setObjectName(QString::fromUtf8("link_back_3"));
        link_back_3->setGeometry(QRect(680, 20, 71, 41));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        link_back_4 = new QCommandLinkButton(page_5);
        link_back_4->setObjectName(QString::fromUtf8("link_back_4"));
        link_back_4->setGeometry(QRect(670, 50, 71, 41));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        link_back_5 = new QCommandLinkButton(page_6);
        link_back_5->setObjectName(QString::fromUtf8("link_back_5"));
        link_back_5->setGeometry(QRect(700, 40, 71, 41));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        link_back_6 = new QCommandLinkButton(page_7);
        link_back_6->setObjectName(QString::fromUtf8("link_back_6"));
        link_back_6->setGeometry(QRect(670, 40, 71, 41));
        stackedWidget->addWidget(page_7);

        verticalLayout_3->addWidget(stackedWidget);


        gridLayout_2->addWidget(frame_2, 0, 0, 1, 1);

        StudentWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StudentWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        StudentWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StudentWindow->setStatusBar(statusbar);

        retranslateUi(StudentWindow);

        stackedWidget->setCurrentIndex(0);


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
        link_back->setText(QCoreApplication::translate("StudentWindow", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("StudentWindow", "\350\257\276\350\241\250\344\277\241\346\201\257", nullptr));
        comboBox_schedule->setItemText(0, QCoreApplication::translate("StudentWindow", "\347\254\254\344\270\200\345\221\250", nullptr));
        comboBox_schedule->setItemText(1, QCoreApplication::translate("StudentWindow", "\347\254\254\344\272\214\345\221\250", nullptr));
        comboBox_schedule->setItemText(2, QCoreApplication::translate("StudentWindow", "\347\254\254\344\270\211\345\221\250", nullptr));
        comboBox_schedule->setItemText(3, QCoreApplication::translate("StudentWindow", "\347\254\254\345\233\233\345\221\250", nullptr));
        comboBox_schedule->setItemText(4, QCoreApplication::translate("StudentWindow", "\347\254\254\344\272\224\345\221\250", nullptr));
        comboBox_schedule->setItemText(5, QCoreApplication::translate("StudentWindow", "\347\254\254\345\205\255\345\221\250", nullptr));
        comboBox_schedule->setItemText(6, QCoreApplication::translate("StudentWindow", "\347\254\254\344\270\203\345\221\250", nullptr));
        comboBox_schedule->setItemText(7, QCoreApplication::translate("StudentWindow", "\347\254\254\345\205\253\345\221\250", nullptr));
        comboBox_schedule->setItemText(8, QCoreApplication::translate("StudentWindow", "\347\254\254\344\271\235\345\221\250", nullptr));
        comboBox_schedule->setItemText(9, QCoreApplication::translate("StudentWindow", "\347\254\254\345\215\201\345\221\250", nullptr));
        comboBox_schedule->setItemText(10, QCoreApplication::translate("StudentWindow", "\347\254\254\345\215\201\344\270\200\345\221\250", nullptr));
        comboBox_schedule->setItemText(11, QCoreApplication::translate("StudentWindow", "\347\254\254\345\215\201\344\272\214\345\221\250", nullptr));
        comboBox_schedule->setItemText(12, QCoreApplication::translate("StudentWindow", "\347\254\254\345\215\201\344\270\211\345\221\250", nullptr));
        comboBox_schedule->setItemText(13, QCoreApplication::translate("StudentWindow", "\347\254\254\345\215\201\345\233\233\345\221\250", nullptr));
        comboBox_schedule->setItemText(14, QCoreApplication::translate("StudentWindow", "\347\254\254\345\215\201\344\272\224\345\221\250", nullptr));
        comboBox_schedule->setItemText(15, QCoreApplication::translate("StudentWindow", "\347\254\254\345\215\201\345\205\255\345\221\250", nullptr));
        comboBox_schedule->setItemText(16, QCoreApplication::translate("StudentWindow", "\347\254\254\345\215\201\344\270\203\345\221\250", nullptr));
        comboBox_schedule->setItemText(17, QCoreApplication::translate("StudentWindow", "\347\254\254\345\215\201\345\205\253\345\221\250", nullptr));

        link_back_2->setText(QCoreApplication::translate("StudentWindow", "\350\277\224\345\233\236", nullptr));
        link_back_3->setText(QCoreApplication::translate("StudentWindow", "\350\277\224\345\233\236", nullptr));
        link_back_4->setText(QCoreApplication::translate("StudentWindow", "\350\277\224\345\233\236", nullptr));
        link_back_5->setText(QCoreApplication::translate("StudentWindow", "\350\277\224\345\233\236", nullptr));
        link_back_6->setText(QCoreApplication::translate("StudentWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentWindow: public Ui_StudentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWINDOW_H
