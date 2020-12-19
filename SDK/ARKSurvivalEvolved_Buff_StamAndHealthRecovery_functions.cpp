// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StamAndHealthRecovery_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_StamAndHealthRecovery.Buff_StamAndHealthRecovery_C.UserConstructionScript
// ()

void ABuff_StamAndHealthRecovery_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StamAndHealthRecovery.Buff_StamAndHealthRecovery_C.UserConstructionScript");

	ABuff_StamAndHealthRecovery_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StamAndHealthRecovery.Buff_StamAndHealthRecovery_C.ExecuteUbergraph_Buff_StamAndHealthRecovery
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StamAndHealthRecovery_C::ExecuteUbergraph_Buff_StamAndHealthRecovery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StamAndHealthRecovery.Buff_StamAndHealthRecovery_C.ExecuteUbergraph_Buff_StamAndHealthRecovery");

	ABuff_StamAndHealthRecovery_C_ExecuteUbergraph_Buff_StamAndHealthRecovery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
