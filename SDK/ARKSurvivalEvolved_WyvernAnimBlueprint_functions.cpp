// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvernAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvernAnimBlueprint.WyvernAnimBlueprint_C.ExecuteUbergraph_WyvernAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWyvernAnimBlueprint_C::ExecuteUbergraph_WyvernAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernAnimBlueprint.WyvernAnimBlueprint_C.ExecuteUbergraph_WyvernAnimBlueprint");

	UWyvernAnimBlueprint_C_ExecuteUbergraph_WyvernAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
