// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Dragonfly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Dragonfly.DinoColorSet_Dragonfly_C.ExecuteUbergraph_DinoColorSet_Dragonfly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Dragonfly_C::ExecuteUbergraph_DinoColorSet_Dragonfly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Dragonfly.DinoColorSet_Dragonfly_C.ExecuteUbergraph_DinoColorSet_Dragonfly");

	UDinoColorSet_Dragonfly_C_ExecuteUbergraph_DinoColorSet_Dragonfly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
