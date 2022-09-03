// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockHair_Facial_VikingBeard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockHair_Facial_VikingBeard.PrimalItemConsumable_UnlockHair_Facial_VikingBeard_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_VikingBeard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockHair_Facial_VikingBeard_C::ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_VikingBeard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockHair_Facial_VikingBeard.PrimalItemConsumable_UnlockHair_Facial_VikingBeard_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_VikingBeard");

	UPrimalItemConsumable_UnlockHair_Facial_VikingBeard_C_ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_VikingBeard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
