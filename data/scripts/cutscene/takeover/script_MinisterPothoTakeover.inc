@ Western Wood Cutscene Minister Potho
SCRIPT_START script_MinisterPothoTakeover
	BeginBlock
	_0807EB44 0x0004
	DoPostScriptAction 0x0000
	EndBlock
	WaitForSyncFlagAndClear 0x00000001
	MessageNoOverlap 0x131c
	WaitUntilTextboxCloses
	SetSyncFlag 0x00000002
	WaitForSyncFlag 0x00000200
	DoPostScriptAction 0x0005
	WaitForSyncFlag 0x00000400
	DoPostScriptAction 0x0006
SCRIPT_END