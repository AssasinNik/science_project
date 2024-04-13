#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    ui->lineEdit->setEchoMode(QLineEdit::Password);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
{
    close();
}


void Login::on_pushButton_3_clicked()
{
    showMinimized();
}

void Login::on_lineEdit_cursorPositionChanged(int, int){

}

void Login::on_pushButton_4_clicked()
{
    auto *mainWindow = new MainWindow();  // Создать окно логина
    mainWindow->setAttribute(Qt::WA_DeleteOnClose); // Установить атрибут для автоматического удаления при закрытии
    mainWindow->show();
    this->close(); // Скрываем текущее окно вместо закрытия
}

