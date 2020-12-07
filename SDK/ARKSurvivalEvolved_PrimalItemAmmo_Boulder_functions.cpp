// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_Boulder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_Boulder.PrimalItemAmmo_Boulder_C.ExecuteUbergraph_PrimalItemAmmo_Boulder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_Boulder_C::ExecuteUbergraph_PrimalItemAmmo_Boulder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_Boulder.PrimalItemAmmo_Boulder_C.ExecuteUbergraph_PrimalItemAmmo_Boulder");

	UPrimalItemAmmo_Boulder_C_ExecuteUbergraph_PrimalItemAmmo_Boulder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
