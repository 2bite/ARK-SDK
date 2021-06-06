// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaRex_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MegaRex_Character_BP.MegaRex_Character_BP_C.UserConstructionScript
// ()

void AMegaRex_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaRex_Character_BP.MegaRex_Character_BP_C.UserConstructionScript");

	AMegaRex_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaRex_Character_BP.MegaRex_Character_BP_C.ExecuteUbergraph_MegaRex_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegaRex_Character_BP_C::ExecuteUbergraph_MegaRex_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaRex_Character_BP.MegaRex_Character_BP_C.ExecuteUbergraph_MegaRex_Character_BP");

	AMegaRex_Character_BP_C_ExecuteUbergraph_MegaRex_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
