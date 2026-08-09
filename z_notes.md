
****************************

09-08-2026:
Returned after a week.

Inventory needs more functionality:
	*Needs to implement "drop" function
	*"Drop" would require the generic room-container to be fully implemented first
	*Should take "Current container" as arg, so that calling the function inside e.g. a gold chest would 
	 transfer the item to gold chest instead of generic room container

Equipment should be implemented. Current idea:
	*Equipment slots "Main hand", "Helmet" and "Body armour".
	*Each slot is a uniqueptr constructed as nullptr
	*Inventory (or equipment?) should have "Equip" method, that moves ownership from inventory to equipment slot
	*Likewise implement unequip
	*Implement check if slot is already populated before move
	*Implement a way to transfer the potential skill gained from main hand to vector<skills>

Either before or after ^these, i should do the battle mechanic.
If applying the other changes AFTER battlemechanic, would i need to refactor battlemechanic?:
	*If yes: fix them first
	*If no: go ahead with battlemechanic

After all of this, random loot on enemies should be implemented.
Consider:
	*Dead enemies should have their inventory vectors moved onto a "Corpse" container, so it can be looted
	 without having to keep the (planned) enemy logic in memory
	*Random loot would have to be defined in EnemyData
	*To make equipment easier, i could roll a random chance of equipment from the same equipment pool equally
	 for any enemy, disregarding whether a specific enemy should hold that equipment (e.g. rat + sword)

Rooms will eventually need random-chance of containers as well:
	*Odds / available options of random rewards as gold chest should be tied to room type
	*Would have to be defined in RoomData, mby a bit janky

****************************