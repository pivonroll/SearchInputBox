#ifndef SEARCHINPUTBOX_H
#define SEARCHINPUTBOX_H

#include <QLineEdit>

QT_BEGIN_NAMESPACE
class QPushButton;
QT_END_NAMESPACE

class SearchInputBox : public QLineEdit
{
    Q_OBJECT
public:
    SearchInputBox(QWidget *parent = 0);

    void resizeEvent(QResizeEvent *event);
    void layoutSearchButton();
private:
     QPushButton *m_searchButton;
};

#endif // SEARCHINPUTBOX_H
