# Rogue-like dungeon crawler (console game)
### Small turn based console game, featuring random room selection from weighted pools 
###### ^ Very much a work in progress, will update this as features gets added

This is my first shot at C++, besides some minor single-file exercises.  
Primary goal is familiarity with C++ as a whole.    

### Currently features:  
* Player-object initalization
* Random rooms from a weighted pool
* Random room-specific enemies from a weighted pool
* Logic for player inventory and items

### What is planned:  
* A proper Battle Mechanic, with the options to either attack or open inventory / use item
* Create more player logic, primarily attack logic
* Create enemy logic besides the creation
* Random encounters as item containers
* Random loot and equipment on enemies, will also utilize my weighted pool template
* A ration based resting system to recover life and energy

### Known issues:  
* My entire project tree structure only exists in my SmartPtrs.vcxproj.filters file, which is not intended
* Too many tiny files, where many shares the same responsibilities, which increases header-file chaos
* I believe i have a ton of unnecessary copies spread across the project - should be refractored once the core loop is done

### Difficulties i've had so far:  
* Header-files took a good chunk of my first day to understand correctly
* Weighted-pool template was a painnn to create, but turned out better than i could have hoped for
* Still figuring out the project structure - i am still a bit behind in regards to clean structure and design 

