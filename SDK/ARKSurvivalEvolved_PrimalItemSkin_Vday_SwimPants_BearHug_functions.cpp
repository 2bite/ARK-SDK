// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Vday_SwimPants_BearHug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Vday_SwimPants_BearHug.PrimalItemSkin_Vday_SwimPants_BearHug_C.ExecuteUbergraph_PrimalItemSkin_Vday_SwimPants_BearHug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Vday_SwimPants_BearHug_C::ExecuteUbergraph_PrimalItemSkin_Vday_SwimPants_BearHug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Vday_SwimPants_BearHug.PrimalItemSkin_Vday_SwimPants_BearHug_C.ExecuteUbergraph_PrimalItemSkin_Vday_SwimPants_BearHug");

	UPrimalItemSkin_Vday_SwimPants_BearHug_C_ExecuteUbergraph_PrimalItemSkin_Vday_SwimPants_BearHug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
