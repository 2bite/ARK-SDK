// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZombieWyvernAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZombieWyvernAnimBlueprint.ZombieWyvernAnimBlueprint_C.ExecuteUbergraph_ZombieWyvernAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UZombieWyvernAnimBlueprint_C::ExecuteUbergraph_ZombieWyvernAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZombieWyvernAnimBlueprint.ZombieWyvernAnimBlueprint_C.ExecuteUbergraph_ZombieWyvernAnimBlueprint");

	UZombieWyvernAnimBlueprint_C_ExecuteUbergraph_ZombieWyvernAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
