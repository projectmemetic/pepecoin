#include "proofofmeme.h"
#include "ui_proofofmeme.h"

#include "bitcoinunits.h"
#include "guiutil.h"
#include "guiconstants.h"

#include <QScrollArea>
#include <QScroller>

ProofOfMeme::ProofOfMeme(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProofOfMeme)
{
    ui->setupUi(this);

    
}

ProofOfMeme::~ProofOfMeme()
{
    delete ui;
}


