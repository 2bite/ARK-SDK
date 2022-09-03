// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoColorSet_Wyvern_Poison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoColorSet_Wyvern_Poison.SE_DinoColorSet_Wyvern_Poison_C.ExecuteUbergraph_SE_DinoColorSet_Wyvern_Poison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoColorSet_Wyvern_Poison_C::ExecuteUbergraph_SE_DinoColorSet_Wyvern_Poison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoColorSet_Wyvern_Poison.SE_DinoColorSet_Wyvern_Poison_C.ExecuteUbergraph_SE_DinoColorSet_Wyvern_Poison");

	USE_DinoColorSet_Wyvern_Poison_C_ExecuteUbergraph_SE_DinoColorSet_Wyvern_Poison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
