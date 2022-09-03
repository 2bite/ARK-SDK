// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ManticoreHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ManticoreHelmet.PrimalItemSkin_ManticoreHelmet_C.ExecuteUbergraph_PrimalItemSkin_ManticoreHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ManticoreHelmet_C::ExecuteUbergraph_PrimalItemSkin_ManticoreHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ManticoreHelmet.PrimalItemSkin_ManticoreHelmet_C.ExecuteUbergraph_PrimalItemSkin_ManticoreHelmet");

	UPrimalItemSkin_ManticoreHelmet_C_ExecuteUbergraph_PrimalItemSkin_ManticoreHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
