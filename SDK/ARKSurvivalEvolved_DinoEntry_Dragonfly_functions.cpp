// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Dragonfly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Dragonfly.DinoEntry_Dragonfly_C.ExecuteUbergraph_DinoEntry_Dragonfly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Dragonfly_C::ExecuteUbergraph_DinoEntry_Dragonfly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Dragonfly.DinoEntry_Dragonfly_C.ExecuteUbergraph_DinoEntry_Dragonfly");

	UDinoEntry_Dragonfly_C_ExecuteUbergraph_DinoEntry_Dragonfly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
