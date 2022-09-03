// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Purlovia_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Purlovia_Character_BP_Aberrant.Purlovia_Character_BP_Aberrant_C.UserConstructionScript
// ()

void APurlovia_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Aberrant.Purlovia_Character_BP_Aberrant_C.UserConstructionScript");

	APurlovia_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP_Aberrant.Purlovia_Character_BP_Aberrant_C.ExecuteUbergraph_Purlovia_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_Aberrant_C::ExecuteUbergraph_Purlovia_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Aberrant.Purlovia_Character_BP_Aberrant_C.ExecuteUbergraph_Purlovia_Character_BP_Aberrant");

	APurlovia_Character_BP_Aberrant_C_ExecuteUbergraph_Purlovia_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
