// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Daeodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Daeodon.DinoEntry_Daeodon_C.ExecuteUbergraph_DinoEntry_Daeodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Daeodon_C::ExecuteUbergraph_DinoEntry_Daeodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Daeodon.DinoEntry_Daeodon_C.ExecuteUbergraph_DinoEntry_Daeodon");

	UDinoEntry_Daeodon_C_ExecuteUbergraph_DinoEntry_Daeodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
