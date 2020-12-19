// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_DinoPoopSmall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_DinoPoopSmall.PrimalItemConsumable_DinoPoopSmall_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopSmall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_DinoPoopSmall_C::ExecuteUbergraph_PrimalItemConsumable_DinoPoopSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_DinoPoopSmall.PrimalItemConsumable_DinoPoopSmall_C.ExecuteUbergraph_PrimalItemConsumable_DinoPoopSmall");

	UPrimalItemConsumable_DinoPoopSmall_C_ExecuteUbergraph_PrimalItemConsumable_DinoPoopSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
