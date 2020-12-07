// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_RefinedTranqDart_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_RefinedTranqDart.PrimalItemAmmo_RefinedTranqDart_C.ExecuteUbergraph_PrimalItemAmmo_RefinedTranqDart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_RefinedTranqDart_C::ExecuteUbergraph_PrimalItemAmmo_RefinedTranqDart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_RefinedTranqDart.PrimalItemAmmo_RefinedTranqDart_C.ExecuteUbergraph_PrimalItemAmmo_RefinedTranqDart");

	UPrimalItemAmmo_RefinedTranqDart_C_ExecuteUbergraph_PrimalItemAmmo_RefinedTranqDart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
