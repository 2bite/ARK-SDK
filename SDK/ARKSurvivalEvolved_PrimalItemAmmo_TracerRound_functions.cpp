// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_TracerRound_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_TracerRound.PrimalItemAmmo_TracerRound_C.ExecuteUbergraph_PrimalItemAmmo_TracerRound
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_TracerRound_C::ExecuteUbergraph_PrimalItemAmmo_TracerRound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_TracerRound.PrimalItemAmmo_TracerRound_C.ExecuteUbergraph_PrimalItemAmmo_TracerRound");

	UPrimalItemAmmo_TracerRound_C_ExecuteUbergraph_PrimalItemAmmo_TracerRound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
