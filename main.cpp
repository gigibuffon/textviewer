#include "textviewer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextViewer w;
    w.show();

    return a.exec();
}
