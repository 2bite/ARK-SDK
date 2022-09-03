// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SwimPants_Dodo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_SwimPants_Dodo.PrimalItemSkin_SwimPants_Dodo_C.ExecuteUbergraph_PrimalItemSkin_SwimPants_Dodo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SwimPants_Dodo_C::ExecuteUbergraph_PrimalItemSkin_SwimPants_Dodo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SwimPants_Dodo.PrimalItemSkin_SwimPants_Dodo_C.ExecuteUbergraph_PrimalItemSkin_SwimPants_Dodo");

	UPrimalItemSkin_SwimPants_Dodo_C_ExecuteUbergraph_PrimalItemSkin_SwimPants_Dodo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
