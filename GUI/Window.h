#ifndef CE_VS_ZOMBIES_ESTUDIANTES_WINDOW_H
#define CE_VS_ZOMBIES_ESTUDIANTES_WINDOW_H
#include <QtGui>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QMainWindow>
#include <QPushButton>

using namespace std;

namespace Ui{
    class Window;
}

class Window : public QMainWindow {
    Q_OBJECT

private:
    QPushButton *startButton;

private slots:
    void handleButton();

public:
    explicit Window(QWidget *parent = 0);
};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_WINDOW_H