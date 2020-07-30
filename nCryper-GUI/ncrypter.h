#ifndef NCRYPTER_H
#define NCRYPTER_H

#include <QMainWindow>
#include <QGraphicsOpacityEffect>
#include <QGraphicsBlurEffect>
#include <QString>
#include <QChar>

QT_BEGIN_NAMESPACE
namespace Ui { class ncrypter; }
QT_END_NAMESPACE

class ncrypter : public QMainWindow
{
    Q_OBJECT

public:
    ncrypter(QWidget *parent = nullptr);
    ~ncrypter();

private:
    Ui::ncrypter *ui;

private slots:
    QString encrypt(QString text);
    QString decrypt(QString text);

    void on_encrypt_clicked();
    void on_decrypt_clicked();
};
#endif // NCRYPTER_H
