#pragma once

#include <vector>
#include <QString>

struct spell {

    QString Name;

    std::vector<QString> Classes;

    int Level;

    QString School;

    bool Ritual;

    QString CastingTime;

    QString Range;

    std::vector<QString> Components;

    QString Material;

    QString Duration;

};
