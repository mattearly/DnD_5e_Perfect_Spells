#include "jsonspellparser.h"
#include "ui_jsonspellparser.h"
#include <QDebug>

jsonspellparser::jsonspellparser(QWidget *parent) : QWidget(parent), ui(new Ui::jsonspellparser) {
    ui->setupUi(this);

}

jsonspellparser::~jsonspellparser() { delete ui; }



