// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_CannonShell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_CannonShell.PrimalItemAmmo_CannonShell_C.ExecuteUbergraph_PrimalItemAmmo_CannonShell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_CannonShell_C::ExecuteUbergraph_PrimalItemAmmo_CannonShell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_CannonShell.PrimalItemAmmo_CannonShell_C.ExecuteUbergraph_PrimalItemAmmo_CannonShell");

	UPrimalItemAmmo_CannonShell_C_ExecuteUbergraph_PrimalItemAmmo_CannonShell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
