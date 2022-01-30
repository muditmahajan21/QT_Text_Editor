#ifndef QT_TEXT_EDITOR_H
#define QT_TEXT_EDITOR_H

#include <QMainWindow>
#include <QDesktopServices>
#include <QFile>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class QT_Text_Editor; }
QT_END_NAMESPACE

class QT_Text_Editor : public QMainWindow
{
    Q_OBJECT

public:
    QT_Text_Editor(QWidget *parent = nullptr);
    ~QT_Text_Editor();

private slots:
    void on_actionBold_triggered();

    void on_actionUnbold_triggered();

    void on_actionSubScript_triggered();

    void on_actionSuperScript_triggered();

    void on_actionResume_triggered();

private:
    Ui::QT_Text_Editor *ui;
};
#endif // QT_TEXT_EDITOR_H
