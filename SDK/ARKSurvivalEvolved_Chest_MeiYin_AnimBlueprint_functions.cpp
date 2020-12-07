// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Chest_MeiYin_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Chest_MeiYin_AnimBlueprint.Chest_MeiYin_AnimBlueprint_C.ExecuteUbergraph_Chest_MeiYin_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChest_MeiYin_AnimBlueprint_C::ExecuteUbergraph_Chest_MeiYin_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chest_MeiYin_AnimBlueprint.Chest_MeiYin_AnimBlueprint_C.ExecuteUbergraph_Chest_MeiYin_AnimBlueprint");

	UChest_MeiYin_AnimBlueprint_C_ExecuteUbergraph_Chest_MeiYin_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
