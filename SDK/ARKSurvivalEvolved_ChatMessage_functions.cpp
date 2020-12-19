// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChatMessage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChatMessage.ChatMessage_C.ExecuteUbergraph_ChatMessage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChatMessage_C::ExecuteUbergraph_ChatMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatMessage.ChatMessage_C.ExecuteUbergraph_ChatMessage");

	UChatMessage_C_ExecuteUbergraph_ChatMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
