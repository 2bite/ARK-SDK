// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Dimorphodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Dimorphodon.DinoEntry_Dimorphodon_C.ExecuteUbergraph_DinoEntry_Dimorphodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Dimorphodon_C::ExecuteUbergraph_DinoEntry_Dimorphodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Dimorphodon.DinoEntry_Dimorphodon_C.ExecuteUbergraph_DinoEntry_Dimorphodon");

	UDinoEntry_Dimorphodon_C_ExecuteUbergraph_DinoEntry_Dimorphodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
