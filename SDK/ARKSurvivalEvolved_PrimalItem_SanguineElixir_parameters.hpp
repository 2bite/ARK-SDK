#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_SanguineElixir_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.CheckValidForUse
struct UPrimalItem_SanguineElixir_C_CheckValidForUse_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BPCanUse
struct UPrimalItem_SanguineElixir_C_BPCanUse_Params
{
	bool*                                              bIgnoreCooldown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BlueprintUsed
struct UPrimalItem_SanguineElixir_C_BlueprintUsed_Params
{
};

// Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.ExecuteUbergraph_PrimalItem_SanguineElixir
struct UPrimalItem_SanguineElixir_C_ExecuteUbergraph_PrimalItem_SanguineElixir_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
