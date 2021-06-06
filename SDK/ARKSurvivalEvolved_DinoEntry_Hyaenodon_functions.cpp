// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Hyaenodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Hyaenodon.DinoEntry_Hyaenodon_C.ExecuteUbergraph_DinoEntry_Hyaenodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Hyaenodon_C::ExecuteUbergraph_DinoEntry_Hyaenodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Hyaenodon.DinoEntry_Hyaenodon_C.ExecuteUbergraph_DinoEntry_Hyaenodon");

	UDinoEntry_Hyaenodon_C_ExecuteUbergraph_DinoEntry_Hyaenodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
