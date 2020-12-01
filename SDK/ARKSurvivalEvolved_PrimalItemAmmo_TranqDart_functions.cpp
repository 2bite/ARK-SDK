// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_TranqDart_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_TranqDart.PrimalItemAmmo_TranqDart_C.ExecuteUbergraph_PrimalItemAmmo_TranqDart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_TranqDart_C::ExecuteUbergraph_PrimalItemAmmo_TranqDart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_TranqDart.PrimalItemAmmo_TranqDart_C.ExecuteUbergraph_PrimalItemAmmo_TranqDart");

	UPrimalItemAmmo_TranqDart_C_ExecuteUbergraph_PrimalItemAmmo_TranqDart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
