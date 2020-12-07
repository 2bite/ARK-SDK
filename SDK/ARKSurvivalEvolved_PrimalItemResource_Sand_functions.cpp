// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Sand_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Sand.PrimalItemResource_Sand_C.ExecuteUbergraph_PrimalItemResource_Sand
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Sand_C::ExecuteUbergraph_PrimalItemResource_Sand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Sand.PrimalItemResource_Sand_C.ExecuteUbergraph_PrimalItemResource_Sand");

	UPrimalItemResource_Sand_C_ExecuteUbergraph_PrimalItemResource_Sand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
