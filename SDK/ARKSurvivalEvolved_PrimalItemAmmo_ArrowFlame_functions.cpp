// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_ArrowFlame_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_ArrowFlame.PrimalItemAmmo_ArrowFlame_C.ExecuteUbergraph_PrimalItemAmmo_ArrowFlame
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_ArrowFlame_C::ExecuteUbergraph_PrimalItemAmmo_ArrowFlame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_ArrowFlame.PrimalItemAmmo_ArrowFlame_C.ExecuteUbergraph_PrimalItemAmmo_ArrowFlame");

	UPrimalItemAmmo_ArrowFlame_C_ExecuteUbergraph_PrimalItemAmmo_ArrowFlame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
