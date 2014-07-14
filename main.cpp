#include <QApplication>

#include "searchinputbox.h"

#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":/stylesheets/stylesheet.qss");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        a.setStyleSheet(file.readAll());
        file.close();
    }

    SearchInputBox *inputBox = new SearchInputBox;
    inputBox->setMinimumHeight(30);
    inputBox->setMinimumWidth(200);
    inputBox->show();
    return a.exec();
}
