// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Coel_Character_BP_VDay_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Coel_Character_BP_VDay_Aberrant.Coel_Character_BP_VDay_Aberrant_C.UserConstructionScript
// ()

void ACoel_Character_BP_VDay_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Coel_Character_BP_VDay_Aberrant.Coel_Character_BP_VDay_Aberrant_C.UserConstructionScript");

	ACoel_Character_BP_VDay_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Coel_Character_BP_VDay_Aberrant.Coel_Character_BP_VDay_Aberrant_C.ExecuteUbergraph_Coel_Character_BP_VDay_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACoel_Character_BP_VDay_Aberrant_C::ExecuteUbergraph_Coel_Character_BP_VDay_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Coel_Character_BP_VDay_Aberrant.Coel_Character_BP_VDay_Aberrant_C.ExecuteUbergraph_Coel_Character_BP_VDay_Aberrant");

	ACoel_Character_BP_VDay_Aberrant_C_ExecuteUbergraph_Coel_Character_BP_VDay_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
