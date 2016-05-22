s_player_wiki = -1;
waitUntil {(!isNil "PVDZE_plr_LoginRecord") || (!isNil "PVDZ_plr_LoginRecord")};	
	showwiki = profilenamespace getvariable['showwiki',true];
	diag_log format["SHOWWIKI = %1",showwiki];

	if (showwiki) then {
		diag_log "IF SHOWWIKI ...";
		diag_log format["s_player_wiki = %1",s_player_wiki];

	if (s_player_wiki < 0) then {
		diag_log "S_PLAYER_WIKI < 0";
		s_player_wiki = player addaction ["wiki","scripts\wiki\showwiki.sqf",[],-100,false, true];
		diag_log format["s_player_wiki = %1",s_player_wiki];

		};
	} else {
		if (s_player_wiki > -1) then {
			diag_log "S_PLAYER_WIKI > 0";
			player removeaction s_player_wiki;
			s_player_wiki = -1;
			};
	};
	
	