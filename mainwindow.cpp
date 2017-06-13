#include "mainwindow.h"
#include<QPushButton>
#include<QWidget>
#include<QLineEdit>
#include<QLabel>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<string>
#include<qstring.h>
#include"Question.h"
#include"Print.h"
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    right=0;
    wrong=0;

    QLabel *q=new QLabel("题目");
    QLineEdit *le=new QLineEdit;
    QPushButton *start=new QPushButton("出题");
    QPushButton *end=new QPushButton("结束");
    QPushButton *submit=new QPushButton("提交");
    QLabel *first=new QLabel;

    connect(start,SIGNAL(clicked(bool)),this,SLOT(get()));
    connect(submit,SIGNAL(clicked(bool)),this,SLOT(sub(bool)));
    connect(this,SIGNAL(text(QString)),q,SLOT(setText(QString)));



    QVBoxLayout *top=new QVBoxLayout;
    top->addWidget(q);
    top->addWidget(le);
    QHBoxLayout *mid=new QHBoxLayout;
    mid->addWidget(start);
    mid->addWidget(submit);
    mid->addWidget(end);
    QVBoxLayout *ma=new QVBoxLayout;
    ma->addLayout(top);
    ma->addLayout(mid);
    ma->addWidget(first);
    QWidget  *widget = new QWidget(this);
    widget->setLayout(ma);
    this->setCentralWidget(widget);

}


MainWindow::~MainWindow()
{

}
void MainWindow::putQuestion(){

}
void MainWindow::get(){
    string ques=qu.generateExpression();
    string ans=qu.getAnswer();
    emit text(QString::fromStdString(ques+"="+ans));
}
void MainWindow::sub(bool b){
    QString an=le->text();
    string ans("wrong");
    //cout<<"wrong";
    //emit text(QString::fromStdString(ans));



}
