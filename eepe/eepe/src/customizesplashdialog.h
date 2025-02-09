#ifndef CUSTOMIZESPLASHDIALOG_H
#define CUSTOMIZESPLASHDIALOG_H

#include <QtGui>
#include <QDialog>

#include <stdint.h>

namespace Ui {
    class customizeSplashDialog;
}

class customizeSplashDialog : public QDialog
{
    Q_OBJECT

public:
    explicit customizeSplashDialog(QWidget *parent = 0);
    ~customizeSplashDialog();

private slots:
    void on_loadFromHexButton_clicked();

    void on_loadFromImageButton_clicked();

    void on_saveToHexButton_clicked();

    void on_invertColorButton_clicked();


private:
    Ui::customizeSplashDialog *ui;
		uint32_t SplashType ;
};

#endif // CUSTOMIZESPLASHDIALOG_H
