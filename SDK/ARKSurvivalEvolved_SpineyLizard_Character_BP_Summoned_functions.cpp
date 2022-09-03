// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpineyLizard_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpineyLizard_Character_BP_Summoned.SpineyLizard_Character_BP_Summoned_C.UserConstructionScript
// ()

void ASpineyLizard_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpineyLizard_Character_BP_Summoned.SpineyLizard_Character_BP_Summoned_C.UserConstructionScript");

	ASpineyLizard_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpineyLizard_Character_BP_Summoned.SpineyLizard_Character_BP_Summoned_C.ExecuteUbergraph_SpineyLizard_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpineyLizard_Character_BP_Summoned_C::ExecuteUbergraph_SpineyLizard_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpineyLizard_Character_BP_Summoned.SpineyLizard_Character_BP_Summoned_C.ExecuteUbergraph_SpineyLizard_Character_BP_Summoned");

	ASpineyLizard_Character_BP_Summoned_C_ExecuteUbergraph_SpineyLizard_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
