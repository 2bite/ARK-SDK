// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_AlphaTuso_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_AlphaTuso.PrimalItemResource_ApexDrop_AlphaTuso_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaTuso
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_AlphaTuso_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaTuso(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_AlphaTuso.PrimalItemResource_ApexDrop_AlphaTuso_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaTuso");

	UPrimalItemResource_ApexDrop_AlphaTuso_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaTuso_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
