// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WerewolfHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WerewolfHat.PrimalItemSkin_WerewolfHat_C.ExecuteUbergraph_PrimalItemSkin_WerewolfHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WerewolfHat_C::ExecuteUbergraph_PrimalItemSkin_WerewolfHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WerewolfHat.PrimalItemSkin_WerewolfHat_C.ExecuteUbergraph_PrimalItemSkin_WerewolfHat");

	UPrimalItemSkin_WerewolfHat_C_ExecuteUbergraph_PrimalItemSkin_WerewolfHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
