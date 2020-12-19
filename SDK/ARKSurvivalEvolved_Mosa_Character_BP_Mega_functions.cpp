// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mosa_Character_BP_Mega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mosa_Character_BP_Mega.Mosa_Character_BP_Mega_C.UserConstructionScript
// ()

void AMosa_Character_BP_Mega_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP_Mega.Mosa_Character_BP_Mega_C.UserConstructionScript");

	AMosa_Character_BP_Mega_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mosa_Character_BP_Mega.Mosa_Character_BP_Mega_C.ExecuteUbergraph_Mosa_Character_BP_Mega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMosa_Character_BP_Mega_C::ExecuteUbergraph_Mosa_Character_BP_Mega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP_Mega.Mosa_Character_BP_Mega_C.ExecuteUbergraph_Mosa_Character_BP_Mega");

	AMosa_Character_BP_Mega_C_ExecuteUbergraph_Mosa_Character_BP_Mega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
