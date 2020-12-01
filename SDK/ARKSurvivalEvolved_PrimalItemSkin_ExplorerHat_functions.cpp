// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ExplorerHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ExplorerHat.PrimalItemSkin_ExplorerHat_C.ExecuteUbergraph_PrimalItemSkin_ExplorerHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ExplorerHat_C::ExecuteUbergraph_PrimalItemSkin_ExplorerHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ExplorerHat.PrimalItemSkin_ExplorerHat_C.ExecuteUbergraph_PrimalItemSkin_ExplorerHat");

	UPrimalItemSkin_ExplorerHat_C_ExecuteUbergraph_PrimalItemSkin_ExplorerHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
