// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuitGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HazardSuitGloves.Buff_HazardSuitGloves_C.UserConstructionScript
// ()

void ABuff_HazardSuitGloves_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitGloves.Buff_HazardSuitGloves_C.UserConstructionScript");

	ABuff_HazardSuitGloves_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HazardSuitGloves.Buff_HazardSuitGloves_C.ExecuteUbergraph_Buff_HazardSuitGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HazardSuitGloves_C::ExecuteUbergraph_Buff_HazardSuitGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HazardSuitGloves.Buff_HazardSuitGloves_C.ExecuteUbergraph_Buff_HazardSuitGloves");

	ABuff_HazardSuitGloves_C_ExecuteUbergraph_Buff_HazardSuitGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
