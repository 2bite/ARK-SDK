// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkinGeneric_Trophy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkinGeneric_Trophy.PrimalItemSkinGeneric_Trophy_C.ExecuteUbergraph_PrimalItemSkinGeneric_Trophy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkinGeneric_Trophy_C::ExecuteUbergraph_PrimalItemSkinGeneric_Trophy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkinGeneric_Trophy.PrimalItemSkinGeneric_Trophy_C.ExecuteUbergraph_PrimalItemSkinGeneric_Trophy");

	UPrimalItemSkinGeneric_Trophy_C_ExecuteUbergraph_PrimalItemSkinGeneric_Trophy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
