// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Gen1AvatartBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Gen1AvatartBoots.PrimalItemSkin_Gen1AvatartBoots_C.ExecuteUbergraph_PrimalItemSkin_Gen1AvatartBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Gen1AvatartBoots_C::ExecuteUbergraph_PrimalItemSkin_Gen1AvatartBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Gen1AvatartBoots.PrimalItemSkin_Gen1AvatartBoots_C.ExecuteUbergraph_PrimalItemSkin_Gen1AvatartBoots");

	UPrimalItemSkin_Gen1AvatartBoots_C_ExecuteUbergraph_PrimalItemSkin_Gen1AvatartBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
