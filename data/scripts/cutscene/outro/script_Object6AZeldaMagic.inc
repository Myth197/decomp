@ Outro OBJECT_6A Zelda glowing?
SCRIPT_START script_Object6AZeldaMagic
	BeginBlock
	DoPostScriptAction 0x0007
	DoPostScriptAction 0x000b
	CallWithArg sub_0807F994, 0x0000fff8
	EndBlock
	WaitForSyncFlag 0x00001000
	DoPostScriptAction 0x0006
SCRIPT_END
	.2byte 0x0000