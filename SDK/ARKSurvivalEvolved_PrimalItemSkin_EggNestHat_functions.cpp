// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_EggNestHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_EggNestHat.PrimalItemSkin_EggNestHat_C.ExecuteUbergraph_PrimalItemSkin_EggNestHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_EggNestHat_C::ExecuteUbergraph_PrimalItemSkin_EggNestHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_EggNestHat.PrimalItemSkin_EggNestHat_C.ExecuteUbergraph_PrimalItemSkin_EggNestHat");

	UPrimalItemSkin_EggNestHat_C_ExecuteUbergraph_PrimalItemSkin_EggNestHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
