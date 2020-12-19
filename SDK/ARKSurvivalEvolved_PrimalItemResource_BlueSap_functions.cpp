// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_BlueSap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_BlueSap.PrimalItemResource_BlueSap_C.ExecuteUbergraph_PrimalItemResource_BlueSap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_BlueSap_C::ExecuteUbergraph_PrimalItemResource_BlueSap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_BlueSap.PrimalItemResource_BlueSap_C.ExecuteUbergraph_PrimalItemResource_BlueSap");

	UPrimalItemResource_BlueSap_C_ExecuteUbergraph_PrimalItemResource_BlueSap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
