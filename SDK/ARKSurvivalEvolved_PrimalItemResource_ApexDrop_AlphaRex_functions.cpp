// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_AlphaRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_AlphaRex.PrimalItemResource_ApexDrop_AlphaRex_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_AlphaRex_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_AlphaRex.PrimalItemResource_ApexDrop_AlphaRex_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaRex");

	UPrimalItemResource_ApexDrop_AlphaRex_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
