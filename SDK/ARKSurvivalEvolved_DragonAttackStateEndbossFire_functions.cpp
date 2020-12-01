// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DragonAttackStateEndbossFire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DragonAttackStateEndbossFire.DragonAttackStateEndBossFire_C.ExecuteUbergraph_DragonAttackStateEndBossFire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDragonAttackStateEndBossFire_C::ExecuteUbergraph_DragonAttackStateEndBossFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonAttackStateEndbossFire.DragonAttackStateEndBossFire_C.ExecuteUbergraph_DragonAttackStateEndBossFire");

	UDragonAttackStateEndBossFire_C_ExecuteUbergraph_DragonAttackStateEndBossFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
