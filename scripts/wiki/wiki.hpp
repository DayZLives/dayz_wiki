class wiki
{
    idd = -1;
    movingenable = true;
	duration = 3;
    onLoad = "((_this select 0) displayCtrl 1001) htmlload format['scripts\wiki\wiki_page%1.html',wikipage];";
       
    
    class Controls
		{
			class iare_background: wikiRscText
			{
				idc = 1000;
				x = 0.157612 * safezoneW + safezoneX;
				y = 0.162547 * safezoneH + safezoneY;
				w = 0.686913 * safezoneW;
				h = 0.679019 * safezoneH;
				colorBackground[] = {0,0,0,0.3};
			};
			class iarebutton_toggle: wikiRscShortcutButton
			{
				idc = 1700;
				text = "Toggle Wiki on Scroll Wheel";
				action = "profilenamespace setvariable['showwiki',!showwiki];execvm 'scripts\wiki\wiki_init.sqf';";
				x = 0.161529 * safezoneW + safezoneX;
				y = 0.759914 * safezoneH + safezoneY;
				w = 0.333606 * safezoneW;
				h = 0.0785124 * safezoneH;
			};
			class iare_maindisplay: wikiRscHtml
			{
				idc = 1001;
				filename = "";
				colorBackground[] = {0, 0, 0, .2};
				x = 0.165411 * safezoneW + safezoneX;
				y = 0.169986 * safezoneH + safezoneY;
				w = 0.50207 * safezoneW;
				h = 0.558917 * safezoneH;
				
			};
			class iare_page1: wikiRscShortcutButton
			{
				idc = 1701;
				text = "Server Info";
				action = "wikipage = 1;closedialog 0; createdialog 'wiki';";
				x = 0.678603 * safezoneW + safezoneX;
				y = 0.17105 * safezoneH + safezoneY;
				w = 0.160463 * safezoneW;
				h = 0.0774495 * safezoneH;
			};
			class iare_page2: wikiRscShortcutButton
			{
				idc = 1702;
				text = "Features";
				action = "wikipage = 2;closedialog 0; createdialog 'wiki';";

				x = 0.678604 * safezoneW + safezoneX;
				y = 0.258202 * safezoneH + safezoneY;
				w = 0.160463 * safezoneW;
				h = 0.0774495 * safezoneH;
			};
			class iarepage3: wikiRscShortcutButton
			{
				idc = 1703;
				text = "Missions";
				action = "wikipage = 3;closedialog 0; createdialog 'wiki';";

				x = 0.678603 * safezoneW + safezoneX;
				y = 0.347483 * safezoneH + safezoneY;
				w = 0.160463 * safezoneW;
				h = 0.0774495 * safezoneH;
			};
			class iarepage4: wikiRscShortcutButton
			{
				idc = 1704;
				text = "Private Skins";
				action = "wikipage = 4;closedialog 0; createdialog 'wiki';";
                
				x = 0.680162 * safezoneW + safezoneX;
				y = 0.443138 * safezoneH + safezoneY;
				w = 0.160463 * safezoneW;
				h = 0.0774495 * safezoneH;
			};
			class iare_close: wikiRscShortcutButton
			{
				idc = 1705;
				text = "Close Wiki";
				action = "closedialog 0";
				x = 0.677044 * safezoneW + safezoneX;
				y = 0.753488 * safezoneH + safezoneY;
				w = 0.160463 * safezoneW;
				h = 0.0774495 * safezoneH;
			};


	};
};

/*
$[1.03,[[0,0,1,1],0.03125,0.05],[1000,"",[1,"",["0.157612 * safezoneW + safezoneX","0.162547 * safezoneH + safezoneY","0.686913 * safezoneW","0.679019 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.3],[-1,-1,-1,-1],""],[]],[1700,"",[1,"Toggle Wiki on Scroll Wheel/H key",["0.161529 * safezoneW + safezoneX","0.759914 * safezoneH + safezoneY","0.333606 * safezoneW","0.0785124 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],""],[]],[1001,"",[1,"Text Here",["0.165411 * safezoneW + safezoneX","0.169986 * safezoneH + safezoneY","0.50207 * safezoneW","0.558917 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],""],[]],[1701,"",[1,"Server Info",["0.678603 * safezoneW + safezoneX","0.17105 * safezoneH + safezoneY","0.160463 * safezoneW","0.0774495 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],""],[]],[1702,"",[1,"Features",["0.678604 * safezoneW + safezoneX","0.258202 * safezoneH + safezoneY","0.160463 * safezoneW","0.0774495 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],""],[]],[1703,"",[1,"Missions",["0.678603 * safezoneW + safezoneX","0.347483 * safezoneH + safezoneY","0.160463 * safezoneW","0.0774495 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],""],[]],[1704,"",[1,"Private Skins",["0.680162 * safezoneW + safezoneX","0.443138 * safezoneH + safezoneY","0.160463 * safezoneW","0.0774495 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],""],[]],[1705,"",[1,"Close Wiki",["0.677044 * safezoneW + safezoneX","0.753488 * safezoneH + safezoneY","0.160463 * safezoneW","0.0774495 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],""],[]]]
*/