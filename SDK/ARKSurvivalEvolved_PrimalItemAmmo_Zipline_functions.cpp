// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_Zipline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_Zipline.PrimalItemAmmo_Zipline_C.ExecuteUbergraph_PrimalItemAmmo_Zipline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_Zipline_C::ExecuteUbergraph_PrimalItemAmmo_Zipline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_Zipline.PrimalItemAmmo_Zipline_C.ExecuteUbergraph_PrimalItemAmmo_Zipline");

	UPrimalItemAmmo_Zipline_C_ExecuteUbergraph_PrimalItemAmmo_Zipline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
