// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_GrapplingHook_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_GrapplingHook.PrimalItemAmmo_GrapplingHook_C.ExecuteUbergraph_PrimalItemAmmo_GrapplingHook
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_GrapplingHook_C::ExecuteUbergraph_PrimalItemAmmo_GrapplingHook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_GrapplingHook.PrimalItemAmmo_GrapplingHook_C.ExecuteUbergraph_PrimalItemAmmo_GrapplingHook");

	UPrimalItemAmmo_GrapplingHook_C_ExecuteUbergraph_PrimalItemAmmo_GrapplingHook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
