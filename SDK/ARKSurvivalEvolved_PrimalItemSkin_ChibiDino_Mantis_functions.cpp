// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Mantis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Mantis.PrimalItemSkin_ChibiDino_Mantis_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Mantis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Mantis_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Mantis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Mantis.PrimalItemSkin_ChibiDino_Mantis_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Mantis");

	UPrimalItemSkin_ChibiDino_Mantis_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Mantis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
