// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStriderAttachmentCooldown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStriderAttachmentCooldown.Buff_TekStriderAttachmentCooldown_C.UserConstructionScript
// ()

void ABuff_TekStriderAttachmentCooldown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderAttachmentCooldown.Buff_TekStriderAttachmentCooldown_C.UserConstructionScript");

	ABuff_TekStriderAttachmentCooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderAttachmentCooldown.Buff_TekStriderAttachmentCooldown_C.ExecuteUbergraph_Buff_TekStriderAttachmentCooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStriderAttachmentCooldown_C::ExecuteUbergraph_Buff_TekStriderAttachmentCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderAttachmentCooldown.Buff_TekStriderAttachmentCooldown_C.ExecuteUbergraph_Buff_TekStriderAttachmentCooldown");

	ABuff_TekStriderAttachmentCooldown_C_ExecuteUbergraph_Buff_TekStriderAttachmentCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
