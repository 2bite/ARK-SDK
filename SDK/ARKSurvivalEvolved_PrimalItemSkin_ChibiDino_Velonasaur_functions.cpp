// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Velonasaur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Velonasaur.PrimalItemSkin_ChibiDino_Velonasaur_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Velonasaur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Velonasaur_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Velonasaur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Velonasaur.PrimalItemSkin_ChibiDino_Velonasaur_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Velonasaur");

	UPrimalItemSkin_ChibiDino_Velonasaur_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Velonasaur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
