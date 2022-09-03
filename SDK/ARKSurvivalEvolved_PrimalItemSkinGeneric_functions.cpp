// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkinGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkinGeneric.PrimalItemSkinGeneric_C.ExecuteUbergraph_PrimalItemSkinGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkinGeneric_C::ExecuteUbergraph_PrimalItemSkinGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkinGeneric.PrimalItemSkinGeneric_C.ExecuteUbergraph_PrimalItemSkinGeneric");

	UPrimalItemSkinGeneric_C_ExecuteUbergraph_PrimalItemSkinGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
