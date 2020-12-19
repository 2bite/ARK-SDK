// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SummerSwimShirt_IslandRetreat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_SummerSwimShirt_IslandRetreat.PrimalItemSkin_SummerSwimShirt_IslandRetreat_C.ExecuteUbergraph_PrimalItemSkin_SummerSwimShirt_IslandRetreat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SummerSwimShirt_IslandRetreat_C::ExecuteUbergraph_PrimalItemSkin_SummerSwimShirt_IslandRetreat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SummerSwimShirt_IslandRetreat.PrimalItemSkin_SummerSwimShirt_IslandRetreat_C.ExecuteUbergraph_PrimalItemSkin_SummerSwimShirt_IslandRetreat");

	UPrimalItemSkin_SummerSwimShirt_IslandRetreat_C_ExecuteUbergraph_PrimalItemSkin_SummerSwimShirt_IslandRetreat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
