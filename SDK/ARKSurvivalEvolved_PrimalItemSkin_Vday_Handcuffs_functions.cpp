// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Vday_Handcuffs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Vday_Handcuffs.PrimalItemSkin_Vday_Handcuffs_C.ExecuteUbergraph_PrimalItemSkin_Vday_Handcuffs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Vday_Handcuffs_C::ExecuteUbergraph_PrimalItemSkin_Vday_Handcuffs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Vday_Handcuffs.PrimalItemSkin_Vday_Handcuffs_C.ExecuteUbergraph_PrimalItemSkin_Vday_Handcuffs");

	UPrimalItemSkin_Vday_Handcuffs_C_ExecuteUbergraph_PrimalItemSkin_Vday_Handcuffs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
