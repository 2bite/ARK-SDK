// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dodo_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dodo_Character_BP_Aberrant.Dodo_Character_BP_Aberrant_C.UserConstructionScript
// ()

void ADodo_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Aberrant.Dodo_Character_BP_Aberrant_C.UserConstructionScript");

	ADodo_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodo_Character_BP_Aberrant.Dodo_Character_BP_Aberrant_C.ExecuteUbergraph_Dodo_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADodo_Character_BP_Aberrant_C::ExecuteUbergraph_Dodo_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Aberrant.Dodo_Character_BP_Aberrant_C.ExecuteUbergraph_Dodo_Character_BP_Aberrant");

	ADodo_Character_BP_Aberrant_C_ExecuteUbergraph_Dodo_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
