// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Turkey_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Turkey_AnimBlueprint.Turkey_AnimBlueprint_C.ExecuteUbergraph_Turkey_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTurkey_AnimBlueprint_C::ExecuteUbergraph_Turkey_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Turkey_AnimBlueprint.Turkey_AnimBlueprint_C.ExecuteUbergraph_Turkey_AnimBlueprint");

	UTurkey_AnimBlueprint_C_ExecuteUbergraph_Turkey_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
