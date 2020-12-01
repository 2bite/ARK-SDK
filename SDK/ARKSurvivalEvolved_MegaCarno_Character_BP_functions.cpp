// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaCarno_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MegaCarno_Character_BP.MegaCarno_Character_BP_C.UserConstructionScript
// ()

void AMegaCarno_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaCarno_Character_BP.MegaCarno_Character_BP_C.UserConstructionScript");

	AMegaCarno_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaCarno_Character_BP.MegaCarno_Character_BP_C.ExecuteUbergraph_MegaCarno_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegaCarno_Character_BP_C::ExecuteUbergraph_MegaCarno_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaCarno_Character_BP.MegaCarno_Character_BP_C.ExecuteUbergraph_MegaCarno_Character_BP");

	AMegaCarno_Character_BP_C_ExecuteUbergraph_MegaCarno_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
