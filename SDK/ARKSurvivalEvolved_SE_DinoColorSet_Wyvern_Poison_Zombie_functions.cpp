// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoColorSet_Wyvern_Poison_Zombie_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoColorSet_Wyvern_Poison_Zombie.SE_DinoColorSet_Wyvern_Poison_Zombie_C.ExecuteUbergraph_SE_DinoColorSet_Wyvern_Poison_Zombie
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoColorSet_Wyvern_Poison_Zombie_C::ExecuteUbergraph_SE_DinoColorSet_Wyvern_Poison_Zombie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoColorSet_Wyvern_Poison_Zombie.SE_DinoColorSet_Wyvern_Poison_Zombie_C.ExecuteUbergraph_SE_DinoColorSet_Wyvern_Poison_Zombie");

	USE_DinoColorSet_Wyvern_Poison_Zombie_C_ExecuteUbergraph_SE_DinoColorSet_Wyvern_Poison_Zombie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
