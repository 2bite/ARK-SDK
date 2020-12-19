// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostumeGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostumeGeneric.PrimalItemCostumeGeneric_C.ExecuteUbergraph_PrimalItemCostumeGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostumeGeneric_C::ExecuteUbergraph_PrimalItemCostumeGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostumeGeneric.PrimalItemCostumeGeneric_C.ExecuteUbergraph_PrimalItemCostumeGeneric");

	UPrimalItemCostumeGeneric_C_ExecuteUbergraph_PrimalItemCostumeGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
