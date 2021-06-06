// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TerrorBird_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TerrorBird_Character_BP_Summoned.TerrorBird_Character_BP_Summoned_C.UserConstructionScript
// ()

void ATerrorBird_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrorBird_Character_BP_Summoned.TerrorBird_Character_BP_Summoned_C.UserConstructionScript");

	ATerrorBird_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrorBird_Character_BP_Summoned.TerrorBird_Character_BP_Summoned_C.ExecuteUbergraph_TerrorBird_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATerrorBird_Character_BP_Summoned_C::ExecuteUbergraph_TerrorBird_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrorBird_Character_BP_Summoned.TerrorBird_Character_BP_Summoned_C.ExecuteUbergraph_TerrorBird_Character_BP_Summoned");

	ATerrorBird_Character_BP_Summoned_C_ExecuteUbergraph_TerrorBird_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
