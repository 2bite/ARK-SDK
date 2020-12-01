// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_RedSap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_RedSap.PrimalItemResource_RedSap_C.ExecuteUbergraph_PrimalItemResource_RedSap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_RedSap_C::ExecuteUbergraph_PrimalItemResource_RedSap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_RedSap.PrimalItemResource_RedSap_C.ExecuteUbergraph_PrimalItemResource_RedSap");

	UPrimalItemResource_RedSap_C_ExecuteUbergraph_PrimalItemResource_RedSap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
