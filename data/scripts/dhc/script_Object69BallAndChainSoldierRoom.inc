@ DHC OBJECT_69 Towards Vaati in room with Ball&Chain soldier
SCRIPT_START script_Object69BallAndChainSoldierRoom
	BeginBlock
	Call sub_0807F354
	EndBlock
	CheckLocalFlag 0x007c
	JumpIf script_0800E4FA
script_0800E4B6:
.ifdef JP
	CheckPlayerInRegion 0x0088, 0x0100, 0x0820
.else
.ifdef EU
	CheckPlayerInRegion 0x0088, 0x0100, 0x0820
.else
	CheckPlayerInRegion 0x0088, 0x00f8, 0x0820
.endif
.endif
	JumpIfNot script_0800E4B6
	BeginBlock
	_0807E864
.ifdef JP
.ifndef DEMO_JP
	Call SetPlayerEventPriority
.endif
.else
.ifdef EU
	Call SetPlayerEventPriority
.endif
.endif
	EndBlock
	Call sub_0807F3F8
	Wait 0x003c
	MessageFromTarget 0x160c
	WaitUntilTextboxCloses
	Wait 0x001e
	MessageFromTarget 0x160d
	WaitUntilTextboxCloses
	Wait 0x001e
	_0807EB28 0x160e
	Wait 0x003c
	WaitUntilTextboxCloses
	BeginBlock
	PlayBgm BGM_FIGHT_THEME2
	SetLocalFlag 0x007c
.ifdef JP
.ifndef DEMO_JP
	Call ResetPlayerEventPriority
.endif
.else
.ifdef EU
	Call ResetPlayerEventPriority
.endif
.endif
script_0800E4FA:
	_0807E878
	DoPostScriptAction 0x0006
	EndBlock
SCRIPT_END