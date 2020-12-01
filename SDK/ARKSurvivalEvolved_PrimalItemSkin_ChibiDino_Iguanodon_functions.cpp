// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Iguanodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Iguanodon.PrimalItemSkin_ChibiDino_Iguanodon_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Iguanodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Iguanodon_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Iguanodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Iguanodon.PrimalItemSkin_ChibiDino_Iguanodon_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Iguanodon");

	UPrimalItemSkin_ChibiDino_Iguanodon_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Iguanodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
