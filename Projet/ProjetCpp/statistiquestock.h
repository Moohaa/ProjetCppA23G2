#ifndef STATISTIQUESTOCK_H
#define STATISTIQUESTOCK_H


#include <QMainWindow>

namespace Ui {
class statistiquestock;
}

class statistiquestock : public QMainWindow
{
    Q_OBJECT

public:
    explicit statistiquestock(QWidget *parent = nullptr);
    ~statistiquestock();

private:
    Ui::statistiquestock *ui;
};
#endif // STATISTIQUESTOCK_H
