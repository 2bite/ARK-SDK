// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_HarvestStickPickup_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_HarvestStickPickup_Emitter.EX_HarvestStickPickup_Emitter_C.UserConstructionScript
// ()

void AEX_HarvestStickPickup_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_HarvestStickPickup_Emitter.EX_HarvestStickPickup_Emitter_C.UserConstructionScript");

	AEX_HarvestStickPickup_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_HarvestStickPickup_Emitter.EX_HarvestStickPickup_Emitter_C.ExecuteUbergraph_EX_HarvestStickPickup_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEX_HarvestStickPickup_Emitter_C::ExecuteUbergraph_EX_HarvestStickPickup_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_HarvestStickPickup_Emitter.EX_HarvestStickPickup_Emitter_C.ExecuteUbergraph_EX_HarvestStickPickup_Emitter");

	AEX_HarvestStickPickup_Emitter_C_ExecuteUbergraph_EX_HarvestStickPickup_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
