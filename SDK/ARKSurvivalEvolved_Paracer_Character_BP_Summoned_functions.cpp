// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Paracer_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Paracer_Character_BP_Summoned.Paracer_Character_BP_Summoned_C.UserConstructionScript
// ()

void AParacer_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_Character_BP_Summoned.Paracer_Character_BP_Summoned_C.UserConstructionScript");

	AParacer_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paracer_Character_BP_Summoned.Paracer_Character_BP_Summoned_C.ExecuteUbergraph_Paracer_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AParacer_Character_BP_Summoned_C::ExecuteUbergraph_Paracer_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_Character_BP_Summoned.Paracer_Character_BP_Summoned_C.ExecuteUbergraph_Paracer_Character_BP_Summoned");

	AParacer_Character_BP_Summoned_C_ExecuteUbergraph_Paracer_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
