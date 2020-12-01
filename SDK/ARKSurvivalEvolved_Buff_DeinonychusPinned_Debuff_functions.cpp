// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DeinonychusPinned_Debuff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DeinonychusPinned_Debuff.Buff_DeinonychusPinned_Debuff_C.UserConstructionScript
// ()

void ABuff_DeinonychusPinned_Debuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DeinonychusPinned_Debuff.Buff_DeinonychusPinned_Debuff_C.UserConstructionScript");

	ABuff_DeinonychusPinned_Debuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DeinonychusPinned_Debuff.Buff_DeinonychusPinned_Debuff_C.ExecuteUbergraph_Buff_DeinonychusPinned_Debuff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DeinonychusPinned_Debuff_C::ExecuteUbergraph_Buff_DeinonychusPinned_Debuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DeinonychusPinned_Debuff.Buff_DeinonychusPinned_Debuff_C.ExecuteUbergraph_Buff_DeinonychusPinned_Debuff");

	ABuff_DeinonychusPinned_Debuff_C_ExecuteUbergraph_Buff_DeinonychusPinned_Debuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
