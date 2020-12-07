// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Purlovia_Character_BP_Polar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C.UserConstructionScript
// ()

void APurlovia_Character_BP_Polar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C.UserConstructionScript");

	APurlovia_Character_BP_Polar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C.ExecuteUbergraph_Purlovia_Character_BP_Polar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_Polar_C::ExecuteUbergraph_Purlovia_Character_BP_Polar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C.ExecuteUbergraph_Purlovia_Character_BP_Polar");

	APurlovia_Character_BP_Polar_C_ExecuteUbergraph_Purlovia_Character_BP_Polar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
