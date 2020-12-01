// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Direwolf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Direwolf.PrimalItemSkin_ChibiDino_Direwolf_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Direwolf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Direwolf_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Direwolf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Direwolf.PrimalItemSkin_ChibiDino_Direwolf_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Direwolf");

	UPrimalItemSkin_ChibiDino_Direwolf_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Direwolf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
