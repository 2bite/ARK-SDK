// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Phoenix_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Phoenix_AnimBlueprint.Phoenix_AnimBlueprint_C.ExecuteUbergraph_Phoenix_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPhoenix_AnimBlueprint_C::ExecuteUbergraph_Phoenix_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_AnimBlueprint.Phoenix_AnimBlueprint_C.ExecuteUbergraph_Phoenix_AnimBlueprint");

	UPhoenix_AnimBlueprint_C_ExecuteUbergraph_Phoenix_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
