// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_PoglinHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_PoglinHat.PrimalItemSkin_PoglinHat_C.ExecuteUbergraph_PrimalItemSkin_PoglinHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_PoglinHat_C::ExecuteUbergraph_PrimalItemSkin_PoglinHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_PoglinHat.PrimalItemSkin_PoglinHat_C.ExecuteUbergraph_PrimalItemSkin_PoglinHat");

	UPrimalItemSkin_PoglinHat_C_ExecuteUbergraph_PrimalItemSkin_PoglinHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
