/*
#############################################################################################
# Black Squad (11.01.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Grip_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, dano20zombie
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct Grip.GripBTObject.NodeChild
// 0x0018
struct FNodeChild
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UGripBTNode*                                 Node;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DrawY;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif