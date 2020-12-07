// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Turkey_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Turkey_Character_BP.Turkey_Character_BP_C.UserConstructionScript
// ()

void ATurkey_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turkey_Character_BP.Turkey_Character_BP_C.UserConstructionScript");

	ATurkey_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Turkey_Character_BP.Turkey_Character_BP_C.ExecuteUbergraph_Turkey_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATurkey_Character_BP_C::ExecuteUbergraph_Turkey_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Turkey_Character_BP.Turkey_Character_BP_C.ExecuteUbergraph_Turkey_Character_BP");

	ATurkey_Character_BP_C_ExecuteUbergraph_Turkey_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
