@ Library Sturgeon all books collected
SCRIPT_START script_SturgeonAllBooksCollected
	BeginBlock
	SetEntityPositionRelative 0x0068, 0x0018
	DoPostScriptAction 0x000f
	_0807EB44 0x0004
	_0807E930 0x0004
	SetEntitySpeed 0x0300
	PlaySound SFX_STAIRS
	EndBlock
	WaitForSyncFlag 0x00000002
	MessageNoOverlap 0x490d
	WaitUntilTextboxCloses
	DoPostScriptAction 0x0007
	Call sub_08064D08
	_0807EDD4 0x0068, 0x0078
	Call sub_08064D10
	Wait 0x000f
	_0807EB44 0x0002
	Wait 0x000f
	Call sub_08064D08
	_0807EDD4 0x0098, 0x0078
	Call sub_08064D10
	Wait 0x000f
	_0807EB44 0x0004
	PlaySound SFX_PLY_LIFT
	Wait 0x000f
	_0807EB44 0x0002
	_0807EDD4 0x00ac, 0x0078
	Wait 0x000f
	_0807EB44 0x0004
	PlaySound SFX_PLY_LIFT
	Wait 0x000f
	_0807EB44 0x0002
	_0807EDD4 0x00c0, 0x0078
	Wait 0x000f
	_0807EB44 0x0004
	PlaySound SFX_PLY_LIFT
	Wait 0x000f
	_0807EB44 0x0006
	Wait 0x001e
	Call sub_08064D08
	_0807EDD4 0x0068, 0x0078
	Call sub_08064D10
	Wait 0x000f
	_0807EB44 0x0000
	Wait 0x000f
	Call sub_08064D08
	_0807EDD4 0x0068, 0x0018
	Call sub_08064D10
	PlaySound SFX_STAIRS
	SetSyncFlag 0x00000001
	DoPostScriptAction 0x0006
SCRIPT_END
	.2byte 0x0000