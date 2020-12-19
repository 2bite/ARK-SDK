// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_SwimShirt_DinoOrnaments_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_SwimShirt_DinoOrnaments.PrimalItemSkin_WW_SwimShirt_DinoOrnaments_C.ExecuteUbergraph_PrimalItemSkin_WW_SwimShirt_DinoOrnaments
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_SwimShirt_DinoOrnaments_C::ExecuteUbergraph_PrimalItemSkin_WW_SwimShirt_DinoOrnaments(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_SwimShirt_DinoOrnaments.PrimalItemSkin_WW_SwimShirt_DinoOrnaments_C.ExecuteUbergraph_PrimalItemSkin_WW_SwimShirt_DinoOrnaments");

	UPrimalItemSkin_WW_SwimShirt_DinoOrnaments_C_ExecuteUbergraph_PrimalItemSkin_WW_SwimShirt_DinoOrnaments_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
