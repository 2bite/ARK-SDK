// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gorilla_Character_BP_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gorilla_Character_BP_Medium.Gorilla_Character_BP_Medium_C.UserConstructionScript
// ()

void AGorilla_Character_BP_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorilla_Character_BP_Medium.Gorilla_Character_BP_Medium_C.UserConstructionScript");

	AGorilla_Character_BP_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorilla_Character_BP_Medium.Gorilla_Character_BP_Medium_C.ExecuteUbergraph_Gorilla_Character_BP_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGorilla_Character_BP_Medium_C::ExecuteUbergraph_Gorilla_Character_BP_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorilla_Character_BP_Medium.Gorilla_Character_BP_Medium_C.ExecuteUbergraph_Gorilla_Character_BP_Medium");

	AGorilla_Character_BP_Medium_C_ExecuteUbergraph_Gorilla_Character_BP_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
