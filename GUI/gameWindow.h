#include <QtGui>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QMainWindow>
#include <QPushButton>
#ifndef CE_VS_ZOMBIES_ESTUDIANTES_GAMEWINDOW_H
#define CE_VS_ZOMBIES_ESTUDIANTES_GAMEWINDOW_H

namespace Ui{
    class gameWindow;
}

class gameWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit gameWindow(QWidget *parent = 0);

};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_GAMEWINDOW_H
