// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Manta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Manta.PrimalItemSkin_ChibiDino_Manta_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Manta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Manta_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Manta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Manta.PrimalItemSkin_ChibiDino_Manta_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Manta");

	UPrimalItemSkin_ChibiDino_Manta_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Manta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif