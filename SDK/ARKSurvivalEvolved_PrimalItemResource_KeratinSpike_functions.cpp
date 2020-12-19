// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_KeratinSpike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_KeratinSpike.PrimalItemResource_KeratinSpike_C.ExecuteUbergraph_PrimalItemResource_KeratinSpike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_KeratinSpike_C::ExecuteUbergraph_PrimalItemResource_KeratinSpike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_KeratinSpike.PrimalItemResource_KeratinSpike_C.ExecuteUbergraph_PrimalItemResource_KeratinSpike");

	UPrimalItemResource_KeratinSpike_C_ExecuteUbergraph_PrimalItemResource_KeratinSpike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
