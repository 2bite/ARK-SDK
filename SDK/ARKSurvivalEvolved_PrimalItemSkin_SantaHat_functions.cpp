// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SantaHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_SantaHat.PrimalItemSkin_SantaHat_C.ExecuteUbergraph_PrimalItemSkin_SantaHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SantaHat_C::ExecuteUbergraph_PrimalItemSkin_SantaHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SantaHat.PrimalItemSkin_SantaHat_C.ExecuteUbergraph_PrimalItemSkin_SantaHat");

	UPrimalItemSkin_SantaHat_C_ExecuteUbergraph_PrimalItemSkin_SantaHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
