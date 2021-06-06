// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_NetGunGen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_NetGunGen.PrimalItemAmmo_NetGunGen_C.ExecuteUbergraph_PrimalItemAmmo_NetGunGen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_NetGunGen_C::ExecuteUbergraph_PrimalItemAmmo_NetGunGen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_NetGunGen.PrimalItemAmmo_NetGunGen_C.ExecuteUbergraph_PrimalItemAmmo_NetGunGen");

	UPrimalItemAmmo_NetGunGen_C_ExecuteUbergraph_PrimalItemAmmo_NetGunGen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
