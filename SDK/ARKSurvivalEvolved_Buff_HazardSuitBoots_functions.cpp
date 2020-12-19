// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuitBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HazardSuitBoots.Buff_HazardSuitBoots_C.UserConstructionScript
// ()

void ABuff_HazardSuitBoots_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitBoots.Buff_HazardSuitBoots_C.UserConstructionScript");

	ABuff_HazardSuitBoots_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HazardSuitBoots.Buff_HazardSuitBoots_C.ExecuteUbergraph_Buff_HazardSuitBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HazardSuitBoots_C::ExecuteUbergraph_Buff_HazardSuitBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitBoots.Buff_HazardSuitBoots_C.ExecuteUbergraph_Buff_HazardSuitBoots");

	ABuff_HazardSuitBoots_C_ExecuteUbergraph_Buff_HazardSuitBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
