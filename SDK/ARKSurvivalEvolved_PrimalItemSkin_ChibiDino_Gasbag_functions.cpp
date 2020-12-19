// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Gasbag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Gasbag.PrimalItemSkin_ChibiDino_Gasbag_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Gasbag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Gasbag_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Gasbag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Gasbag.PrimalItemSkin_ChibiDino_Gasbag_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Gasbag");

	UPrimalItemSkin_ChibiDino_Gasbag_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Gasbag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
