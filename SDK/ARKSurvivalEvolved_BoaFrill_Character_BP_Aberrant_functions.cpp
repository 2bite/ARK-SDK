// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoaFrill_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoaFrill_Character_BP_Aberrant.BoaFrill_Character_BP_Aberrant_C.UserConstructionScript
// ()

void ABoaFrill_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP_Aberrant.BoaFrill_Character_BP_Aberrant_C.UserConstructionScript");

	ABoaFrill_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP_Aberrant.BoaFrill_Character_BP_Aberrant_C.ExecuteUbergraph_BoaFrill_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABoaFrill_Character_BP_Aberrant_C::ExecuteUbergraph_BoaFrill_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP_Aberrant.BoaFrill_Character_BP_Aberrant_C.ExecuteUbergraph_BoaFrill_Character_BP_Aberrant");

	ABoaFrill_Character_BP_Aberrant_C_ExecuteUbergraph_BoaFrill_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
