// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockHairstyle_Facial_Romantic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockHairstyle_Facial_Romantic.PrimalItemConsumable_UnlockHairstyle_Facial_Romantic_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHairstyle_Facial_Romantic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockHairstyle_Facial_Romantic_C::ExecuteUbergraph_PrimalItemConsumable_UnlockHairstyle_Facial_Romantic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockHairstyle_Facial_Romantic.PrimalItemConsumable_UnlockHairstyle_Facial_Romantic_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHairstyle_Facial_Romantic");

	UPrimalItemConsumable_UnlockHairstyle_Facial_Romantic_C_ExecuteUbergraph_PrimalItemConsumable_UnlockHairstyle_Facial_Romantic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
