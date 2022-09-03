// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_DinoSantaHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_DinoSantaHat.PrimalItemSkin_DinoSantaHat_C.ExecuteUbergraph_PrimalItemSkin_DinoSantaHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_DinoSantaHat_C::ExecuteUbergraph_PrimalItemSkin_DinoSantaHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_DinoSantaHat.PrimalItemSkin_DinoSantaHat_C.ExecuteUbergraph_PrimalItemSkin_DinoSantaHat");

	UPrimalItemSkin_DinoSantaHat_C_ExecuteUbergraph_PrimalItemSkin_DinoSantaHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
