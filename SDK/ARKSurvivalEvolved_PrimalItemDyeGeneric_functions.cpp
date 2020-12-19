// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDyeGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDyeGeneric.PrimalItemDyeGeneric_C.ExecuteUbergraph_PrimalItemDyeGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDyeGeneric_C::ExecuteUbergraph_PrimalItemDyeGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDyeGeneric.PrimalItemDyeGeneric_C.ExecuteUbergraph_PrimalItemDyeGeneric");

	UPrimalItemDyeGeneric_C_ExecuteUbergraph_PrimalItemDyeGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
