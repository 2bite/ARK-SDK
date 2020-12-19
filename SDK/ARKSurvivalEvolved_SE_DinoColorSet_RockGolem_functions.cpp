// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoColorSet_RockGolem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoColorSet_RockGolem.SE_DinoColorSet_RockGolem_C.ExecuteUbergraph_SE_DinoColorSet_RockGolem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoColorSet_RockGolem_C::ExecuteUbergraph_SE_DinoColorSet_RockGolem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoColorSet_RockGolem.SE_DinoColorSet_RockGolem_C.ExecuteUbergraph_SE_DinoColorSet_RockGolem");

	USE_DinoColorSet_RockGolem_C_ExecuteUbergraph_SE_DinoColorSet_RockGolem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
