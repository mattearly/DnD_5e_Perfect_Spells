#ifndef JSONSPELLPARSER_H
#define JSONSPELLPARSER_H

#include <QWidget>

namespace Ui {
class jsonspellparser;
}

class jsonspellparser : public QWidget
{
    Q_OBJECT

public:
    explicit jsonspellparser(QWidget *parent = 0);
    ~jsonspellparser();

private:
    Ui::jsonspellparser *ui;
};

#endif // JSONSPELLPARSER_H
