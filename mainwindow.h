#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"Print.h"
class QLabel;
class QLineEdit;
class QPushButton;

#include"Question.h"
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QLabel *q;//题目输出
    QLineEdit *le;//答案输入
    QPushButton *start;//出题按钮
    QPushButton *end;//结束按钮
    QPushButton *submit;//提交答案按钮
    QLabel *first;//下面的提示输出




    char* language; //语言
    int total;//题目数
    int right;//正确数
    int wrong;//错误数
    Print out;
    Question qu;
private slots:
    void putQuestion();
    void get();
    void sub(bool);
signals:
    void text(QString);

};

#endif // MAINWINDOW_H
