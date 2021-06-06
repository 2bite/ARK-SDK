// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Costume_MutatedSurvivor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Costume_MutatedSurvivor.PrimalItemSkin_Costume_MutatedSurvivor_C.ExecuteUbergraph_PrimalItemSkin_Costume_MutatedSurvivor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Costume_MutatedSurvivor_C::ExecuteUbergraph_PrimalItemSkin_Costume_MutatedSurvivor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_MutatedSurvivor.PrimalItemSkin_Costume_MutatedSurvivor_C.ExecuteUbergraph_PrimalItemSkin_Costume_MutatedSurvivor");

	UPrimalItemSkin_Costume_MutatedSurvivor_C_ExecuteUbergraph_PrimalItemSkin_Costume_MutatedSurvivor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
