#include "jsonspellparser.h"
#include "ui_jsonspellparser.h"

jsonspellparser::jsonspellparser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jsonspellparser)
{
    ui->setupUi(this);
}

jsonspellparser::~jsonspellparser()
{
    delete ui;
}
