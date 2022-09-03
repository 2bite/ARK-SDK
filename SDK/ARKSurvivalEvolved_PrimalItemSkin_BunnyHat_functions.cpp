// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_BunnyHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_BunnyHat.PrimalItemSkin_BunnyHat_C.ExecuteUbergraph_PrimalItemSkin_BunnyHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_BunnyHat_C::ExecuteUbergraph_PrimalItemSkin_BunnyHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_BunnyHat.PrimalItemSkin_BunnyHat_C.ExecuteUbergraph_PrimalItemSkin_BunnyHat");

	UPrimalItemSkin_BunnyHat_C_ExecuteUbergraph_PrimalItemSkin_BunnyHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
