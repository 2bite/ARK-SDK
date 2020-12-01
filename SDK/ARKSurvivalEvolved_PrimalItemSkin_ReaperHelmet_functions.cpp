// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ReaperHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ReaperHelmet.PrimalItemSkin_ReaperHelmet_C.ExecuteUbergraph_PrimalItemSkin_ReaperHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ReaperHelmet_C::ExecuteUbergraph_PrimalItemSkin_ReaperHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ReaperHelmet.PrimalItemSkin_ReaperHelmet_C.ExecuteUbergraph_PrimalItemSkin_ReaperHelmet");

	UPrimalItemSkin_ReaperHelmet_C_ExecuteUbergraph_PrimalItemSkin_ReaperHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
