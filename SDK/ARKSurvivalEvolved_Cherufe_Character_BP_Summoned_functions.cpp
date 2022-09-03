// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cherufe_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cherufe_Character_BP_Summoned.Cherufe_Character_BP_Summoned_C.UserConstructionScript
// ()

void ACherufe_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP_Summoned.Cherufe_Character_BP_Summoned_C.UserConstructionScript");

	ACherufe_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP_Summoned.Cherufe_Character_BP_Summoned_C.ExecuteUbergraph_Cherufe_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_Summoned_C::ExecuteUbergraph_Cherufe_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP_Summoned.Cherufe_Character_BP_Summoned_C.ExecuteUbergraph_Cherufe_Character_BP_Summoned");

	ACherufe_Character_BP_Summoned_C_ExecuteUbergraph_Cherufe_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
