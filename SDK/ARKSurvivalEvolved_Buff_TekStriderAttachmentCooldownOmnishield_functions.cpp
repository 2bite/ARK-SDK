// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStriderAttachmentCooldownOmnishield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStriderAttachmentCooldownOmnishield.Buff_TekStriderAttachmentCooldownOmnishield_C.UserConstructionScript
// ()

void ABuff_TekStriderAttachmentCooldownOmnishield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderAttachmentCooldownOmnishield.Buff_TekStriderAttachmentCooldownOmnishield_C.UserConstructionScript");

	ABuff_TekStriderAttachmentCooldownOmnishield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderAttachmentCooldownOmnishield.Buff_TekStriderAttachmentCooldownOmnishield_C.ExecuteUbergraph_Buff_TekStriderAttachmentCooldownOmnishield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStriderAttachmentCooldownOmnishield_C::ExecuteUbergraph_Buff_TekStriderAttachmentCooldownOmnishield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderAttachmentCooldownOmnishield.Buff_TekStriderAttachmentCooldownOmnishield_C.ExecuteUbergraph_Buff_TekStriderAttachmentCooldownOmnishield");

	ABuff_TekStriderAttachmentCooldownOmnishield_C_ExecuteUbergraph_Buff_TekStriderAttachmentCooldownOmnishield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
