// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_BallistaArrow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_BallistaArrow.PrimalItemAmmo_BallistaArrow_C.ExecuteUbergraph_PrimalItemAmmo_BallistaArrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_BallistaArrow_C::ExecuteUbergraph_PrimalItemAmmo_BallistaArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_BallistaArrow.PrimalItemAmmo_BallistaArrow_C.ExecuteUbergraph_PrimalItemAmmo_BallistaArrow");

	UPrimalItemAmmo_BallistaArrow_C_ExecuteUbergraph_PrimalItemAmmo_BallistaArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
