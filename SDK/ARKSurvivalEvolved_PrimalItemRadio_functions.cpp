// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemRadio_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemRadio.PrimalItemRadio_C.ExecuteUbergraph_PrimalItemRadio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemRadio_C::ExecuteUbergraph_PrimalItemRadio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemRadio.PrimalItemRadio_C.ExecuteUbergraph_PrimalItemRadio");

	UPrimalItemRadio_C_ExecuteUbergraph_PrimalItemRadio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
