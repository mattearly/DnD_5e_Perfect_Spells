# D&D 5e Perfect Spells

##### Project 

* Curate all [D&D Fifth Edition Spells](https://media.wizards.com/2015/downloads/dnd/DnD_SpellLists_1.01.pdf ) into [JSON](https://www.w3schools.com/js/js_json_intro.asp) format.

##### Spell Data File

* [dnd_5e_spells.json](spellData/dnd_5e_spells.json)

##### Example JSON Data

````
{
  "allSpells": [
    {
      "name": "Acid Splash",
      "classes": "Sorcerer, Wizard",
      "level": 0,
      "school": "Conjuration",
      "ritual": false,
      "castingTime": "action",
      "Range": "60ft",
      "components": "Somatic, Verbal",
      "material": null,
      "duration": "Instantaneous",
      "description": "You hurl a bubble of acid. Choose one creature within range, or choose two creatures within range that are within 5 feet of each other. A target must succeed on a Dexterity saving throw or take 1d6 acid damage. This spells damage increases by 1d6 when you reach 5th Level (2d6), 11th level (3d6) and 17th level (4d6).",
      "source": "Player's Handbook",
      "page": 211
    },
    {
      "name": "Aid",
      "classes": "Paladin, Cleric",
      "level": 2,
      "school": "Abjuration",
      "ritual": false,
      "castingTime": "action",
      "Range": "30 feet",
      "components": "Somatic, Verbal, Material",
      "material": "a tiny strip of white cloth",
      "duration": "8 hours",
      "description": "Your spell bolsters your allies with toughness and resolve. Choose up to three creatures within range. Each target's hit point maximum and current hit points increase by 5 for the duration. At Higher Levels: When you cast this spell using a spell slot of 3rd level or higher, a target's hit points increase by an additional 5 for each slot level above 2nd.",
      "source": "Player's Handbook",
      "page": 211
    },
    ...
}
````

##### Halp

* Any assistance curating this list would be appreciated.
* Note that the website in `docs/` doesn't do much yet. If someone wants to work on it that'd be cool, I probably won't get time to.

##### License

* These spells are from the [Wizards of the Coast Dungeons & Dragons](http://dnd.wizards.com/) 5th Edition books unless otherwise mentioned on the spell source.


        

