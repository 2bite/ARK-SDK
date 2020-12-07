// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_AberrationSword_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_AberrationSword.PrimalItemSkin_AberrationSword_C.ExecuteUbergraph_PrimalItemSkin_AberrationSword
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_AberrationSword_C::ExecuteUbergraph_PrimalItemSkin_AberrationSword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_AberrationSword.PrimalItemSkin_AberrationSword_C.ExecuteUbergraph_PrimalItemSkin_AberrationSword");

	UPrimalItemSkin_AberrationSword_C_ExecuteUbergraph_PrimalItemSkin_AberrationSword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
