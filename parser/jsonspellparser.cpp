#include "jsonspellparser.h"
#include "ui_jsonspellparser.h"
#include <fstream>
#include <QDebug>
#include <QString>
#include <string>

jsonspellparser::jsonspellparser(QWidget *parent) : QWidget(parent), ui(new Ui::jsonspellparser) {
    ui->setupUi(this);
    std::string fileloc = "../../spells/dnd_5e_spells.json";
    pullSpellListfromJSON(fileloc);


}

jsonspellparser::~jsonspellparser() { delete ui; }


void jsonspellparser::pullSpellListfromJSON(const std::string &filelocation) {
    std::ifstream in(filelocation);
    if (!(in.is_open())) {
        qDebug("Could not open input file: " + filelocation);
        QApplication::quit();
    } else {
        qDebug("yeah");
    }

}




