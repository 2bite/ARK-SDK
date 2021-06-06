// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ScrapMetalIngot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ScrapMetalIngot.PrimalItemResource_ScrapMetalIngot_C.ExecuteUbergraph_PrimalItemResource_ScrapMetalIngot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ScrapMetalIngot_C::ExecuteUbergraph_PrimalItemResource_ScrapMetalIngot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ScrapMetalIngot.PrimalItemResource_ScrapMetalIngot_C.ExecuteUbergraph_PrimalItemResource_ScrapMetalIngot");

	UPrimalItemResource_ScrapMetalIngot_C_ExecuteUbergraph_PrimalItemResource_ScrapMetalIngot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
