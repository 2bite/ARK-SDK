// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Castroides_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Castroides.PrimalItemSkin_ChibiDino_Castroides_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Castroides
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Castroides_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Castroides(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Castroides.PrimalItemSkin_ChibiDino_Castroides_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Castroides");

	UPrimalItemSkin_ChibiDino_Castroides_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Castroides_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
