// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_MulticraftItem_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_MulticraftItem_Base.PrimalItemConsumable_MulticraftItem_Base_C.ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_MulticraftItem_Base_C::ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_MulticraftItem_Base.PrimalItemConsumable_MulticraftItem_Base_C.ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_Base");

	UPrimalItemConsumable_MulticraftItem_Base_C_ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
