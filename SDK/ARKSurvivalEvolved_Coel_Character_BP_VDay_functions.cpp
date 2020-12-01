// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Coel_Character_BP_VDay_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Coel_Character_BP_VDay.Coel_Character_BP_VDay_C.UserConstructionScript
// ()

void ACoel_Character_BP_VDay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Coel_Character_BP_VDay.Coel_Character_BP_VDay_C.UserConstructionScript");

	ACoel_Character_BP_VDay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Coel_Character_BP_VDay.Coel_Character_BP_VDay_C.ExecuteUbergraph_Coel_Character_BP_VDay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACoel_Character_BP_VDay_C::ExecuteUbergraph_Coel_Character_BP_VDay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Coel_Character_BP_VDay.Coel_Character_BP_VDay_C.ExecuteUbergraph_Coel_Character_BP_VDay");

	ACoel_Character_BP_VDay_C_ExecuteUbergraph_Coel_Character_BP_VDay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
