#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mek_Character_BP_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekHeat
struct UMek_Character_BP_Interface_C_GetMekHeat_Params
{
	float                                              CurrentHeat;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeat;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.GetMekFuel
struct UMek_Character_BP_Interface_C_GetMekFuel_Params
{
	float                                              CurrentFuel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxFuel;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekHeat
struct UMek_Character_BP_Interface_C_ModifyMekHeat_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Subtract;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHeatLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.ModifyMekFuel
struct UMek_Character_BP_Interface_C_ModifyMekFuel_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Subtract;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewFuelLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mek_Character_BP_Interface.Mek_Character_BP_Interface_C.SetBackpackMalfunction
struct UMek_Character_BP_Interface_C_SetBackpackMalfunction_Params
{
	bool                                               DisableBackpack;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
