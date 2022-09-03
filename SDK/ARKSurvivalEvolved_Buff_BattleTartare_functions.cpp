// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BattleTartare_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BattleTartare.Buff_BattleTartare_C.UserConstructionScript
// ()

void ABuff_BattleTartare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BattleTartare.Buff_BattleTartare_C.UserConstructionScript");

	ABuff_BattleTartare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BattleTartare.Buff_BattleTartare_C.ExecuteUbergraph_Buff_BattleTartare
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BattleTartare_C::ExecuteUbergraph_Buff_BattleTartare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BattleTartare.Buff_BattleTartare_C.ExecuteUbergraph_Buff_BattleTartare");

	ABuff_BattleTartare_C_ExecuteUbergraph_Buff_BattleTartare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
