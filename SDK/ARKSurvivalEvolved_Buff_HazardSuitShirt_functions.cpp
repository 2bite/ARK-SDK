// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuitShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HazardSuitShirt.Buff_HazardSuitShirt_C.UserConstructionScript
// ()

void ABuff_HazardSuitShirt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitShirt.Buff_HazardSuitShirt_C.UserConstructionScript");

	ABuff_HazardSuitShirt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HazardSuitShirt.Buff_HazardSuitShirt_C.ExecuteUbergraph_Buff_HazardSuitShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HazardSuitShirt_C::ExecuteUbergraph_Buff_HazardSuitShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitShirt.Buff_HazardSuitShirt_C.ExecuteUbergraph_Buff_HazardSuitShirt");

	ABuff_HazardSuitShirt_C_ExecuteUbergraph_Buff_HazardSuitShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
