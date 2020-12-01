// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_TranqSpearBolt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_TranqSpearBolt.PrimalItemAmmo_TranqSpearBolt_C.ExecuteUbergraph_PrimalItemAmmo_TranqSpearBolt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_TranqSpearBolt_C::ExecuteUbergraph_PrimalItemAmmo_TranqSpearBolt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_TranqSpearBolt.PrimalItemAmmo_TranqSpearBolt_C.ExecuteUbergraph_PrimalItemAmmo_TranqSpearBolt");

	UPrimalItemAmmo_TranqSpearBolt_C_ExecuteUbergraph_PrimalItemAmmo_TranqSpearBolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
