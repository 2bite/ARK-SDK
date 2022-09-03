// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_SpoiledMeat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_SpoiledMeat.PrimalItemConsumable_SpoiledMeat_C.ExecuteUbergraph_PrimalItemConsumable_SpoiledMeat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_SpoiledMeat_C::ExecuteUbergraph_PrimalItemConsumable_SpoiledMeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_SpoiledMeat.PrimalItemConsumable_SpoiledMeat_C.ExecuteUbergraph_PrimalItemConsumable_SpoiledMeat");

	UPrimalItemConsumable_SpoiledMeat_C_ExecuteUbergraph_PrimalItemConsumable_SpoiledMeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
