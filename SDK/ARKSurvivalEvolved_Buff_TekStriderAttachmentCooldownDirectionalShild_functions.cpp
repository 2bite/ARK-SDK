// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStriderAttachmentCooldownDirectionalShild_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStriderAttachmentCooldownDirectionalShild.Buff_TekStriderAttachmentCooldownDirectionalShild_C.UserConstructionScript
// ()

void ABuff_TekStriderAttachmentCooldownDirectionalShild_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderAttachmentCooldownDirectionalShild.Buff_TekStriderAttachmentCooldownDirectionalShild_C.UserConstructionScript");

	ABuff_TekStriderAttachmentCooldownDirectionalShild_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderAttachmentCooldownDirectionalShild.Buff_TekStriderAttachmentCooldownDirectionalShild_C.ExecuteUbergraph_Buff_TekStriderAttachmentCooldownDirectionalShild
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStriderAttachmentCooldownDirectionalShild_C::ExecuteUbergraph_Buff_TekStriderAttachmentCooldownDirectionalShild(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderAttachmentCooldownDirectionalShild.Buff_TekStriderAttachmentCooldownDirectionalShild_C.ExecuteUbergraph_Buff_TekStriderAttachmentCooldownDirectionalShild");

	ABuff_TekStriderAttachmentCooldownDirectionalShild_C_ExecuteUbergraph_Buff_TekStriderAttachmentCooldownDirectionalShild_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
