#ifndef SBUTTON_H
#define SBUTTON_H
#include <QLabel>


class SButton : public QLabel
{
    Q_OBJECT
public:
    SButton(QWidget* pwgt = 0);
    virtual ~SButton() {};

};

#endif // SBUTTON_H
