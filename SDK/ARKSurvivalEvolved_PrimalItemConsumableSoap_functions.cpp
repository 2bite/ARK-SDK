// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableSoap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumableSoap.PrimalItemConsumableSoap_C.ExecuteUbergraph_PrimalItemConsumableSoap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableSoap_C::ExecuteUbergraph_PrimalItemConsumableSoap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableSoap.PrimalItemConsumableSoap_C.ExecuteUbergraph_PrimalItemConsumableSoap");

	UPrimalItemConsumableSoap_C_ExecuteUbergraph_PrimalItemConsumableSoap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
