#include <mainwindow.h>
#include <Constants.h>
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName(SSw::APP);

    SSw::MainWindow window;
    window.show();
    window.updateView();
    return a.exec();
}
