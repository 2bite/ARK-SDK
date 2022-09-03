// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_TEKRaptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_TEKRaptor.PrimalItemSkin_ChibiDino_TEKRaptor_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_TEKRaptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_TEKRaptor_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_TEKRaptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_TEKRaptor.PrimalItemSkin_ChibiDino_TEKRaptor_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_TEKRaptor");

	UPrimalItemSkin_ChibiDino_TEKRaptor_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_TEKRaptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
