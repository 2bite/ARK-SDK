// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_AggroTranqDart_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_AggroTranqDart.PrimalItemAmmo_AggroTranqDart_C.ExecuteUbergraph_PrimalItemAmmo_AggroTranqDart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_AggroTranqDart_C::ExecuteUbergraph_PrimalItemAmmo_AggroTranqDart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_AggroTranqDart.PrimalItemAmmo_AggroTranqDart_C.ExecuteUbergraph_PrimalItemAmmo_AggroTranqDart");

	UPrimalItemAmmo_AggroTranqDart_C_ExecuteUbergraph_PrimalItemAmmo_AggroTranqDart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
