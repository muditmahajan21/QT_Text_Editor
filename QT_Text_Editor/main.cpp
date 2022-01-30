#include "qt_text_editor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QT_Text_Editor w;
    w.show();
    return a.exec();
}
