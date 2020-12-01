// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Meat_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Meat_Base.PrimalItemConsumable_Meat_Base_C.ExecuteUbergraph_PrimalItemConsumable_Meat_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Meat_Base_C::ExecuteUbergraph_PrimalItemConsumable_Meat_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Meat_Base.PrimalItemConsumable_Meat_Base_C.ExecuteUbergraph_PrimalItemConsumable_Meat_Base");

	UPrimalItemConsumable_Meat_Base_C_ExecuteUbergraph_PrimalItemConsumable_Meat_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
