// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_LeechBlood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_LeechBlood.PrimalItemResource_LeechBlood_C.ExecuteUbergraph_PrimalItemResource_LeechBlood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_LeechBlood_C::ExecuteUbergraph_PrimalItemResource_LeechBlood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_LeechBlood.PrimalItemResource_LeechBlood_C.ExecuteUbergraph_PrimalItemResource_LeechBlood");

	UPrimalItemResource_LeechBlood_C_ExecuteUbergraph_PrimalItemResource_LeechBlood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
