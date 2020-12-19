// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Equus_Character_BP_Unicorn_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C.UserConstructionScript
// ()

void AEquus_Character_BP_Unicorn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C.UserConstructionScript");

	AEquus_Character_BP_Unicorn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C.ExecuteUbergraph_Equus_Character_BP_Unicorn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_Unicorn_C::ExecuteUbergraph_Equus_Character_BP_Unicorn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP_Unicorn.Equus_Character_BP_Unicorn_C.ExecuteUbergraph_Equus_Character_BP_Unicorn");

	AEquus_Character_BP_Unicorn_C_ExecuteUbergraph_Equus_Character_BP_Unicorn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
