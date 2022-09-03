// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Stego_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Stego.PrimalItemSkin_ChibiDino_Stego_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Stego
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Stego_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Stego(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Stego.PrimalItemSkin_ChibiDino_Stego_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Stego");

	UPrimalItemSkin_ChibiDino_Stego_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Stego_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
