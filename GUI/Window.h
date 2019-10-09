#ifndef CE_VS_ZOMBIES_ESTUDIANTES_WINDOW_H
#define CE_VS_ZOMBIES_ESTUDIANTES_WINDOW_H
#include <QtGui>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QPushButton>

using namespace std;

class Window {
    int width, length;

public:
Window(int argc, char *argv[], int width, int length, string title, QString imageURL);
};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_WINDOW_H
