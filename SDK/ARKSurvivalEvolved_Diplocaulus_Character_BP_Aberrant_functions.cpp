// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Diplocaulus_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Diplocaulus_Character_BP_Aberrant.Diplocaulus_Character_BP_Aberrant_C.UserConstructionScript
// ()

void ADiplocaulus_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP_Aberrant.Diplocaulus_Character_BP_Aberrant_C.UserConstructionScript");

	ADiplocaulus_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplocaulus_Character_BP_Aberrant.Diplocaulus_Character_BP_Aberrant_C.ExecuteUbergraph_Diplocaulus_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADiplocaulus_Character_BP_Aberrant_C::ExecuteUbergraph_Diplocaulus_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplocaulus_Character_BP_Aberrant.Diplocaulus_Character_BP_Aberrant_C.ExecuteUbergraph_Diplocaulus_Character_BP_Aberrant");

	ADiplocaulus_Character_BP_Aberrant_C_ExecuteUbergraph_Diplocaulus_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
