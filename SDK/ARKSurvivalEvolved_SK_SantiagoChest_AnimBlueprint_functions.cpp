// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_SantiagoChest_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_SantiagoChest_AnimBlueprint.SK_SantiagoChest_AnimBlueprint_C.ExecuteUbergraph_SK_SantiagoChest_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_SantiagoChest_AnimBlueprint_C::ExecuteUbergraph_SK_SantiagoChest_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_SantiagoChest_AnimBlueprint.SK_SantiagoChest_AnimBlueprint_C.ExecuteUbergraph_SK_SantiagoChest_AnimBlueprint");

	USK_SantiagoChest_AnimBlueprint_C_ExecuteUbergraph_SK_SantiagoChest_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
