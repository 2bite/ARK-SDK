// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_MetalIngot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_MetalIngot.PrimalItemResource_MetalIngot_C.ExecuteUbergraph_PrimalItemResource_MetalIngot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_MetalIngot_C::ExecuteUbergraph_PrimalItemResource_MetalIngot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_MetalIngot.PrimalItemResource_MetalIngot_C.ExecuteUbergraph_PrimalItemResource_MetalIngot");

	UPrimalItemResource_MetalIngot_C_ExecuteUbergraph_PrimalItemResource_MetalIngot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
