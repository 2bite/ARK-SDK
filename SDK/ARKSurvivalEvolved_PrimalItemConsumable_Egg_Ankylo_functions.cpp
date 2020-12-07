// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Ankylo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Ankylo.PrimalItemConsumable_Egg_Ankylo_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Ankylo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Ankylo_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Ankylo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Ankylo.PrimalItemConsumable_Egg_Ankylo_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Ankylo");

	UPrimalItemConsumable_Egg_Ankylo_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Ankylo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
