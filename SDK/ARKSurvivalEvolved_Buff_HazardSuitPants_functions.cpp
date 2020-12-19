// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuitPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HazardSuitPants.Buff_HazardSuitPants_C.UserConstructionScript
// ()

void ABuff_HazardSuitPants_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitPants.Buff_HazardSuitPants_C.UserConstructionScript");

	ABuff_HazardSuitPants_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HazardSuitPants.Buff_HazardSuitPants_C.ExecuteUbergraph_Buff_HazardSuitPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HazardSuitPants_C::ExecuteUbergraph_Buff_HazardSuitPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitPants.Buff_HazardSuitPants_C.ExecuteUbergraph_Buff_HazardSuitPants");

	ABuff_HazardSuitPants_C_ExecuteUbergraph_Buff_HazardSuitPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
