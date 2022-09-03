// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlug_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BrainSlug_AnimBlueprint.BrainSlug_AnimBlueprint_C.ExecuteUbergraph_BrainSlug_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBrainSlug_AnimBlueprint_C::ExecuteUbergraph_BrainSlug_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_AnimBlueprint.BrainSlug_AnimBlueprint_C.ExecuteUbergraph_BrainSlug_AnimBlueprint");

	UBrainSlug_AnimBlueprint_C_ExecuteUbergraph_BrainSlug_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
