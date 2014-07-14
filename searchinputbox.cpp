#include "searchinputbox.h"

#include <QPushButton>

SearchInputBox::SearchInputBox(QWidget *parent)
    : QLineEdit(parent)
{
    m_searchButton = new QPushButton(this);

//    QPixmap pixmap(":/icons/index.jpg");
//    QIcon buttonIcon(pixmap);
    m_searchButton->setObjectName("SearchInputBoxButton");
//    m_searchButton->setIcon(buttonIcon);
//    m_searchButton->setIconSize(QSize(16,16));
    connect(m_searchButton, SIGNAL(clicked()), this, SIGNAL(returnPressed()));
}

void SearchInputBox::resizeEvent(QResizeEvent* event)
{
    QLineEdit::resizeEvent(event);
    this->layoutSearchButton();
}

void SearchInputBox::layoutSearchButton()
{
    this->ensurePolished();
    int height = this->height() - 2;

    int x = this->rect().left();
    int y = 1;
    m_searchButton->setGeometry(x, y, height, height);

    int right, top, bottom;
    this->getTextMargins(0, &top, &right, &bottom);
    this->setTextMargins(2 + height, top, right, bottom);
//    m_searchButton->setIconSize(QSize(m_searchButton->width(), m_searchButton->height()));
}
