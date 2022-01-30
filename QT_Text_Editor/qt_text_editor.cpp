#include "qt_text_editor.h"
#include "ui_qt_text_editor.h"

QT_Text_Editor::QT_Text_Editor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QT_Text_Editor)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

QT_Text_Editor::~QT_Text_Editor()
{
    delete ui;
}

// Bold the selected text
void QT_Text_Editor::on_actionBold_triggered()
{
    ui -> textEdit -> setFontWeight(QFont::Bold);
}

// Unbold the selected text
void QT_Text_Editor::on_actionUnbold_triggered()
{
    ui -> textEdit -> setFontWeight(QFont::Normal);
}

// Subscript the selected text
// Delete the selectes text, subscript it witht HTML tags and then insert
// in the remaining text.
void QT_Text_Editor::on_actionSubScript_triggered()
{
    QString text_selected = ui -> textEdit -> textCursor().selectedText();
    qint32 start_index = ui -> textEdit -> textCursor().selectionStart();

    ui -> textEdit -> textCursor().removeSelectedText();
    QString text_left = ui -> textEdit -> toPlainText();
    text_left.insert(start_index, "<sub>" + text_selected + "</sub>");
    ui -> textEdit -> setText(text_left);
}

// Subscript the selected text
// Delete the selectes text, superscript it witht HTML tags and then insert
// in the remaining text.
void QT_Text_Editor::on_actionSuperScript_triggered()
{
    QString text_selected = ui -> textEdit -> textCursor().selectedText();
    qint32 start_index = ui -> textEdit -> textCursor().selectionStart();

    ui -> textEdit -> textCursor().removeSelectedText();
    QString text_left = ui -> textEdit -> toPlainText();
    text_left.insert(start_index, "<sup>" + text_selected + "</sup>");
    ui -> textEdit -> setText(text_left);
}

//Opens the Resume in the default PDF application of the Desktop.
void QT_Text_Editor::on_actionResume_triggered()
{
    QDesktopServices::openUrl(QUrl("/home/mudi/acads/QT_Text_Editor/resume.pdf"));
}

