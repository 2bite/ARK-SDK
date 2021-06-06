// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_BoneHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_BoneHelmet.PrimalItemSkin_BoneHelmet_C.ExecuteUbergraph_PrimalItemSkin_BoneHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_BoneHelmet_C::ExecuteUbergraph_PrimalItemSkin_BoneHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_BoneHelmet.PrimalItemSkin_BoneHelmet_C.ExecuteUbergraph_PrimalItemSkin_BoneHelmet");

	UPrimalItemSkin_BoneHelmet_C_ExecuteUbergraph_PrimalItemSkin_BoneHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
