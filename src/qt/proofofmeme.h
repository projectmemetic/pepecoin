#ifndef PROOFOFMEME_H
#define PROOFOFMEME_H

#include <QWidget>


namespace Ui {
    class ProofOfMeme;
}

/** Proof of meme page widget */
class ProofOfMeme : public QWidget
{
    Q_OBJECT

public:
    explicit ProofOfMeme(QWidget *parent = 0);
    ~ProofOfMeme();
    QString fileName;

public slots:

signals:

private:
    Ui::ProofOfMeme *ui;
    void noMemeSelected();

private slots:
    void on_filePushButton_clicked();
    void on_createPushButton_clicked();
    void on_checkButton_clicked();
    void on_checkTxButton_clicked();
};

#endif // PROOFOFMEME_H
