// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_RawMeat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_RawMeat.PrimalItemConsumable_RawMeat_C.ExecuteUbergraph_PrimalItemConsumable_RawMeat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_RawMeat_C::ExecuteUbergraph_PrimalItemConsumable_RawMeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_RawMeat.PrimalItemConsumable_RawMeat_C.ExecuteUbergraph_PrimalItemConsumable_RawMeat");

	UPrimalItemConsumable_RawMeat_C_ExecuteUbergraph_PrimalItemConsumable_RawMeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
