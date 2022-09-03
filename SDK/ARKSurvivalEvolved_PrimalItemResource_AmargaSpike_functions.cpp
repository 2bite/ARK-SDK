// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_AmargaSpike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_AmargaSpike.PrimalItemResource_AmargaSpike_C.ExecuteUbergraph_PrimalItemResource_AmargaSpike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_AmargaSpike_C::ExecuteUbergraph_PrimalItemResource_AmargaSpike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_AmargaSpike.PrimalItemResource_AmargaSpike_C.ExecuteUbergraph_PrimalItemResource_AmargaSpike");

	UPrimalItemResource_AmargaSpike_C_ExecuteUbergraph_PrimalItemResource_AmargaSpike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
