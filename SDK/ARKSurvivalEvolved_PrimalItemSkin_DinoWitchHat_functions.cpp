// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_DinoWitchHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_DinoWitchHat.PrimalItemSkin_DinoWitchHat_C.ExecuteUbergraph_PrimalItemSkin_DinoWitchHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_DinoWitchHat_C::ExecuteUbergraph_PrimalItemSkin_DinoWitchHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_DinoWitchHat.PrimalItemSkin_DinoWitchHat_C.ExecuteUbergraph_PrimalItemSkin_DinoWitchHat");

	UPrimalItemSkin_DinoWitchHat_C_ExecuteUbergraph_PrimalItemSkin_DinoWitchHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
