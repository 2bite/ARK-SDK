// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Oviraptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Oviraptor.PrimalItemSkin_ChibiDino_Oviraptor_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Oviraptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Oviraptor_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Oviraptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Oviraptor.PrimalItemSkin_ChibiDino_Oviraptor_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Oviraptor");

	UPrimalItemSkin_ChibiDino_Oviraptor_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Oviraptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
