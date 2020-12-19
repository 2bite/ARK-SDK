// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moschops_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Moschops_Character_BP_Aberrant.Moschops_Character_BP_Aberrant_C.UserConstructionScript
// ()

void AMoschops_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP_Aberrant.Moschops_Character_BP_Aberrant_C.UserConstructionScript");

	AMoschops_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moschops_Character_BP_Aberrant.Moschops_Character_BP_Aberrant_C.ExecuteUbergraph_Moschops_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoschops_Character_BP_Aberrant_C::ExecuteUbergraph_Moschops_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moschops_Character_BP_Aberrant.Moschops_Character_BP_Aberrant_C.ExecuteUbergraph_Moschops_Character_BP_Aberrant");

	AMoschops_Character_BP_Aberrant_C_ExecuteUbergraph_Moschops_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
