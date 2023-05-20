private _category = format ["Bose Mods %1", localize LSTRING(DisplayName)];

[
	QGVAR(timePerBackpack), "SLIDER",
	LSTRING(timePerBackpack),
	_category,
	[0.25, 10, 1.5, 2],
	1
] call CBA_fnc_addSetting;

[
	QGVAR(timePerWeapon), "SLIDER",
	LSTRING(timePerWeapon),
	_category,
	[0.25, 10, 1.5, 2],
	1
] call CBA_fnc_addSetting;

[
	QGVAR(timePerItem), "SLIDER",
	LSTRING(timePerItem),
	_category,
	[0.1, 10, 0.25, 2],
	1
] call CBA_fnc_addSetting;

[
	QGVAR(timePerOther), "SLIDER",
	LSTRING(timePerOther),
	_category,
	[0.25, 10, 1, 2],
	1
] call CBA_fnc_addSetting;
