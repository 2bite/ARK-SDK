// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_WW_Xmas_Bola_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_WW_Xmas_Bola.PrimalItemSkin_WW_Xmas_Bola_C.ExecuteUbergraph_PrimalItemSkin_WW_Xmas_Bola
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_WW_Xmas_Bola_C::ExecuteUbergraph_PrimalItemSkin_WW_Xmas_Bola(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_WW_Xmas_Bola.PrimalItemSkin_WW_Xmas_Bola_C.ExecuteUbergraph_PrimalItemSkin_WW_Xmas_Bola");

	UPrimalItemSkin_WW_Xmas_Bola_C_ExecuteUbergraph_PrimalItemSkin_WW_Xmas_Bola_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
