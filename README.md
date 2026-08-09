# Rogue-like dungeon crawler (console game)
### Small turn based console game, featuring random room selection from weighted pools, inventory system and the foundation of loot system
###### ^ Very much a work in progress, will update this as features gets added

This is my first shot at C++, besides some minor single-file exercises.  
Primary goal is familiarity with C++ as a whole.    

### Currently features:  
* Player-object initalization
* Random rooms from a weighted pool
* Random room-specific enemies from a weighted pool
* Logic for player inventory and items
* Object oriented principles

### What is planned:  

* Player attack logic
* A proper Battle Mechanic, with the options to either attack or open inventory / use item
* Create enemy logic besides the creation
* Random encounters as item containers
* Random loot and equipment on enemies, will also utilize my weighted pool template
* A ration based resting system to recover life and energy

### Known issues:  
* The project tree structure only exists in my SmartPtrs.vcxproj.filters file, which is not intended
* Header file includes are too 'chaotic'
