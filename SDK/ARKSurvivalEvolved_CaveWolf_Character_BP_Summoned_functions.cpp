// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CaveWolf_Character_BP_Summoned.CaveWolf_Character_BP_Summoned_C.UserConstructionScript
// ()

void ACaveWolf_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP_Summoned.CaveWolf_Character_BP_Summoned_C.UserConstructionScript");

	ACaveWolf_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_Character_BP_Summoned.CaveWolf_Character_BP_Summoned_C.ExecuteUbergraph_CaveWolf_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACaveWolf_Character_BP_Summoned_C::ExecuteUbergraph_CaveWolf_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_Character_BP_Summoned.CaveWolf_Character_BP_Summoned_C.ExecuteUbergraph_CaveWolf_Character_BP_Summoned");

	ACaveWolf_Character_BP_Summoned_C_ExecuteUbergraph_CaveWolf_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
