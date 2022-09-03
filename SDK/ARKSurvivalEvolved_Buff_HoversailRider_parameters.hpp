#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HoversailRider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_HoversailRider.Buff_HoversailRider_C.BPAdjustStatusValueModification
struct ABuff_HoversailRider_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_HoversailRider.Buff_HoversailRider_C.BPPreventAddingOtherBuff
struct ABuff_HoversailRider_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_HoversailRider.Buff_HoversailRider_C.UserConstructionScript
struct ABuff_HoversailRider_C_UserConstructionScript_Params
{
};

// Function Buff_HoversailRider.Buff_HoversailRider_C.ExecuteUbergraph_Buff_HoversailRider
struct ABuff_HoversailRider_C_ExecuteUbergraph_Buff_HoversailRider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
