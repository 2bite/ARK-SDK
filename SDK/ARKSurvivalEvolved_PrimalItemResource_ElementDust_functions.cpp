// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ElementDust_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ElementDust.PrimalItemResource_ElementDust_C.ExecuteUbergraph_PrimalItemResource_ElementDust
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ElementDust_C::ExecuteUbergraph_PrimalItemResource_ElementDust(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementDust.PrimalItemResource_ElementDust_C.ExecuteUbergraph_PrimalItemResource_ElementDust");

	UPrimalItemResource_ElementDust_C_ExecuteUbergraph_PrimalItemResource_ElementDust_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
