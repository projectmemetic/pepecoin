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

public slots:

signals:

private:
    Ui::ProofOfMeme *ui;

private slots:
    
};

#endif // PROOFOFMEME_H
