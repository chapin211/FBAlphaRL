// =======================================================================
// GAMELIST (FILTERS)

#include "main.h"

char szSysFilter[MASKALL][256] = { 
	"MASKCAPMISC"		,"MASKCAVE"		,"MASKCPS"		,"MASKCPS2",
	"MASKCPS3"			,"MASKDATAEAST"	,"MASKGALAXIAN"	,"MASKIREM",
	"MASKKANEKO"		,"MASKKONAMI"	,"MASKNEOGEO"	,"MASKPACMAN",
	"MASKPGM"			,"MASKPSIKYO"	,"MASKSEGA"		,"MASKSETA",
	"MASKTAITO"			,"MASKTECHNOS"	,"MASKTOAPLAN"	,"MASKMISCPRE90S",
	"MASKMISCPOST90S"	
	//,"MASKMEGADRIVE","MASKPCENGINE"	,"MASKSNES"
};

bool bSysFilter[MASKCUSTOM+1] = 
{
	true,true,true,true,
	true,true,true,true,
	true,true,true,true,
	true,true,true,true,
	true,true,true,true,
	true,
	true,true // <--- fillers
};

int c_fbaRL::GetSystemMaskId(char* szMask)
{
	for(uint32_t n = 0; n < sizeof(szSysFilter) / 256; n++)
	{
		if(strcmp(szMask, szSysFilter[n]) == 0)
		{
			return n;
		}
	}
	return -1;
}

char* c_fbaRL::GetSystemFilter(int nFilter)
{
	char* pszFilter = NULL;
	pszFilter = (char*)malloc(256);
	memset(pszFilter, 0, 256);

	switch(nFilter)
	{
		case 0:  strcpy(pszFilter, "Capcom Misc"); break;
		case 1:  strcpy(pszFilter, "Cave"); break;
		case 2:  strcpy(pszFilter, "Capcom Play System I (CPS-I)"); break;
		case 3:  strcpy(pszFilter, "Capcom Play System II (CPS-II)"); break;
		case 4:  strcpy(pszFilter, "Capcom Play System III (CPS-III)"); break;
		case 5:  strcpy(pszFilter, "Data East"); break;
		case 6:  strcpy(pszFilter, "Galaxian"); break;
		case 7:  strcpy(pszFilter, "Irem"); break;
		case 8:  strcpy(pszFilter, "Kaneko"); break;
		case 9:  strcpy(pszFilter, "Konami"); break;
		case 10:  strcpy(pszFilter, "Neo Geo"); break;
		case 11:  strcpy(pszFilter, "Pac-Man"); break;
		case 12:  strcpy(pszFilter, "Poly Game Master (PGM)"); break;
		case 13:  strcpy(pszFilter, "Psikyo"); break;
		case 14:  strcpy(pszFilter, "Sega"); break;
		case 15:  strcpy(pszFilter, "Seta"); break;
		case 16:  strcpy(pszFilter, "Taito"); break;
		case 17:  strcpy(pszFilter, "Technos"); break;
		case 18:  strcpy(pszFilter, "Toaplan"); break;
		case 19:  strcpy(pszFilter, "Misc Pre 90\'s"); break;
		case 20:  strcpy(pszFilter, "Misc Post 90\'s"); break;
		//case 21:  strcpy(pszFilter, "Megadrive"); break;
		//case 22:  strcpy(pszFilter, "PC Engine"); break;
		//case 23:  strcpy(pszFilter, "SNES"); break;
		case 21:  strcpy(pszFilter, "All Systems"); break;
		case 22:  strcpy(pszFilter, "Custom System Filter"); break;
	}
	return pszFilter;
}

void c_fbaRL::NextSysFilter()
{
	bProcessingGames = true;

	// custom --> first single filter
	if(g_opt_nActiveSysFilter == MASKCUSTOM)	
	{
		g_opt_nActiveSysFilter = 0;

		for(uint32_t n = 0; n < sizeof(bSysFilter)-2; n++){
			bSysFilter[n] = false;
		}

		bSysFilter[g_opt_nActiveSysFilter] = true;

		// refresh filters
		EndFilterList();
		InitFilterList();
		return;
	}

	// show all --> custom
	if(g_opt_nActiveSysFilter == MASKALL)	
	{
		g_opt_nActiveSysFilter = MASKCUSTOM;

		// use values from FBA_RL.ini
		for(uint32_t n = 0; n < sizeof(bSysFilter)-2; n++){
			bSysFilter[n] = g_opt_bCustomSysFilter[n];
		}

		// refresh filters
		EndFilterList();
		InitFilterList();
		return;
	}

	// next single system filter --> ...
	g_opt_nActiveSysFilter++;

	for(uint32_t n = 0; n < sizeof(bSysFilter)-2; n++){
		bSysFilter[n] = false;
	}

	bSysFilter[g_opt_nActiveSysFilter] = true;

	// refresh filters
	EndFilterList();
	InitFilterList();

	bProcessingGames = false;
}

void c_fbaRL::PrevSysFilter()
{
	bProcessingGames = true;

	// custom --> show all
	if(g_opt_nActiveSysFilter == MASKCUSTOM)	
	{
		g_opt_nActiveSysFilter = MASKALL;

		for(uint32_t n = 0; n < sizeof(bSysFilter)-2; n++){
			bSysFilter[n] = false;
		}

		bSysFilter[g_opt_nActiveSysFilter] = true;

		// refresh filters
		EndFilterList();
		InitFilterList();
		return;
	}

	// first single filter --> custom
	if(g_opt_nActiveSysFilter == 0)	
	{
		g_opt_nActiveSysFilter = MASKCUSTOM;

		// use values from FBA_RL.ini
		for(uint32_t n = 0; n < sizeof(bSysFilter)-2; n++){
			bSysFilter[n] = g_opt_bCustomSysFilter[n];
		}

		// refresh filters
		EndFilterList();
		InitFilterList();
		return;
	}

	// previous single system filter --> ...
	g_opt_nActiveSysFilter--;

	for(uint32_t n = 0; n < sizeof(bSysFilter)-2; n++){
		bSysFilter[n] = false;
	}

	bSysFilter[g_opt_nActiveSysFilter] = true;

	// refresh filters
	EndFilterList();
	InitFilterList();

	bProcessingGames = false;
}

bool c_fbaRL::FilterGame(char* szSystemMask)
{
	// show all?
	if(g_opt_nActiveSysFilter == MASKALL) {
		return true;
	}

	if(g_opt_nActiveSysFilter == MASKCUSTOM) 
	{
		// filter...
		for(uint32_t n=0; n < sizeof(bSysFilter)-2; n++)
		{
			if(strcmp(szSystemMask, szSysFilter[n]) == 0)
			{
				if(g_opt_bCustomSysFilter[n] == true) {
					return true;
				} else {
					return false;
				}
			}
		}

	}

	if(strcmp(szSystemMask, szSysFilter[g_opt_nActiveSysFilter]) == 0)
	{
		return true;
	}

	return false;
}

void c_fbaRL::InitFilterList()
{
	bProcessingGames = true;

	nBurnSelected = -1;

	nSelectedGame = 0;
	nGameListTop = 0;
	nFilteredGames = 0;

	fgames = (c_game**)malloc(sizeof(c_game) * MAX_GAMES);
	//memset(fgames, 0, sizeof(c_game) * MAX_GAMES);

	// process...
	
	for(int n=0; n < nTotalGames; n++) 
	{
		if(!g_opt_bDisplayMissingGames && !games[n]->bAvailable)
		{
			continue;
		}

		if(FilterGame(games[n]->sysmask) == false)
		{
			continue;
		}
		fgames[nFilteredGames] = new c_game(nFilteredGames);

		strcpy(fgames[nFilteredGames]->path		, games[n]->path);
		strcpy(fgames[nFilteredGames]->zipname	, games[n]->zipname);
		strcpy(fgames[nFilteredGames]->title	, games[n]->title);
		strcpy(fgames[nFilteredGames]->sysmask	, games[n]->sysmask);
		memcpy(&fgames[nFilteredGames]->nSize	, &games[n]->nSize, sizeof(uint64_t));
		memcpy(&fgames[nFilteredGames]->bAvailable	, &games[n]->bAvailable, sizeof(bool));

		nFilteredGames++;
	}

	if(nFilteredGames < 1) {
		bProcessingGames = false;
		ResetPreviewImage();
		return;
	}

	// Sort Filtered list by Title
	qsort(fgames, nFilteredGames, sizeof(c_game*), _FcCompareStruct);
	bProcessingGames = false;

	nStatus = STATUS_UPDATEPREVIEW;
}

void c_fbaRL::EndFilterList()
{
	bProcessingGames = true;

	for(int n = 0; n < nFilteredGames; n++)	{
		SAFE_DELETE(fgames[n])
	}
	SAFE_FREE(fgames);

	nSelectedGame = 0;
	nGameListTop = 0;
	nFilteredGames = 0;

	bProcessingGames = false;
}
