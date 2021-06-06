// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_GasBag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_GasBag.PrimalItemResource_ApexDrop_GasBag_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_GasBag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_GasBag_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_GasBag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_GasBag.PrimalItemResource_ApexDrop_GasBag_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_GasBag");

	UPrimalItemResource_ApexDrop_GasBag_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_GasBag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
