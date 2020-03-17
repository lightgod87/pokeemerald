LittlerootTown_Debug::
	msgbox LittlerootTown_Debug_Text_0
	givemon SPECIES_MEWTWO, 70, ITEM_MEWTWONITE_Y
	msgbox LittlerootTown_Debug_Text_1
	warp MAP_ROUTE120, 255, 16, 15
	waitstate
	release
	end


LittlerootTown_Debug_Text_0:
	.string "This is for you!$"

LittlerootTown_Debug_Text_1:
	.string "Also, please go here!$"
