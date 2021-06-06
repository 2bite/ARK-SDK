// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_ChainBola_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_ChainBola.PrimalItemAmmo_ChainBola_C.ExecuteUbergraph_PrimalItemAmmo_ChainBola
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_ChainBola_C::ExecuteUbergraph_PrimalItemAmmo_ChainBola(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_ChainBola.PrimalItemAmmo_ChainBola_C.ExecuteUbergraph_PrimalItemAmmo_ChainBola");

	UPrimalItemAmmo_ChainBola_C_ExecuteUbergraph_PrimalItemAmmo_ChainBola_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
