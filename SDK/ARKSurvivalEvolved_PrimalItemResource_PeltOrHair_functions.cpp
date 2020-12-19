// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_PeltOrHair_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_PeltOrHair.PrimalItemResource_PeltOrHair_C.ExecuteUbergraph_PrimalItemResource_PeltOrHair
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_PeltOrHair_C::ExecuteUbergraph_PrimalItemResource_PeltOrHair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_PeltOrHair.PrimalItemResource_PeltOrHair_C.ExecuteUbergraph_PrimalItemResource_PeltOrHair");

	UPrimalItemResource_PeltOrHair_C_ExecuteUbergraph_PrimalItemResource_PeltOrHair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
