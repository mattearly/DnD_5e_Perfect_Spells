# D&D 5e Perfect Spells


## Goal 

* Input all D&D Fifth Edition Spells into JSON format.
    * [Java Script Object Notation](https://www.w3schools.com/js/js_json_intro.asp)
    * Aim for Quality

## JSON Spell Data File

* [dnd_5e_spells.json](spellData/dnd_5e_spells.json)
* Grab the data via git clone
    * `git clone git@github.com:bytePro17124/DnD_5e_Perfect_Spells.git`
    * Everything else is just whatever, I was messing around with options for displaying the list


### Halp

* Feel free enter in more spells and fix typos and errors. While I try to make these prefect, there are bound to be mistakes.
    * Add spells in the exact format as the others.
        * Go off the [Player's Handbook](http://dnd.wizards.com/products/tabletop-games/rpg-products/rpg_playershandbook) lists on pages 207-211 for which classes can use the spell. 

### License

* These spells are from the Wizards of the Coast books unless otherwise mentioned on the spell, and thus owned by them as far as I know.
    * [Offical Dungeons and Dragons Link](http://dnd.wizards.com/)
    
### ToDo

1. Build parser (this will be ultra handy) : In Progress
   * typable or combobox search fields that slim down the selection as you type
        * fields: Name, Classes, Level, School, Casting Time, Duration, Ritual, Components, Material
   * interface options to consider
        * Qt
        * Webpage
        * Android
        * IOS
        * SDL2 Library
        * Visual Studio build options
        * other options?
2. Finish JSON spell list
3. vector graphic of open spellbook for webpage
4. Work on the webpage for this tool/site/repo
    * work on [this index.html file](index.html) and the files it links too. Here is the [Live Website URL](https://bytePro17124.github.io/DnD_5e_Perfect_Spells)  


### Example DATA: 

````
{
  "allSpells": [
    {
      "name": "Acid Splash",
      "classes": [
        "Sorcerer",
        "Wizard"
      ],
      "level": 0,
      "school": "Conjuration",
      "ritual": false,
      "castingTime": "action",
      "Range": "60ft",
      "components": [
        "Somatic",
        "Verbal"
      ],
      "material": null,
      "duration": "Instantaneous",
      "description": "You hurl a bubble of acid. Choose one creature within range, or choose two creatures within range that are within 5 feet of each other. A target must succeed on a Dexterity saving throw or take 1d6 acid damage. This spells damage increases by 1d6 when you reach 5th Level (2d6), 11th level (3d6) and 17th level (4d6).",
      "source": "Player's Handbook",
      "page": 211
    },
    {
      "name": "Aid",
      "classes": [
        "Paladin",
        "Cleric"
      ],
      "level": 2,
      "school": "Abjuration",
      "ritual": false,
      "castingTime": "action",
      "Range": "30 feet",
      "components": [
        "Somatic",
        "Verbal",
        "Material"
      ],
      "material": "a tiny strip of white cloth",
      "duration": "8 hours",
      "description": "Your spell bolsters your allies with toughness and resolve. Choose up to three creatures within range. Each target's hit point maximum and current hit points increase by 5 for the duration. At Higher Levels: When you cast this spell using a spell slot of 3rd level or higher, a target's hit points increase by an additional 5 for each slot level above 2nd.",
      "source": "Player's Handbook",
      "page": 211
    },
    ...
}
````
        

