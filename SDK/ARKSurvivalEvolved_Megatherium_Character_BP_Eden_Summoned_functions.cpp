// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megatherium_Character_BP_Eden_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megatherium_Character_BP_Eden_Summoned.Megatherium_Character_BP_Eden_Summoned_C.UserConstructionScript
// ()

void AMegatherium_Character_BP_Eden_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP_Eden_Summoned.Megatherium_Character_BP_Eden_Summoned_C.UserConstructionScript");

	AMegatherium_Character_BP_Eden_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP_Eden_Summoned.Megatherium_Character_BP_Eden_Summoned_C.ExecuteUbergraph_Megatherium_Character_BP_Eden_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_Eden_Summoned_C::ExecuteUbergraph_Megatherium_Character_BP_Eden_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP_Eden_Summoned.Megatherium_Character_BP_Eden_Summoned_C.ExecuteUbergraph_Megatherium_Character_BP_Eden_Summoned");

	AMegatherium_Character_BP_Eden_Summoned_C_ExecuteUbergraph_Megatherium_Character_BP_Eden_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
