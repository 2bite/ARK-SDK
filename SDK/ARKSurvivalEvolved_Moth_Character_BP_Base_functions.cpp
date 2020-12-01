// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moth_Character_BP_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Moth_Character_BP_Base.Moth_Character_BP_Base_C.UserConstructionScript
// ()

void AMoth_Character_BP_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Moth_Character_BP_Base.Moth_Character_BP_Base_C.UserConstructionScript");

	AMoth_Character_BP_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Moth_Character_BP_Base.Moth_Character_BP_Base_C.ExecuteUbergraph_Moth_Character_BP_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoth_Character_BP_Base_C::ExecuteUbergraph_Moth_Character_BP_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Moth_Character_BP_Base.Moth_Character_BP_Base_C.ExecuteUbergraph_Moth_Character_BP_Base");

	AMoth_Character_BP_Base_C_ExecuteUbergraph_Moth_Character_BP_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
