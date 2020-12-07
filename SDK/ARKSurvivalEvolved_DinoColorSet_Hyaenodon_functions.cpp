// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Hyaenodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Hyaenodon.DinoColorSet_Hyaenodon_C.ExecuteUbergraph_DinoColorSet_Hyaenodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Hyaenodon_C::ExecuteUbergraph_DinoColorSet_Hyaenodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Hyaenodon.DinoColorSet_Hyaenodon_C.ExecuteUbergraph_DinoColorSet_Hyaenodon");

	UDinoColorSet_Hyaenodon_C_ExecuteUbergraph_DinoColorSet_Hyaenodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
