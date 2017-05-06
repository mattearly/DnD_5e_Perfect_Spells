#pragma once
#include <string>
#include <vector>
#include <QString>
struct spell {
    std::string Name;
    std::vector<std::string> Classes;
    int Level;
    std::string School;
    bool Ritual;
    std::string CastingTime;
    std::string Range;
    std::vector<std::string> Components;
    std::string Material;
    std::string Duration;
}
