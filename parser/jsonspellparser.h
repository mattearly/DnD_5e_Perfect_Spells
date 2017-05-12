#pragma once
#ifndef JSONSPELLPARSER_H
#define JSONSPELLPARSER_H

#include <QWidget>
#include "spellstruct.h"

namespace Ui {
class jsonspellparser;
}

class jsonspellparser : public QWidget
{
    Q_OBJECT

public:
    explicit jsonspellparser(QWidget *parent = 0);
    ~jsonspellparser();

    std::vector<spell> fullSpellList;
    spell tmpSpell;

private:
    Ui::jsonspellparser *ui;
};

#endif // JSONSPELLPARSER_H
