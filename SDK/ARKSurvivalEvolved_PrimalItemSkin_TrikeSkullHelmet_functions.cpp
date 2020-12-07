// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TrikeSkullHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TrikeSkullHelmet.PrimalItemSkin_TrikeSkullHelmet_C.ExecuteUbergraph_PrimalItemSkin_TrikeSkullHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TrikeSkullHelmet_C::ExecuteUbergraph_PrimalItemSkin_TrikeSkullHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TrikeSkullHelmet.PrimalItemSkin_TrikeSkullHelmet_C.ExecuteUbergraph_PrimalItemSkin_TrikeSkullHelmet");

	UPrimalItemSkin_TrikeSkullHelmet_C_ExecuteUbergraph_PrimalItemSkin_TrikeSkullHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
