21-10-2026:
quickNote

I already have the rollable pools defined in xData files, so i could just pass the entire pool
instead of walking the objects each time. Probably the quickest solution to unnecessary work. 

I expanded the previous test to include moving items from inventory -> roomContainer - it works.
The BattleMechanic is being sketched out. Wasn't sure what to implement first (attack logic, rolls ect), so
i will just implement what i need for each step of BattleMechanic in that order.

Refined the Player object with ActHp (current hp) and exposed a TakeDamage api. Next step is a simple 
"Attack" method, which should interact with the opponents "ActHp" value and vice versa. 

For the attack logic prototype, it should include random rolls aggregated from stats, gear modifiers and 
skill modifiers. Probably the thing i'm most exited to implement, so will prolly take a while, when factoring
in the need to refine "Skills", "Equipment" and dmg calculations (crit? speed? Weaknesses / buffs?)




****************************

18-10-2026:
Been a while

Made a unit test for picking up room-container loot and moving the unique_ptr to inventory. Works!
	*RoomContainer should really be doumbed down, player inventory should hold all logic instead.
	*Next step is prolly to add random chance for extra loot, e.g. gold chest mechanic.

It is basically ready for implementation into a gameplay loop as is.
Should really focus on enemies and battle mechanic next - inventory and loot will work. 

Just noticed that instead of creating the weighted pools from scratch in every factory, i should let them be
created once the first time. This would require a unique collection for each type of roll (e.g. enemy, room,
loot ect). If this is done once the first time the collections are created, they can be reused every time 
afterwards. 

****************************

04-09-2026:
Returned after holidays.

Room inventory is more or less ready for the further implementation of Inventory.
Loot-factory basic idea is more or less done, but should include container-specific generation later.
 - Should also include generic common loot besides the gear drops (which shouldn't be a guarantee).

I think it's time to finally orchestrate the systems into a functional gameplay loop. 

Systems-planning below is still relevant though!!!

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