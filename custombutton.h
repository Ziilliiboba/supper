#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H
#include <QPushButton>
#include <QMouseEvent>

class customButton : public QPushButton
{
    Q_OBJECT
public:
    customButton(QWidget* wgt = 0);
    virtual ~customButton(){};
signals:
    void rclicked();
protected:
    void mouseReleaseEvent(QMouseEvent *event) override
    {
        if(event->button() == Qt::RightButton)
        {
            emit rclicked();
        }
    }
};

#endif // CUSTOMBUTTON_H
