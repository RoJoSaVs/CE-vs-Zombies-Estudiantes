#include "gameWindow.h"

gameWindow::gameWindow(QWidget *parent) {
    wavesButton = new QPushButton("", this);
    connect(wavesButton, SIGNAL (released()), this, SLOT (handleButton()));
    wavesButton->setGeometry(647, 577, 227,46);
    wavesButton->setFlat(true);
    wavesButton->setStyleSheet("background-image: url(/home/tomas/CLionProjects/CE-vs-Zombies-Estudiantes/Media/gameWindowWavesButton.png)");

}

void gameWindow::handleButton() {

}
