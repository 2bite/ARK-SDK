#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_Skylight_Manager_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EX_Skylight_Manager.EX_Skylight_Manager_C.UserConstructionScript
struct AEX_Skylight_Manager_C_UserConstructionScript_Params
{
};

// Function EX_Skylight_Manager.EX_Skylight_Manager_C.UpdateSkylight
struct AEX_Skylight_Manager_C_UpdateSkylight_Params
{
};

// Function EX_Skylight_Manager.EX_Skylight_Manager_C.ReceiveBeginPlay
struct AEX_Skylight_Manager_C_ReceiveBeginPlay_Params
{
};

// Function EX_Skylight_Manager.EX_Skylight_Manager_C.BiomeSwitch
struct AEX_Skylight_Manager_C_BiomeSwitch_Params
{
	TEnumAsByte<EBiomeType_Enum>                       Biome;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_Skylight_Manager.EX_Skylight_Manager_C.ExecuteUbergraph_EX_Skylight_Manager
struct AEX_Skylight_Manager_C_ExecuteUbergraph_EX_Skylight_Manager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
