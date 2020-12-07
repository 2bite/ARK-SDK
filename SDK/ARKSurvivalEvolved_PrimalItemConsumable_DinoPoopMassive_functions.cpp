// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_DinoPoopMassive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_DinoPoopMassive.PrimalItemConsumable_DinoPoopMassive_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopMassive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_DinoPoopMassive_C::ExecuteUbergraph_PrimalItemConsumable_DinoPoopMassive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_DinoPoopMassive.PrimalItemConsumable_DinoPoopMassive_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopMassive");

	UPrimalItemConsumable_DinoPoopMassive_C_ExecuteUbergraph_PrimalItemConsumable_DinoPoopMassive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
