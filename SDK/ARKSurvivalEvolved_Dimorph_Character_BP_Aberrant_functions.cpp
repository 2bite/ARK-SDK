// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorph_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dimorph_Character_BP_Aberrant.Dimorph_Character_BP_Aberrant_C.UserConstructionScript
// ()

void ADimorph_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_Character_BP_Aberrant.Dimorph_Character_BP_Aberrant_C.UserConstructionScript");

	ADimorph_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dimorph_Character_BP_Aberrant.Dimorph_Character_BP_Aberrant_C.ExecuteUbergraph_Dimorph_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADimorph_Character_BP_Aberrant_C::ExecuteUbergraph_Dimorph_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_Character_BP_Aberrant.Dimorph_Character_BP_Aberrant_C.ExecuteUbergraph_Dimorph_Character_BP_Aberrant");

	ADimorph_Character_BP_Aberrant_C_ExecuteUbergraph_Dimorph_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
